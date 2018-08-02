/* program which allow a integer input only  */
main()
{
	int a;
	clrscr();
	x=getIntergerOnly;
	printf("enter a number &d",x);
	getch();
	}
  
int getIntergerOnly()
{
	int num=0,ch;
	do
	{
		ch=getch();
		if (ch>=48&&ch<=57)
		{
		 printf("%c",ch);
         num=num*10+(ch-48);		 
	 }
		if(ch==13)
			break;
		}while(1);
		return(num);
	
}
	
