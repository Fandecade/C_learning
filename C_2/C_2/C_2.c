#include <stdio.h>

//真：非0，假：0，&&逻辑与   ||逻辑或


//求两数最大值
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max=%d", max);
//	return 0;
//}
//
//int arr[10] = 0;//[ ]:下标引用操作符
//int sum = Add(3, 4);//( ):函数调用操作符


//只要是整数，内存中存储的都是2进制的补码
//正数--原码，反码，补码都相同
//负数：
//原码                             反码                                  补码
//直接按照正负                 原码的符号位不变                         反码+1得到
//写出的2进制序列              其他位按位取反得到
//-2：
//10000000 00000000 00000000 00000010   -原码
//11111111 11111111 11111111 11111101   -反码
//11111111 11111111 11111111 11111110   -补码



//register int a = 10;//建议把a定义成寄存器变量
//signed int = 10;//定义的是有符号的数
//unsigned int = 10;//定义的是无符号数
//steuct-结构体关键字
//union--联合体/共用体
//typedef-类型定义-类型重定义
//typedef unsigned int u_int;//把unsignned int定义为u_int;


//static--静态局部变量的使用

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量，其生命周期变长(static修饰局部变量，其生命周期变长)
//	a++;
//	printf("a=%d\n", a);//2,3,4,5,6
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//
//1.static 修饰局部变量
//局部变量的生命周期变长
//2.static 修饰全局变量
//改变变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用
//3.static 修饰函数
//改变了函数的作用域-不确定
//改变了函数的连接属性，由外部连接属性->内部连接属性


//声明外部函数
//extern int Add(int, int);


//宏的定义(用宏判断两数的大小关系)
//#define MAX(X,Y)  (X>Y?X:Y)
//int Max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//
//}
//int main()
//{ 
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	//宏的方式
//	int max = MAX(a, b);
//	printf("max=%d", max);
//
//	return 0;
//}



//指针
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	printf("%p\n", &a);//等价，     %p打印地址
//	printf("%p\n", p);//等价
//	*p = 20;//*-解引用操作符
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}