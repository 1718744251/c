#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("������:");
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//} 

//#include<stdio.h>
//#define MAX(x,y)(x>y?x:y)//�궨��
//int MAx(int x, int y)//�Զ��庯��
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//		return x;
//	}
//	else
//	{
//		z = y;
//		return z;
//	}
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	int Max = MAx(a, b);
//	printf("max=%d\n", max);
//	printf("Max=%d\n", Max);
//	return 0;
//}
 
//����ʵ��������֮��Ľ��� 
// ��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�ε�           �����Կ��ٻ��ʣ�
//#include<stdio.h>
//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	printf("a=%d,b=%d\n", a, b);
//  ����Swap����                   (��ֵ����)
//	Swap(a,b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//void Swap1(int* pa, int* pb)//����һ��ָ�����
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 11;
//	int b = 99;
//	printf("ԭ����:a=%d b=%d\n", a, b);
//	//����Sawp1��������ַ���ã�
//	Swap1(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//void Swap()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n <= i; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d\t", i);
//			count++;
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("count=%d\n", count);
//}
//int main()
//{
//	Swap();
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int is_prime(int n)
{	
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		
		if(is_prime(i)==1);
		{
			printf("%d ", i);
		}
	}
	return 0;
}