from tkinter import *
import webbrowser

i=Tk()
i.title("AAPKA APNA BROWSER")
i.geometry('300x300')

lab=Label(i, text="GHANTA DEKHO")
lab.grid(row=0, column=0)


E =Entry(i)
E.grid(row=0,column=1)
E.focus()


def show():
        webbrowser.open("https://www.google.com/search?site=&q="+E.get())


btn=Button(i, text="search",command=show)
btn.grid(row=0,column=2)

i.mainloop()
