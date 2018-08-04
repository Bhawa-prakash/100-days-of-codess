/* program to reverse a String          */
# include<stdio.h>
# include<conio.h>
# include<string.h>

int main()
{
char s[20];
clrscr();
printf("enter a string");
gets(s);
strrev(s);
printf("%s",s);
getch();

}
