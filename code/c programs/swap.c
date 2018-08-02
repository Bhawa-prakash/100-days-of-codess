
/* program of swapping without third variable */
main()
{
int a,b;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
getch();
}
