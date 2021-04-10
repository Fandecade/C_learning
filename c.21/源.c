#include <stdio.h>
数组名arr，表示首元素的地址
但是二维数组的首元素是二维数组的第一行
所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
可以数组指针来接收

int arr[5];  arr是一个5个元素的整体数组
int* parr1[10];  parr1是一个数组，数组有10个元素，每个元素的类型是int*,parr1是指针数组
int(*parr2)[10]; parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int,parr2是数组指针
int (*         )[5]; parr3是一个数组，该数组有10个元素，每5个元素是一个数组指针，
      parr3[10]                 该数组指针指向的数组有5个元素，每个元素是int,所以是数组指针


int main()
{
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";
	//指针数组-数组-存放指针的数组
	int* arr[10];
	char* ch[5];
	//数组指针-指向数组
	int arr2[5];
	int(*pa)[5]= &arr2;//取出数组的地址，pa就是一个数组指针
	int* p1;//整型指针-指向整型的指针
	char* p4;//字符指针-指向字符的
	return 0;
}

数组参数、指针参数
void test(int arr[]); 可以
{}
void test(int arr[10]);可以
{}
void test(int *arr);可以
{}
void test(int *arr[10]);可以
{}
void test(int **arr);可以
{}
int main()
{
	int arr[10] = { 0 };
	int* arr[20] = { 0 };
	test();
	return 0;
}

二维数组传参
二维数组传参，函数形参的设计只能省略第一个[]的数字
因为对一个二维数组，可以不知道有多少行，但必须知道一行有多少元素
对于二维数组，数组名代表第一行数组的地址

一级指针传参
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}
int mian()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9};
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//一级指针P,传给函数
	print(p, sz);
	return 0;
}

二级指针传参
int main()
{
	int* ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);//指针数组也可以
	return 0;
}


函数指针-是指向函数的指针
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	//int (*p)[10]=&arr   数组指针
	printf("%p\n", &Add);
	printf("%p\n", Add);
	//&函数名和函数都是函数的地址
	int (*pa)(int, int) = Add;//函数指针
	printf("%d\n", (*pa)(2, 3));//5
}
//数组指针：是指向数组的指针
//函数指针：是指向函数的指针 存放函数地址的一个指针

void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = print;
	(*p)("hello bit");
	return 0;
}

void (*p)(char*) = print; 
void print(char* str)

（*（void(*)())0)();
void(*)():函数指针类型
把0强制类型转化成：void(*)()函数指针类型-0就是一个函数的地址
调用0地址的该函数

void (*signal(int,void(*)(int)))(int);
void (*            signal(  int   ,     void(*)(int)  )            )(int) 
函数指针返回类型还是一个函数指针



signal是一个函数声明
signal函数的参数有2个，第一个是int.第2个是函数指针，该函数指针指向的函数的参数是int,返回类型是void
signed函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是Int,返回类似是void
void (*signal(int, void(*)(int)))(int);
typedef void(*pfun_t)(int);//重命名函数指针typedf
pfun_t signal(int, pfun_t);


typedef unsigned int uint;

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int mian()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = Add;
	int(*pa)(int, int) = Add;
	printf("%d\n", (pa)(2, 3));
	printf("%d\n",Add(2, 3));
	printf("%d\n", (*pa)(2, 3));
	printf("%d\n", (**pa)(2, 3));
	printf("%d\n", (***pa)(2, 3));
	//结果相同
}


int main()
{
	//指针数组
	int* arr[5];
	//需要一个数组，这个数组可以存放4个函数的地址-函数指针的数组
	int(*pa)(int, int) = Add;//
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3));
	}
	return 0;
}