/*
#include<stdio.h>
int main()
{
	int a,add[8], jiaohuang;
	printf("�����룺");
	for (a = 0; a <= 7; a++)
	scanf_s("%d", &add[a]);
	add[a] = a;
	for (a = 0; a <= 7; a++)
	{
		if (add[a] > add[a + 1])

		{
			jiaohuang = add[a];
			add[a] = add[a + 1];
			add[a + 1] = jiaohuang;
		}
	}
				printf("%d\t", add[a]);
	for ( a = 0; a <=7; a++)
	{
		printf("%d\t",add[a]);
	}
}*/
/*
#include<stdio.h>
void add(kai);
int main()
{
	int a;
	printf("������:\n");
	scanf_s("%d\n", &a);
	add(a);
	return 0;
}
void add(kai)
{
	int j = 0, i = 0;
	float m, n, p;
	float sum1 = 0, sum2 = 0, sum3 = 0;
	int max1 = 0, max2 = 0, max3 = 0;
	int arr1[7] = { 1,4,8,11,9,5,6 };
	int arr2[6] = { 3,7,11,5,9,1 };
	int ass[3][6] = { {2456,1847,1243,1600,2346,2757 },{3045,2018,1725,2020,2458,1436},{1427,1175,1046,1976,1477,2018} };
	ass[i][j] = max1;
	ass[i][j] = max2;
	ass[i][j] = max3;
	switch (kai)
case 1:
	{
		for (i = 0; i < 1; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				sum1 += ass[i][j];
				m = sum1 / 6;
			}
			printf("%.2f\n", m);
		}
		for (i = 1; i < 2; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				sum2 += ass[i][j];
				n = sum2 / 6;
			}
			printf("%.2f\n", n);
		}
		for (i = 2; i < 3; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				sum3 += ass[i][j];
				p = sum3 / 6;
			}
			printf("%.2f\n", p);
		}
			break;
		
case 2:
{
	for (i = 0; i < 1; i++)
		for (j = 0; j <= 5; j++)
		{
			if (ass[i][j] > max1)max1 = ass[i][j];
		}
	printf("max1=%d\n", max1);
	for (i = 1; i < 2; i++)
		for (j = 0; j <= 5; j++)
		{
			if (ass[i][j] > max2)max2 = ass[i][j];
		}
	printf("max2=%d\n", max2);
	for (i = 2; i < 3; i++)
		for (j = 0; j <= 5; j++)
		{
			if (ass[i][j] > max3)max3 = ass[i][j];
		}
	printf("max3=%d\n", max3);
	break;
}
case 3:
		printf("arr1:");
		for (i = 0; i <= 6; i++)
		{
			printf("%d\t", arr1[6 - i]);
		}
		printf("\n");
		printf("arr2:");
		for (j = 0; j <= 5; j++)
		{
			printf("%d\t", arr2[5 - j]);
		}
	break;
default:
	printf("���ڷ�Χ��");
	}
}*/
/*
#include<stdio.h>

int main()

{
	int i, j, p, q, s, n, a[4] = { 1,3,5,6 };//ԭ����10����׼������һ�����������������ٳ���Ϊ11.

	for (i = 0; i < 4; i++) //�ɴ�С����

	{
		p = i; q = a[i]; //��i�������У���p=i����a[p]�ٶ�Ϊ���������p+1һֱ����10��������Ƚϣ���������ż���ֵ��¼Ϊ��p����a[p].

		for (j = i + 1; j < 4; j++)

			if (q > a[j]) 
			{
			 p = j; q = a[j];
			}

		if (p != i)//��p��i���ȣ���a[p]��a[i]������ȷ��a[i]��ֵ��a[i]�ǵ�i��������10�������������

		{

			s = a[i];

			a[i] = a[p];

			a[p] = s;

		}

		printf("%d ", a[i]);//ÿ���Ŷ�һ�������������������

	}

		printf("\n����Ҫ�������:\n");//��ʾ����Ҫ�������

		scanf_s("%d", &n);//ͨ����������Ҫ��������������n��

		for (i = 0; i < 5; i++)

			if (n > a[i]) //ͨ��ѭ���ҳ���nС�ĵ�i����a[i]�������һ����������10�������±�Ϊ9������i����������ƣ���ԭ�±�Ϊs����a[s],�ƶ����±�Ϊs+1λ�ã���Ϊa[s+1]

			{
				for (s = 4; s >= i; s--) a[s + 1] = a[s];

				break;
			}

		a[i] = n;//�ڵ�i��λ���ϲ�����n

		for (i = 0; i <= 4; i++)//�������������һ��11�����������

			printf("%d ", a[i]);

		printf("\n");
		return 0;
}
*/
#include<stdio.h>
int main()
{
	int i, j,teap;
	int a[5] = { 1,3,5,6 };
	printf("�����ѯ������");
	scanf_s("%d", &i);
	for (j = 0; j < 4; j++)
		if (i == a[j])
		{
			printf("\n������%d���ڵ�λ��:%d\n", i, j+1); break;
		}
	printf("\n���벻���ڵ���:");
	scanf_s("%d", &i);
	for (j = 0; j < 4; j++)
		for (j = 0; j < 4-j; j++)
		if (a[j] > a[j + 1])
		{
			for (j = 0; j <= 5; j++)
			{
				teap = a[j];
				a[j] = a[j + 1];
				a[j + 1] = teap;
			}
		}
			for (j = 0; j < 5; j++)
			{
				printf("%d", a[j]);
			}
		
	return 0;

}




