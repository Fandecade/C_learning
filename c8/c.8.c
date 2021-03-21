#include <stdio.h>
//一个关机程序
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown-s-t 60：		60秒后关闭此计算机
//	//-s 是关闭此计算机
//	//-t 是延迟多长时间关闭, 后面跟秒数
//	//system()-执行系统命令
//	sysyem("shutdown-s-t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//		//比较两个字符串strcmp()
//		//int strcmp(const char *str1, const char *str2)
//		//str1 -- 要进行比较的第一个字符串。
//		//str2 -- 要进行比较的第二个字符串。
//		//如果返回值小于 0，则表示 str1 小于 str2。
//		//如果返回值大于 0，则表示 str1 大于 str2。
//		//如果返回值等于 0，则表示 str1 等于 str2。
//	{
//		system("shutdown-a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//int main()
//{
//
//	int arr[20] = { 0 };
//	system("shutdown-s-t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n")；
//			scanf("%s", &input);
//		if (strcmp("shutdown-a") == 0);
//		{
//			break;
//		}
//	}
//	return 0;
//}

//函数
//c语言中的函数：就是子程序
//int main()
//{
//	char arr1[] = "bit";//   \0是字符串结束标志，打印时遇到\0就停止打印
//	char arr2[] = "#############";
//	//             bit\0#########
//	strcpy(arr2, arr1);
//	//stecpy()字符串拷贝
//	//函数声明：char *strcpy(char *dest, const char *src)
//	//dest -- 指向用于存储复制内容的目标数组。
//	//src -- 要复制的字符串。
//	//该函数返回一个指向最终的目标字符串 dest 的指针。
//	printf("%s\n", arr1);//strcpy（）在遇到\0就停止拷贝
//	return 0;
//}

//strlen()-string length-字符串长度有关

//自定义函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//定义函数:判断两数大小
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//



//交换两数的值
//void Swap(int x, int y)//void说明没有返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//交换两数的值
//void Swap2(int* pa, int* pb)//里面的变量都是形式参数
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);   //&a,&b是实际参数
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//形式参数是实参的一份临时拷贝
//对形式参数的修改是不改变实际参数的