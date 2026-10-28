#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("++++++ branching statement+++++/n");
	printf("Enter the first number:");
	scanf("%d",& a);
	printf("enter the second number:");
	scanf("%d",& b);
	printf("\n=======MENU=======\n");
	printf("1.click position,negative or zero\n");
	printf("2.check even or odd\n");
	printf("3.find largest of two number\n");
	printf("4.check divisible by 5\n");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	printf("\n-------RESULT-------\n");
	switch(choice)
	{
		case 1:
			if(a>0)
		         printf("%d is positive",a);
			else if(a<0)
			     printf("%d is negative",a);
			else
			     printf("%d is zero",a);
		    break ;
			case 2:
			if(a % 2==0)
			printf("%d is even",a );
			else
			printf("%d is odd",a);
			break;
			case 3:
			if (a>b)
			{
				res=a;
				printf("%d is the largest number",res);
			}
			else if(b>a)
			{
			res=b;
			printf("%d is the largest number",res );	
			}
			else
			{
				printf("both number are equal");
			}
			break;
			case 4:
			if(a%5==0)
			printf("%d is divisible by 5",a);
			else
			printf("%d is not divisible by 5",a);
			break;
			default:
				printf("Invalid choice");
			}
			return 0;
		}
			
			
			
			
			
			
			
			
					    

	
	
