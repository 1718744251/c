#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
	//char ch = 'qv';
	//char* pc = &ch;
	//*pc = 's';
	//printf("%c\n", ch);
	//printf("%d\n", sizeof(pc));

	//double d = 10.23;
	//double* pd = &d;
	//*pd = 40.454;
	//printf("%lf\n", *pd);
	//printf("%d\n", sizeof(double*));

	//�ṹ��


//	return 0;
//} 
//* - �����ò�����/��ӷ��ʲ�����
//ָ���С��32��bit��λƽ̨��4���ֽڣ�64��bit��λƽ̨��8���ֽ�
//define ���ǹؼ��ֶ���ָ��

//�ṹ�� �ؼ�����struct
//   .      �ṹ�����.��Ա
//   ->     �ṹ��ָ��->��Ա   �����ַ�������һ���ģ�
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
	//struct Book b1 = { "C���Գ������",55};
	//printf("����:%s\n", b1.name);
	//printf("�۸�:%dԪ\n", b1.price);
	//b1.price = 70;
	//printf("�޸Ĺ��ļ۸�:%dԪ\n", b1.price);

	//struct Book* pd = &b1;

	//printf("����:%s\n", (*pd).name);
	//printf("�۸�:%dԪ\n", (*pd).price);
	//printf("%s\n", pd->name);
	//printf("%d\n", pd->price);

	//b1.price=17 �ǿ���ֱ���޸ĵģ�ӦΪ���Ǳ�����b1.name="C++"�ǲ���ֱ���޸ĵģ���Ϊ����һ�����飬��������һ����ַ����ַ�ǲ����޸ĵ�
//	strcpy(b1.name, "C++"); //strcpy-string- copy -�ַ�������-�⺯��-string.h
//	printf("%s\n", b1.name); 
//	return 0;
//}
 //{}һ�������ž���һ������飬else�����������ifƥ��

//�ж�һ�����Ƿ�Ϊ����
//#include<stdio.h>
//int main()
//{
	//int num;
	//printf("������һ������");
	//scanf("%d", &num);
	//if (1 == num%2)
	//{
	//	printf("%d������\n", num);
	//}
	//else
	//{
	//	printf("%d��ż��\n", num);
	//}

	//int i;
	//int count = 1;
	//for (i = 1; i <= 100;i++)
	//{	
	//	if (1 == i % 2)
	//	{
	//		count += 1;
	//		printf("%d\t", i);
	//		if (1 == count % 5)
	//		{
	//			printf("\n");
	//		}
	//	}
	//}

	//int i;
	//i = 1;
	//int count = 1;
	//while (i <= 100)
	//{
	//	if (1 == i % 2)
	//	{	
	//		count += 1;
	//		printf("%d\t", i);
	//		if (1 == count % 5)
	//		{
	//			printf("\n");
	//		}
	//	} 
	//	i++;
	//}


	//switch�÷�

	//int day=0;
	//printf("������week��");
	//scanf("%d", &day);
	//switch(day)
	//{
	//	case 1:
	//		printf("����һ"); break;
	//	case 2:
	//		printf("���ڶ�"); break;
	//	case 3:
	//		printf("������"); break;
	//	case 4:
	//		printf("������"); break;
	//	case 5:
	//		printf("������"); break;
	//	case 6:
	//		printf("������"); break;
	//	case 7:
	//		printf("������"); break;
	//	default:
	//		printf("�������"); break;
	//}

	//getchar()�Ӽ�������һ���ַ�
	//putchar()��ʾ��һ���ַ�
	//int ch = getchar();
	//putchar(ch);


	//int ch = 0;
	//while ((ch = getchar()) != EOF)//getchar()���������Բ���ֱ���˳�������Ctrl+z ������EOF�����˳���
	//{
	//	putchar(ch);
	//}

	//int ss = 0;
	//int passwd[20] = {0};
	//printf("����������:>");
	//scanf("%s", &passwd);
	//while ('\n' != getchar())//�����while��һֱ�жϵ�\n
	//{
	//	;
	//}
	//printf("��ȷ��Y/N:");
	//ss = getchar();
	//if ('Y' == ss)
	//{
	//	printf("ȷ�ϳɹ�");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��");
	//}
	
	//do...while���
	//int i = 1;
	//do
	//{
	//	printf("%d\t", i);
	//	i++;
	//} 
	//while (i <= 10);

/*	return 0;
}*/ 
//i++ ����ʹ�ã��ټ�1    ++i ���ȼ�1����ʹ��
//break��whileѭ���е����ã�
//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ�������ԣ�while�е�break������������ֹѭ���ġ�
//continue��whileѭ���е����þ��ǣ�
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�


#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	//����n�Ľ׳�
	//int i = 0;
	//int n = 0;
	//int sum = 1,sum1=0;
	//printf("������:");
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	sum = sum * i;
	//	sum1 = sum1 + sum;
	//}
	//printf("%d", sum1);

	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//printf("������:");
	//scanf("%d",&n);
	//for (n = 1; n <= 3; n++)
	//{
	//	ret = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	sum = sum + ret;
	//}
	//printf("%d", sum);


	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//printf("������׳�:");
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{	
	//	ret = ret * i;
	//	printf("%d", i);
	//	if (i ==n)
	//	{
	//		break;
	//	}
	//	else
	//	{
	//		printf("*");
	//	}
	//}
	//printf("=%d", ret);

	//���ֲ��ҷ���
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 1;//����Ԫ��
	//int as = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
	//int left = 0;//���±�
	//int right = as-1;//���±�
	//
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ���,�±���:%d", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("�Ҳ���\n");
	//}


	//char arr1[] = "shirongzheng haoshuai!!!";
	//char arr2[] = "########################";
	//int left = 0;
	//int right = strlen(arr1) - 1;//�������sizeof(arr1)/sizeof(arr1[0])-2,��Ϊ�ַ������������ص�\n
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	Sleep(500);
	//	//system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
	//	printf("%s", arr2);
	//	printf("\n");
	//}
	//

	int password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", &password);
		if (strcmp(password,"123456")==0)//if(password=="123456")���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("��¼ʧ��\n");
		}
	}
	if (i == 3)
	{
		printf("�������ξ������˳�����\n");
	}
	return 0;
}