#include<stdio.h>
int main()
{
    float a, b, c;
    printf("�����룺");
    scanf_s("%f %f %f", &a, &b, &c);
    (a == b || a == c || b == c) ? printf("����������\n"): printf("���ǵ���������\n");
    (a + b > c && a + c > b && b + c > a) ? printf("��������\n"): printf("����������");
    (c*c=a*a+b*b ||  b*b=a*a+c*c || a * a=b*b+c*c) ? printf("��ֱ��") : printf("����ֱ��");
}