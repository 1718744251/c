#define _CRT_SECURE_NO_WARNINGS 1

//��1-100֮������е�9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d\t", i);
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d\t", i);
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5-1/6....+1/99-1/100 //���ַ���
//#include<stdio.h>
//int main()
//{
	//��һ�ַ���:

	//int i = 0;
	//double sum = 0.0;
	//int flag=1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += flag * 1.0 / i;//ʵ��   - + - + - +...  ţ�Ƶ�˼·  /    (i%2 ? 1 : -1)
	//	flag = -flag;
	//}
	//printf("sum=%lf", sum);


	//�ڶ��ַ���:�ֳ���ż��

	//int i, j;
	//float sum = 0;
	//float sum1 = 0;
	//float sum2 = 0;
	//for (i = 1; i < 100; i += 2)
	//{
	//	sum1 += 1.0 / i;
	//}
	//for (j = 2; j <= 100; j += 2)
	//{
	//	sum2 += 1.0 / j;
	//}
	//sum = sum1 - sum2;
	//printf("sum=%f", sum);

	//�Ƚ�10�����е������
	//�����һ������max��Ȼ����ÿһ�����������Ƚ�
	//int arr[] = { -1,-2,-3,-4100,-5,-6,-99,-8,-9,-10 };
	//int i = 0;
	//int max=arr[0];
	//int as = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < as; i++)
	//{
	//	int temp = 0;
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max=%d\n",max);

	//�žų˷���
	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%d\t ", i, j, i * j);
	//	}
	//	printf("\n");
	//}


	

//	return 0;
//}
//#include<stdio.h>
//
//#include<time.h>
//void meun()
//{
//	printf("*****************************************************\n");
//	printf("*******   1.������Ϸ            0.�˳���Ϸ   ********\n");
//	printf("*****************************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	ret = rand()%100+1;
//	int guess = 0;
//	
//	while (1)
//	{
//		printf("�����(0��100֮��)>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//			
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//			
//		}
//		else if (guess == ret)
//		{
//			printf("��ϲ�㣬�¶��ˣ�����\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ���:��ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0.0)=(xxxx)��
//	do {
//		meun();
//		printf("��ѡ��(0��1)>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������룡��\n");
//			break;
//		}
//
//	} while(input);
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	char input[20] = { 0 };
again:
	printf("������(sss):");
	scanf("%s", &input);
	if (strcmp(input,"sss")==0)
	{
		printf("ƥ��ɹ�\n");
		printf("��ɵ��\n");

	}
	else
	{
		printf("ƥ��ʧ�ܣ���������һ��\n");
		goto again;
	}

	return 0;
}