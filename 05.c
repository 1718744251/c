
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}	
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1);
//		{
//			printf("%d\t", i);
//		}
//	}
//	return 0;
//}




//ʹ�õ��ú�����ʵ��1000-2000�����������
//#include<stdio.h>
//int is_leap_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i%400==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<math.h>
//int is_prime(int y)
//{
//	int u = 0;
//	for (u = 2; u <=sqrt(y); u++)
//	{
//		if (y % u == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int m = 0;
//	for (m = 1; m <= 100; m++)
//	{
//		//ʹ�õ��ú������ж��Ƿ�Ϊ����
//		
//		if (is_prime(m) == 1)
//		{
//			printf("%d ", m);
//		}
//	}
//	return 0;
//}



//���ַ���������
//#include<stdio.h>
//int binary_search(int arr[], int k,int as)
//{
//	int left = 0;
//	int right = as-1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±ֻ꣬����ѭ����
//		if (arr[mid] >k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =8;
//	int as = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, as);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else 
//	{ 
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//		printf("������%d", arr[ret]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//
//void Add(int* num)
//{
//		(*num)++;//*p����Ҫ������
//}
//int main()
//{
//	int num = 0;
//	int i = 1;
//	while (i<=100)
//	{
//		Add(&num);
//		printf("��%d�ε��ú���\n", num);
//		Sleep(1);
//		i++;
//	}
//	return 0;
//
//}


//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//#include<stdio.h>
//int main()
//{
//	int ch = "asdd";
//	int len = strlen(ch);
//	printf("%d\n", len);
//
//	printf("%d", strlen(ch));
//}

#include<stdio.h>
int main() 
{
	printf("%d", printf("%d",printf("%d",printf("%d",43))));
	return 0;
}