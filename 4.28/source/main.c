#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,t, tl,b,r;
	double s,a;
		while (1)
		{
			printf("�п�J���u�~��N�X:");
			scanf_s("%d", &i);
			switch (i)
			{
			case 1:
				printf("�g�z�H�����g�~:$5000\n");
				break;
			case 2:
				printf("�п�J�u�@�ɼ�:");
				scanf_s("%lf", &a);
				if (a < 40)
				{
					t = a * 140;
					printf("���~�u���g�~:%d\n", t);
				}
				else
				{
					t = (1.5*a-20)*140;
					printf("���~�u���g�~:%d\n", t);
				}
				break;
			case 3:
				printf("��g�P��g�B:");
				scanf_s("%d", &tl);
				printf("��Ī��u���g�~:%.0lf\n",250+(tl*0.057));
				break;
			case 4:
				printf("�C�g�Ͳ������:");
				scanf_s("%d", &b);
				printf("�C��ƹS��:");
				scanf_s("%d", &r);
				printf("�s�u���g�~:%d\n", r*b);
				break;
			}
		}
		system("pause");
}