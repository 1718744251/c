#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
	//int a = -1;
	////>> -- ���Ʋ�����-->1.�������ƣ��ұ߶�������߲�ԭ����λ��  2.�߼����ƣ��ұ߶�������߲�0��
	//// �����Ķ����Ʊ�ʾ��:Դ�룬���룬����
	////�洢���ڴ���ǲ���
	////10000000000000000000000000000001 -ԭ��
	////11111111111111111111111111111110 -���� 
	////11111111111111111111111111111111 -����
	//int b = a >> 1;
	//printf("%d ", b);
	//int a = 5;
	//int b = a << 1;
	//printf("%d ", b);

	//�����õ��������������������н���
	//int a = 5;
	//int b = 9;
	//a = a ^ b;
	//b = a ^ b;
	//	a = a ^ b;

	//a = a + b;//ջ���
	//b = a - b;
	//a = a - b;
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
	//��һ�����ж������е�1�ĸ���
	//int input = 0;
	//int i = 0;
	//int count = 0;
	//printf("������һ����:");
	//scanf("%d", &input);
	//for (i = 0; i < 32; i++)
	//{
	//	if (1 == ((input >> i) & 1))
	//	{
	//		count++;
	//	}
	//}
	//printf("count=%d", count);

	//int a = 10;
	//printf("a=%d\n", a);
	//int* p = &a;
	//*p = 30;
	//printf("a=%d\n", *p);

	//~���������ƣ�λȡ��
	//int a = 0;//000000000000000000000000ԭ��
	//		  //111111111111111111111111����
	//		  //111111111111111111111110����
	//		  //100000000000000000000001ԭ��
	//printf("%d\n", ~a);

	//int a = 11;//00000000000000000000000000001011ԭ��
	//		   //11111111111111111111111111110100����
	//		   //11111111111111111111111111110101����
	//		   //10000000000000000000000000001010ԭ��
	//printf("%d\n", ~a);

	//int a = 11;       //00000000000000000000000000001011
	//                  //00000000000000000000000000000100
	//a = a | (1 << 2); //00000000000000000000000000001111
	//printf("%d\n", a);//
	//a = a & (~(1 << 2));//00000000000000000000000000001111
	//                    //00000000000000000000000000000100                            
	//printf("%d\n", a);  //00000000000000000000000000001011

	//int a = 5;
	//printf("%d\n", a++);//5
	//printf("%d\n", a++);//6

	//ǿ������ת��
	//int a = (int)3.14;
	//printf("%d ",a);

	//0011
	//0101
	//int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("������:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 2; j <=sqrt(i); j++)
//		{	
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		/*if (j == i)
//		{
//			printf("%d ", i);
//		}*/
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;           
//	                    
//}          

//#include<stdio.h>
//����һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1������ʼ��
	//struct Stu s1 = {"ʷ����",21,"20200129032"};
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);

	//struct Stu* ps = &s1;
	//printf("%s\n", ps->name);
	//printf("%d\n", ps->age);
	//printf("%s\n", ps->id);
	//�ṹ��ָ��->��Ա��

	////���ַ�������һ����
	//printf("%s\n", (*ps).name);
	//printf("%d\n", (*ps).age);
	//printf("%s\n", (*ps).id);
//	return 0;
//}
//ԭ��->���룺ԭ��ȡ����1�õ�����
//����->ԭ�룺�����1ȡ���õ�ԭ��


//ָ��
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p; *p�ܹ�����4���ֽ�
//char* p; *p�ܹ�����1���ֽ�
//double* p; *p�ܹ�����8���ֽ�
//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ���)
//int* p;p+1-->4
//char* p;p+1-->1
//double* p;p+1-->8

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	float* p = &a;
// 	printf("%f ", *p);
//	return 0;
//}


// Ұָ��
//#include<stdio.h>
//int main()
//{
//	int* p;//δ��ʼ����ָ�����
//	*p = 20;
//
//	return 0;
//}

//����Խ������ˣ�Ұָ��
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		p++;//����д��    *p++=i;
//	}
//	return 0;
//}


//����һ�����ش���Ĵ��룬���������ֲ�����
//#include<stdio.h>
//int* test()
//{
//	int a = 10;//�����a�ĵ�ַ����ʱ�ģ���ȥ�������ˣ������a�Ǿֲ�����
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//��α���Ұָ�룿
//1.ָ���ʼ�� int* p=NULL; //NULL - ������ʼ��ָ��ģ���ָ�븳ֵ //��ָ��ΪNULl���գ�ʱ�����ܱ�����
//2.С��ָ��Խ��
//3.ָ��ֻ��ռ��ͷż�ʹ��NULl
//4.ָ��ʹ��֮ǰ�����Ч��

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	for (i = 0; i < sz; i++)
//	{
//		
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//#include<stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	printf("%f ", *vp);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,11,23 };
//	printf("%d\n", &arr[8] - &arr[0]);
//	return 0;
//}
// 
//int arr[10]={1,2,3,4,5,6,7,8,9,10};
// &arr[9]-&arr[0]
//ָ��-ָ�룺�õ��м��Ԫ�ظ���

//strlen
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end =str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = {1,2,0};
//	int len = strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ - ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	//1.&arr-&������- ������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)-sizeof(������) - ��������ʾ����������- sizeof(������)���������������Ĵ�С
//	return 0;
//}

//����ָ�����
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	int** * pppa = &ppa;//pppa��������ָ�룬�Դ�����
//	**ppa = 34;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//�ú��� - ����
//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;

	//int* arr2[] = { &a,&b,&c };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *arr2[i]);//������
	//}

//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������:>");
//	scanf("%d%d%d", &a,&b,&c);
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b > c)
//	{
//		int temp = b;
//		b=c;
//		c = temp;
//	}
//	if (a > c)
//	{
//		int temp = a;
//		a=c;
//		c = temp;
//	}
//	printf("%d<%d<%d", a, b, c);
//	return 0;
//}

#include <stdio.h>
main()
{
	int a = 5, b, c, i = 10;
	b = a++;
	c = ++b;

	printf("a = %d, b = %d, c = %d\n", a, b, c);//6 5 6         6 6 6 
	printf("i,i++,i++ = %d,%d,%d\n", i, i++, i++);//10 10 11    12 11 10
	printf("%d\n", ++i);//13
	printf("%d\n", --i);//12
	printf("%d\n", i++);//12
	printf("%d\n", i--);//13
	printf("%d\n", -i++);//-12
	printf("%d\n", -i--);//-13
	getchar();
}