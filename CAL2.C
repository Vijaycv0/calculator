#include<stdio.h>
void main()
{
int a,b,c,d;
clrscr();
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	do
	{
	printf("\n1=addition\n2=subtraction\n3=divition\n4=multiplication\n5=exit");
	printf("\nenter your choice");
	scanf("%d",&c);
		switch(c)
		{
		case 1:d=a+b;
			printf("\nanswer=%d",d);
			break;
		case 2:d=a-b;
			printf("\nanwer=%d",d);
			break;
		case 3:d=a/b;
			printf("\nanswer=%d",d);
			break;
		case 4:d=a*b;
			printf("\nanswer=%d",d);
			break;
		}
		}while(c!=5);
		getch();
		}