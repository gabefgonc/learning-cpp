from tkinter import *
import os

app = Tk()
# The title of the project
app.title("CPP_LAUNCHER")
# The size of the window
app.geometry("200x100")

entry = Entry(app)
entry.pack()

def c():
    os.system(f"gnome-terminal --command 'zsh -c \"g++ -o ./{os.path.splitext(entry.get())[0]} {entry.get()}; ./{os.path.splitext(entry.get())[0]}\"'")


# Button
l = Button(app, text="launch", command=c)
# Packing the Button
l.pack()
app.mainloop()		