#include <stdio.h>

//1.strcmp(输入你要判断的字符串，“写出判断的字符串”)
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//判断2字符串是否相等
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，退出程序\n");
//	}
//	return 0;
//}

//三数从大到小排序
//算法实现：a放最大值b次之，c中放最小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);//2,1,3
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//

//？？？给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)//m%n:两数相除，得出余数，若余数不为0，则循环继续，直到余数为0循环停止
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		判断year是否为闰年
//		1.能被4整除并且不能被100整除是闰年
//		2.能被400整除的是闰年
//		if ((year % 4 == 0 )&& (year % 100 != 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//{
//	printf("%d\n", year);
//	count++;
//}

//打印100-200之间的素数
int main()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		//判断是否为素数：1.试除法:产生数字2->i-1(素数是只能被1或自己整除)
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}