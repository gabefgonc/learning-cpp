/*
	Creating Hangman game in c++ as a challenge from the teacher.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <cstring>

using namespace std;

int main(){

	srand(time(NULL));

	char words[][20] = {"banana", "abacaxi", "melao", "melancia", "laranja", "tangerina"};

	int randomWordIndex = rand() % 6;

	string word;

	word = words[randomWordIndex];

	char word_in_char[word.length() + 1];

	strcpy(word_in_char, word.c_str());

	int hits = 0;
	int chances = 7;

	char in_progress[word.length() + 1] = {};

	for(int i = 0; i < sizeof(in_progress) - 1; i++){
		in_progress[i] = '_';
	}

	in_progress[(sizeof(in_progress) / sizeof(in_progress[0])) - 1] = '\0';

	while((chances > 0) && (hits <= word.length())){
		int num_of_hit_letters = 0;
		int correct_letters_count = 0;
		for(int i = 0; i < sizeof(word_in_char); i++){
			if(in_progress[i] == word_in_char[i]){
				correct_letters_count++;
			}
		}

		if(correct_letters_count >= sizeof(word_in_char)){
			cout << "voce venceu o jogo! parabens por perder seu tempo nesta porcaria deste jogo!" << endl;
			exit(EXIT_SUCCESS);
		}
		cout << endl << "suas chances: " << chances << endl;
		cout << "como está ficando a palavra: " << in_progress << "\n";
		cout << "Digite uma letra: ";
		char guessed_letter = ' ';
		cin >> guessed_letter;
		for(int i = 0; i < sizeof(word_in_char); i++){
			if(guessed_letter == word_in_char[i]){
				in_progress[i] = guessed_letter;
				num_of_hit_letters++;
				hits++;
			}
		}

		if(num_of_hit_letters > 0){
			cout << "parabens! voce acertou " << num_of_hit_letters << " letra(s)!!" << endl;
		}

		int k = 0;
		for(int j = 0; j < sizeof(word_in_char); j++){
			if(guessed_letter != word_in_char[j]){
				k++;
			}

			if(k >= sizeof(word_in_char)){
				cout << "achou errado, otario! perdeu uma chance" << endl;
				chances--;
				break;
			}
		}
	}

	cout << "Voce perdeu o jogo, melhora na proxima!" << endl;

	return 0;
}