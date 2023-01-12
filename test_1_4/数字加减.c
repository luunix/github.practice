#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.数字加减
//int main()
//{
//	/*int aj = 0;A
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &aj, &b);
//	sum = aj + b;
//	printf("sum = %d\n", sum);*/
//
//	//地址的一种用法，及通过ASCII码字符集，把大写字母转化为小写字母
//	/*int x;
//	printf("请输入大写字母：");
//	scanf("%c",&x);
//	printf("小写字母：%c\n", x+32);*/
//
//	
//	return 0;
//}

//2.判断是否是英文字母
//#include <stdio.h>
//
//int main(int argc, char** argv)
//{
//    char ch;
//    printf("请输入一个字符：");
//    scanf("%c", &ch);
//
//    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        printf("字符 \'%c\' 是一个英文字母", ch);
//    else
//        printf("字符 \'%c\' 不是一个英文字母", ch);
//
//    return 0;
//}

//3.比较两个数字大小
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

//交换啊，b两个数值
//int main()
//{
//	int a = 2,b = 3;
//	int c;
//	scanf("%d %d", &a, &b);
//	printf("前a=%4d b=%-4d\n", a, b);//%4d表示打印值的宽度，%-4d向左对齐
//	c = a;
//	a = b;
//	b = c;
//	printf("后a=%d b=%d\n", a, b);
//	return 0;
//}

int main()
{
	//判断一个数字是否为偶数
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("此数是偶数", a);
	}
	else
	{
		printf("此数是奇数", a);
	}
	return 0;
//	/*int score;
//	scanf("%d", &score);
//	printf("%d\n", score >= 60);*/
////int b;
////printf("请输入密码：");
////scanf("%d", &b);
////if (12345==b)
////{
////	printf("密码确定，登陆成功");
////}
////else
////{
////	printf("密码错误，登录失败");
////}
//	//在while循环中，break用于永久终止循环
//	//在while循环中，continue的作用是跳过本次循环continue后面的代码
//	//直接去判断部分，看是否进行下一次循环
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码:>");
//	////清理缓冲区
//	//getchar();//处理'\n'
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n');
//	putchar(tmp);
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

