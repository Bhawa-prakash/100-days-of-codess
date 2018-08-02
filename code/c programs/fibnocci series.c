
\* progrm to print fibonacci series with recurion    */
main()
{

int fib(int);
int i,n;
clrscr();
printf("enter how many  fibonacci terms you want to see");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("%d", fib(i));
getch();
}

int fib(int n)
{
if(n==1::n==2)
return(1);
return(fib(n-1)+fib(n-2));
}


