#define _CRT_SECURE_NO_WARNINGS 1
//����
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}


//ð������
//#include<stdio.h>
//int bubble_sort(int arr[], int as)
//{
//	int i = 0;
//	for (i = 0; i < as-1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int n = 0;
//		for (n = 0; n < as - 1 - i; n++)
//		{
//			if (arr[n] < arr[n + 1])
//			{
//				int temp = arr[n];
//				arr[n ] = arr[n + 1];
//				arr[n + 1] = temp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)//������Ż���Ч�ʱ�ԭ���ߣ�
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,1,2,3,4,5,6,7,8 };
//	int i = 0;
//	int as = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, as);
//	for (i = 0; i < as; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 
