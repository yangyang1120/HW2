#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, x = 4, y = 1 ;
	for (i = 0;i < 5;i++)//���
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
		x -= 1;  //�Ÿ��̧Ǵ��
		printf("\n");

	}
	y = 1, x = 7; //x�By�i���s�w�q�A�Y�S���s�w�q�Ay�h�q10�}�l
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
		y += 1; //(��b�j��~)�Ÿ��̧ǼW�[
		printf("\n");
		}
	system("pause");
}