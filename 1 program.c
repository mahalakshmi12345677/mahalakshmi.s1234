#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("===== operation and expression====\n");
	printf("enter the first number;");
	scanf("%d",&a);
	printf("enter the second number.");
	scanf("%d",&b);
	printf("/n-----menu----\n");
	printf("addition\n");
	printf("subraction\n");
	printf("multiplication\n");
	printf("division\n");
	printf("modules\n");
	printf("/n enter your choice:");
	scanf("%d",& choice);
	switch(choice)
	{
		case1:
		res=a+b;
		printf("Result=%d",res);
		break;
		case2:
		res=a-b;
		printf("Result=%d",res);
		break;
		case3:
	res=a*b;
		printf("Result=%d",res);
		break;
		case4:
		res=a%b;
		printf("Result=%d",res);
		break;
		case5:
		res=a/b;
		printf("Result=%d",res);
		break;
		default:
			printf("invalid choice");
			
		}
		return 0;
		
		
		
		
			
	}
