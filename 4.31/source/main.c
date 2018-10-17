#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, x = 4, y = 1 ;
	for (i = 0;i < 5;i++)//行數
	{
		for (j = 0;j < x;j++)
		{
			printf(" ");

		}
		for (j = 0;j < y;j++)
		{
			printf("*");

		}
		y += 2;
		x -= 1;  //空號依序減少
		printf("\n");

	}
	y = 1, x = 7; //x、y可重新定義，若沒重新定義，y則從10開始
		for (i = 0;i < 5;i++)
	
		{ 
		for (j = 0;j < y;j++)
		{
			printf(" ");

		}
		for (j = 0;j < x;j++)
		{
			printf("*");

		}
		x-= 2;
		y += 1; //(放在迴圈外)空號依序增加
		printf("\n");
		}
	system("pause");
}