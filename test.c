#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("*************************************\n");
	printf("**************1.play*****************\n");
	printf("**************0.exit*****************\n");
	printf("*************************************\n");
}
void game()
{
	//�����������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	IsitBoard(mine,ROWS,COLS, '0');
	IsitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	printf("\n");
	//������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);
	DisplayBoard(show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡����\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}