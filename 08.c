#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>//system
#include<string.h>//strcmp
int main()
{
	int a = 3;
	int b = 5;
	//printf("ԭ����:a=%d b=%d\n", a, b);  //��������⣬���������������������ֵʱ���������ֻ�ܽ�����ֱȽ�С������
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("������:a=%d b=%d\n", a, b);
	//a = a + b;
	
	//printf("ԭ����:a=%d b=%d\n", a, b);// ^ ���������ƣ�λ��� a (011)  b(101)
	//a = a ^ b;//a (110) b (101) //��Ϊ1��ͬΪ0
	//b = a ^ b;//a (110) b (011)
	//a = a ^ b;//a(101)  b (011)
	//printf("������:a=%d b=%d\n", a, b);

	//
	//int arr[] = {1,2,3,4,5,1,2,3,4};
	//int sz = sizeof(arr) / sizeof(arr[1]);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	int j = 0;
	//	int count = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (1 == count)
	//	{
	//		printf("������%d", arr[i]);
	//		break;
	//	}
	//}

	//  ����:    0^n=n;0^0=0;n^n=0;
	//int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
	//int sz = sizeof(arr) / sizeof(arr[1]);
	//int i = 0;
	//int ret = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	ret = ret ^ arr[i];
	//}
	//printf("������%d", ret);

	//�ػ�С����
	 
	//char input[20] = { 0 };
	//system("shutdown -s -t 60");
	//again:
	//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	//	printf("����������:");
	//	scanf("%s", &input);
	//	while (1)
	//	{
	//		if (strcmp(input, "������")==0)
	//		{
	//			system("shutdown -a");
	//			printf("��ϲ����������ȡ���ػ�\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("�������������һ�Σ�\n");
	//			goto again;
	//		}
	//	}


	return 0;
}