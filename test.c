#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("******************  ɨ ��  ***************\n");
	printf("******************************************\n");
	printf("*****************  1.play  ***************\n");
	printf("*****************  0.exit  ***************\n");
	printf("******************************************\n");

}
void game()
{

}
void test()
{
	int input = 0;
	menu();
	do
	{
		printf("��ѡ��(0��1):>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������");
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}
 