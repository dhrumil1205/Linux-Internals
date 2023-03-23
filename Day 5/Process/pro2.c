#include<stdio.h>
int main()
{

	printf("One\n");
	fork();
	fork();
	fork();
	printf("Two\n");
	while(1);
	return 0;	
}
