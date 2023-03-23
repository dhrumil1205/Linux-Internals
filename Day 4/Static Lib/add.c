#include<stdio.h>
#include"file.h"//Forcing C pre processor to check header file in repository
int main()
{
int a=10,b=5;
printf("Addition :%d\n",add(a,b));
printf("Subtraction :%d\n",sub(a,b));
return 0;
}
