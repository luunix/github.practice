#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.���ּӼ�
//int main()
//{
//	/*int aj = 0;A
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &aj, &b);
//	sum = aj + b;
//	printf("sum = %d\n", sum);*/
//
//	//��ַ��һ���÷�����ͨ��ASCII���ַ������Ѵ�д��ĸת��ΪСд��ĸ
//	/*int x;
//	printf("�������д��ĸ��");
//	scanf("%c",&x);
//	printf("Сд��ĸ��%c\n", x+32);*/
//
//	
//	return 0;
//}

//2.�ж��Ƿ���Ӣ����ĸ
//#include <stdio.h>
//
//int main(int argc, char** argv)
//{
//    char ch;
//    printf("������һ���ַ���");
//    scanf("%c", &ch);
//
//    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        printf("�ַ� \'%c\' ��һ��Ӣ����ĸ", ch);
//    else
//        printf("�ַ� \'%c\' ����һ��Ӣ����ĸ", ch);
//
//    return 0;
//}

//3.�Ƚ��������ִ�С
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d", m);
//	return 0;
//}

//��������b������ֵ
//int main()
//{
//	int a = 2,b = 3;
//	int c;
//	scanf("%d %d", &a, &b);
//	printf("ǰa=%4d b=%-4d\n", a, b);//%4d��ʾ��ӡֵ�Ŀ�ȣ�%-4d�������
//	c = a;
//	a = b;
//	b = c;
//	printf("��a=%d b=%d\n", a, b);
//	return 0;
//}

int main()
{
	//�ж�һ�������Ƿ�Ϊż��
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("������ż��", a);
	}
	else
	{
		printf("����������", a);
	}
	return 0;
//	/*int score;
//	scanf("%d", &score);
//	printf("%d\n", score >= 60);*/
////int b;
////printf("���������룺");
////scanf("%d", &b);
////if (12345==b)
////{
////	printf("����ȷ������½�ɹ�");
////}
////else
////{
////	printf("������󣬵�¼ʧ��");
////}
//	//��whileѭ���У�break����������ֹѭ��
//	//��whileѭ���У�continue����������������ѭ��continue����Ĵ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������:>");
//	////��������
//	//getchar();//����'\n'
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n');
//	putchar(tmp);
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

