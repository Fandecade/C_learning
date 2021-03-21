#include <stdio.h>
#include <string.h>
//int main()
//{
//	int a = 10;//申请了4个字节的空间
//	printf("%p\n", &a);//打印a的地址
//	int* p = &a;//p是一个变量-指针变量
//	printf("% p\n", p);//通过指针变量将a的地址赋给P
//	*p = 20;//*-解引用操作符/间接访问操作符
//	printf("a=%d\n", a);//通过解引用操作符访问a的地址更改a的值,*p=a
//	return 0;
//}


//int main()
//{
//	double d = 3.14;
//	double * pd = &d;
//	*pd = 5.5;//*pd=d,更改了d的值位5.5
//	printf("%1f\n",d);
//	printf("%1f\n", *pd);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//32位地址占4个字节，64位地址占8个字节
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



////结构体类型
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("书名：%s\n", b1.name);
//	printf("价格:%d元\n", b1.price);
//	//利用pb打印出我的书名和价格
//	//  .     结构体变量.成员
//	//  ->    结构体指针->成员
//	printf("书名1：%s\n", (*pb).name);
//	printf("价格1:%d\n", (*pb).price);
//	printf("书名2：%s\n", pb->name);
//	printf("价格2：%d\n", pb->price);
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);
//	strcpy(b1.name, "c++");//strcpy-string copy-字符串拷贝-库函数-string.h
//	printf("% s\n", b1.name);
//	return 0;
//}



//if语句
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	};
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (num == 5)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//while循环语句
//利用while循环语句输出1到100的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//while语句输出1到100的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//
//}


//switch开关语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//开关语句switch(整数表达式),注意switch()后面不加分号；
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n"); 
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;//break语句用于跳出switch语句
//	};
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://输入的数不在case
//		printf("输入错误\n");
//		break;
//	}
//}


int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch（n）
		{
	       case 1:n++;
	       case 2:m++; n++; break;//此处break只是跳出case3嵌套的switch语句
		}//此处无break所以还要进行case4语句
	case 4:m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d", m, n);//m=5,n=3
	return 0;
}
