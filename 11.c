#define _CRT_SECURE_NO_WARNINGS 1
//��1,2,3,4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int count = 0;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			for (k = 0; k < 5; k++)
//			{
//				if (i != j && i != k && j != k)
//				{
//					printf("%d%d%d\t", i, j, k);
//					count++;
//					if (count % 5 == 0)
//					{
//						printf("\n");
//					}
//				}
//				
//			}
//		}
//	}
//	printf("count=%d", count);
//}

//��ҵ���ŵĽ������������ɡ���ʵ���ǿ����ࡣ
//#include<stdio.h>
//double fun(int profit)
//{
//	int sum = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	int sum4 = 0;
//	int sum5 = 0;
//	sum = 100000 * 0.1;
//	sum1 = sum + (profit - 100000) * 0.075;
//	sum2 = sum1 + (profit - 200000) * 0.05;
//	sum3 = sum2 + (profit - 400000) * 0.03;
//	sum4 = sum3 + (profit - 600000) * 0.015;
//	sum5 = sum4 + (profit - 1000000) * 0.01;
//	if (profit > 0 && profit <= 100000)
//	{
//		return sum;
//	}
//	else if (profit > 100000 && profit <= 200000)
//	{
//		return sum1;
//	}
//	else if (profit > 200000 && profit <= 400000)
//	{
//		return sum2;
//	}
//	else if (profit > 400000 && profit <= 600000)
//	{
//		return sum3;
//	}
//	else if (profit > 600000 && profit <= 1000000)
//	{
//		return sum4;
//	}
//	else if (profit > 1000000)
//	{
//		return sum5;
//	}
//}
//int main()
//{
//	int profit = 0;
//	double set = 0;
//	printf("����������:>");
//	scanf("%d", &profit);
//	set = fun(profit);
//	printf("���Ϊ:%.4lf ", set);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double i;
//	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	printf("��ľ������ǣ�\n");
//	scanf("%lf", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.075;
//	bonus4 = bonus2 + 200000 * 0.05;
//	bonus6 = bonus4 + 200000 * 0.03;
//	bonus10 = bonus6 + 400000 * 0.015;
//	if (i <= 100000) 
//	{
//		bonus = i * 0.1;
//	}
//	else if (i <= 200000) {
//		bonus = bonus1 + (i - 100000) * 0.075;
//	}
//	else if (i <= 400000) {
//		bonus = bonus2 + (i - 200000) * 0.05;
//	}
//	else if (i <= 600000) {
//		bonus = bonus4 + (i - 400000) * 0.03;
//	}
//	else if (i <= 1000000) {
//		bonus = bonus6 + (i - 600000) * 0.015;
//	}
//	else if (i > 1000000) {
//		bonus = bonus10 + (i - 1000000) * 0.01;
//	}
//	printf("���Ϊ��bonus=%lf", bonus);
//
//	printf("\n");
//}

//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//�������Ϊx
// 
//      ��x+100=n*n,x+100+168=m*m
//�����ʽ��m*m-n*n=(m+n)(m-n)=168
//    ���ã�m+n=i,m-n=j,i*j=168,i��j����һ����ż��
//    �ɵã�m=(i+j)/2,n=(i-j)/2,i��jҪô����ż����Ҫô��������
//          ��3��4�Ƶ���֪����i��j���Ǵ��ڵ���2��ż��
//          ����i*j=168��j>=2,��1<i<168/2+1
//��������i����������ѭ�����㼴��

//#include<stdio.h>;
//int main()
//{
//	int i, j, m, n, x;
//	for (i = 1; i < 168 / 2 + 1; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				m = (i + j) / 2;
//				n = (i - j) / 2;
//				x = n * n - 100;
//				printf("%d+100=%d*%d\n", x, n, n);
//				printf("%d+268=%d*%d\n", x, m, m);
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0; 
//	int temp = 0;
//	printf("������������:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//    if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d<%d<%d", a, b, c);
//	return 0;
//}

//��ʹ����ʱ����������������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������:\n");
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//                  *******
//                * 
//                *
//                *
//                  *******
//                     *
//


//#include<stdio.h>
//int main()
//{
//	printf(" ******\n");
//	printf("*\n");
//	printf("*\n");
//	printf("*\n");
//	printf(" ******\n");
//	printf("   *\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 == 0)
//			{
//				printf("%c%c", 219, 219);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	int i, j;
//	SetConsoleOutputCP(437);
//	char a = 176, b = 219;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (i == j || (i + j + 1) == 5)
//				printf("%c", b);
//			else
//				printf("%c%c", a, a);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//2+22+222+2222+22222...
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int m;
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	printf("�����뼸�������,�����Ϊ��:>\n");
//	scanf("%d%d", &n,&m);
//	for (i = 1; i <= n; i++)
//	{
//		double p=pow(m, i);
//		sum = sum + p;
//		count++;
//		int k;
//		if (count == n )
//		{
//			printf("%.0f", p);
//		}
//		else
//		{
//			printf("%.0f+", p);
//		}
//	}
//	printf("=sum\n");
//	printf("sum=%d\n", sum);
//	return 0;
//}

//��һ���������ֽ������������磺����90����ӡ��90=2*3*3*5��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("����������:>");
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++)
//	{
//		while(n%i==0)
//		{
//			printf("%d", i);
//			n = n / i;
//			if (n != 1)
//			{
//				printf("*");
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	printf("����������:>");
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		while(n % i == 0)
//		{
//			printf("%d", i);
//			n = n / i;
//			if (n != 1)
//			{
//				printf("*");
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, n;
//	printf("����������:>");
//	scanf("%d", &n);
//	printf("%d=", n);
//	i = 2;
//	while (n > i)
//	{
//		if (n % i == 0)
//		{
//			printf("%d*", i);
//			n /= i;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	printf("%d\n", i);
//}

//#include<stdio.h>
//int min(int m,int n)
//{
//	return m * n;
//
//}
//int max(int m, int n)
//{
//	int i = 0;
//	while ((m % i == 0)&&(n % i == 0))
//	{
//		if ((m % i == 0) && (n % i == 0))
//		{
//			m = m % i;
//			n = n % i;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return i;
//}
//int main()
//{
//	int m, n,ret,ret1;
//	printf("����������������:>");
//	scanf("%d%d", &m, &n);
//	ret = max(m,n);
//	printf("���Լ��:%d\n");
//	ret1 = min(m,n);
//	printf("��С������:%d\n"); 
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a, b, t, r, n;
	printf("��������������:\n");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		t = b;
		b = a;
		a = t;
	}
	r = a % b;
	n = a * b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("�������������Լ����%d,��С��������%d\n", b, n / b);
	return 0;
}





