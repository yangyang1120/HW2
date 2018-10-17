#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t=0,y,i;
	printf("(A)\t\t(B)\t\t(C)\t\t(D)\n");
	for (i=0;i <= 9;i++)
	{
		for (y = 0;y <= t;y++)
		{
			printf("*");
		}
		for (y = 9;y >= t;y--)
		{
			printf(" ");
		}
		printf("\t");
		for (y = 9;y >= t;y--)
		{
			printf("*");
		}
		for (y = 0;y <= t;y++)
		{
			printf(" ");
		}
		printf("\t");
		for (y = 0;y <= t;y++)
		{
			printf(" ");
		}
		for (y= 9;y >= t;y--)
		{
			printf("*");
		}
		printf("\t");
		for (y = 9;y >= t;y--)
		{
			printf(" ");
		}
		for (y = 0;y <= t;y++)
		{
			printf("*");
		}
		printf("\n");
			t += 1;
	}
	system("pause");

}