/*  with out using predefined number*/
main()
{
char s[20];
int i;
printf("enter a string");
gets(&s[0]);
for(i=1; s[i]!='\0';i++);
printf("length is %d",i);
getch();


}
