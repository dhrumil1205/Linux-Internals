#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);

	switch(n)
	{
		case 1 :
			printf("Result = One\n");
			break;
		case 2 :
			printf("Result = Two\n");
			break;
		case 3 :
			printf("Result = Three\n");

		default :
			printf("Invalid\n");
			break;
	
	}
	return 0;
}

