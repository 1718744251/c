#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//ջ��:�ֲ������������β�  ����:��̬���ٵ��ڴ棬malloc��calloc     ��̬��:ȫ�ֱ�����static���εı���
//�ݹ鳣���Ĵ���stack overflow��ջ�����

//#include<stdio.h>
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//void diaoyong(int m)
//{
//	if (m > 9)
//	{
//		diaoyong(m / 10);
//	}
//	printf("%d ", m % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("������:");
//	scanf("%d",&n);
//	diaoyong(n);
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* ch)
//{
//	//int count = 0;
//	//while ((*ch) != '\0')
//	//{
//	//	count++;
//	//	ch++;
//	//}
//	//return count;
//
//	if ((*ch) != '\0')
//	{
//		return 1 + my_strlen(ch + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char ch[] = "shirongzheng";
//	int len = my_strlen(&ch);
//	printf("len=%d", len);
//	return 0;
//}

//#include<stdio.h>
//�ݹ鷽ʽ
//int my_jiechen(int m)
//{
//	if (m <= 1)
//		return 1;
//	else
//		return m * my_jiechen(m-1);
//}
//
//int main()
//{
//	//n!=1*2*3*4*5*6..*n
//	//int num = 0;
//	//int n = 0;
//	//int ret = 1;
//	//int count = 0;
//	//printf("������׳�:");
//	//scanf("%d",&n);
//	//for (num = 1; num <= n; num++)
//	//{
//	//	ret = ret * num;
//	//	count++;
//	//	if (count == n)
//	//	{
//	//		printf("%d",count);
//	//	}
//	//	else
//	//	{
//	//		printf("%d*", count);
//	//	}
//	//}
//	//printf("=%d", ret);
//
//	int n = 0;
//	int ret = 0;
//	printf("���������Ľ׳�:");
//	scanf("%d", &n);
//	ret=my_jiechen(n); 
//	printf("ret=%d", ret);
//	return 0;
//}


//쳲�������������һ��Ч�ʼ��ͣ�
//#include<stdio.h>
//int count = 0;
//int Fib(int m)
//{
//	if (m == 3)
//	{
//		count++;
//	}
//	if (m <= 2)
//		return 1;
//	else
//		return Fib(m - 1) + Fib(m - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������쳲�������:");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d", count);
//	return 0;
//}

//쳲������������������ϸߣ�
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������쳲�������:");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int  test(int n)
//{
//	if(n<10000)
//		return test(n + 1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//���⣺1.��ŵ������  2.������̨�����⣨��ֻ����Ҫ������n��̨�ף��ж�����������

//#include<stdio.h>
//int main()
//{
//	char arr[10]="sdga";
//	return 0;
//}
//sizeof ���� arr��ռ�ռ�Ĵ�С
//strlen ���ַ����ĳ���-��\0��֮����ַ�����
//1.strlen �� sizeof û��ʲô����
//2.strlen �����ַ����ĳ���-ֻ������ַ����󳤶� -�⺯��-ʹ�õ������ļ�
//3.sizeof ������������飬���͵Ĵ�С-��λ���ֽ�-������
#include<stdio.h>
int main()
{
	return 0;
}