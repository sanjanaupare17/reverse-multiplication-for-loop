#include<stdio.h>
int main ()
{
	int i, num;
	printf("write num:  ");
	scanf("%d",&num);
	for(i=10; i; i--)
	{
		printf("%d x %d = %d\n",i,num,i*num);
	}
}
