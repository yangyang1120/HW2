#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,t, tl,b,r;
	double s,a;
		while (1)
		{
			printf("請輸入員工薪資代碼:");
			scanf_s("%d", &i);
			switch (i)
			{
			case 1:
				printf("經理人員的週薪:$5000\n");
				break;
			case 2:
				printf("請輸入工作時數:");
				scanf_s("%lf", &a);
				if (a < 40)
				{
					t = a * 140;
					printf("時薪工的週薪:%d\n", t);
				}
				else
				{
					t = (1.5*a-20)*140;
					printf("時薪工的週薪:%d\n", t);
				}
				break;
			case 3:
				printf("當週銷售經額:");
				scanf_s("%d", &tl);
				printf("抽傭金工的週薪:%.0lf\n",250+(tl*0.057));
				break;
			case 4:
				printf("每週生產的件數:");
				scanf_s("%d", &b);
				printf("每件數酬勞:");
				scanf_s("%d", &r);
				printf("零工的週薪:%d\n", r*b);
				break;
			}
		}
		system("pause");
}