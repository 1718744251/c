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
