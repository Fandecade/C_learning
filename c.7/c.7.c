#include <stdio.h>
#include <math.h>
//打印100-200之间的素数:sqrt(参数)[平方根计算]功 能: 计算一个非负实数的平方根，头文件math.h
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
//
//1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//9,19,29.....99
//		{
//			count++;
//		}
//		if (i / 10 == 9)//90,91,92...99
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//
//计算1/1-1/2+1/3-1/4+1/5.....+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = flag*1.0/i;//注意1/i会等于0
//		flag = -flag;//通过flag来调整正负符号
//	}
//	printf("%1f\n", sum);//(.1f)：输出时小数点后有一位小数
//
//	return 0;
//}
//
//
//
//求10给整数中的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//初始化最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//
//
//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印1行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);//%-2d:表示向左对齐，并且输出2位
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
void menu()
{
	printf("****************************************\n");
	printf("****1.play         0.exit         ******\n");
	printf("****************************************\n");
}
void game()
{
	//1.生成一个随机数
	int ret = 0;
	//拿时间戳来设置随机数的生成起始点
	//时间戳：当前计算机的时间-计算机的起始时间（1970.1.1.0：0：0）=(xxxx)秒
	int guess = 0;//接受猜的数字
	srand((unsigned int)time(NULL));//（相关资料https://www.cnblogs.com/jianqiao123/p/12164779.html）
	//srand函数是随机数发生器的初始化函数。原型:void srand(unsigned seed);
	//time函数来获得系统时间，它的返回值为从 00:00:00 GMT, January 1, 1970 到现在所持续的秒数，
	//然后将time_t型数据转化为(unsigned)型再传给srand函数，即: srand((unsigned) time(&t));
	//(unsigned)time(&t)：强制类转换，将time_t类型->unsigned类型
	//如果想在一个程序中生成随机数序列，需要至多在生成随机数之前设置一次随机种子
	//只需在主程序开始处调用srand((unsigned)time(NULL)); 后面直接用rand
	ret = rand()%100+1;//生成随机数（rand()函数相关资料https://www.cnblogs.com/dgwblog/p/8900755.html）
	//1、rand()不需要参数，它会返回一个从0到最大随机数的任意整数，最大随机数的大小通常是固定的一个大整数。
	//2、如果你要产生0~99这100个整数中的一个随机整数，可以表达为：int num = rand() % 100;
	//3、如果要产生1~100，则是这样：int num = rand() % 100 + 1;
	//4、总结来说，可以表示为：int num = rand() % n +a;其中的a是起始值，n - 1 + a是终止值，n是整数的范围。
	//8、还可以包含time.h头文件，然后使用srand(（unsingned）time(NUll))来使用当前时间使随机数发生器随机化，
	//这样就可以保证每两次运行时可以得到不同的随机数序列，同时这要求程序的两次运行的间隔超过1秒。
	while (1)
	{
		printf("请输入你猜的数字");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//选择进入游戏
			break;
		case 0:
			printf("退出游戏");
		    break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
}