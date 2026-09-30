#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("===== BITWISE OPERATION====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("/n---MENU---\n");
	printf("1.Bitwise AND (&) \n");
	printf("2.bitwise OR (1) \n");
	printf("3.bitwise Xor (^)\n");
	printf("4.bitwise Not(~)\n");
	printf("5.left shift(<<)\n ");
	printf("6.Right shift (>>)\n");
	printf("enter your choice:");
	scanf("%d",& choice);
	switch(choice)
	{
		case1:
			res=a&b;
			printf("Bitwise And result=%d",res);
			break;
		case 2:
			res=a/b;
			printf("Bitwise OR Result=%d",res);
			break;
		case 3:
			res=a^b;
			printf("bitwise XOr Result=%d",res);
			 break;
	    case 4:
		    res=~a;
			printf("bitwise Not result=%d",res);
			break;
		case 5:
		    res=a<<b;
			printf("left shift result=%d",res);
			break;
		case 6:
		    res=a>>b;
			printf("Right shift result=%d",res);
			break;
		default:
		printf("Invalid choice:");
	}
	return 0;
 }
				 
				 		 
	
	
