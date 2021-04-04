#include <stdio.h>
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p; *p能够访问4个字节
//char* p; *p能够访问1个字节
//double* p; *p能够访问8个字节

//指针类型决定了：指针走一步走多远（指针的步长）
//int* :pa-- > pa + 1    4
//char* :pa-- > pa + 1   1
//double*:pa-- > pa + 1  8

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	//int* :pa-->pa+1  加了4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//char* :pc-->pc+1  加了1个字节
//	return 0;
//}

//将数组存的值改为1
//int mian()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//野指针:就是指针指向的尾汁是不可知的（随机的）
//例如：当指针的范围超出数组arr的范围时，p就是野指针
//int arr[10] = { 0 };
//for(i=0;i<=100;i++)
//{
//      *(p++)=i
//}
//int main()
//{
//	//int a;
//	int* p;//局部的指针变量，就会被初始化随机值
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//	//出函数后函数里面的变量就会销毁，没有意义
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//野指针
//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化，里面默认放的是一个随机值
//	*p = 20;
//	return 0;
//}

//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放即使置NULL
//4.指针使用之前检查有效性


//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//NULL-用来初始化指针的，给指针赋值
//	return 0;
//}

//指针运算

//用指针：打印数组值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//存储数组第一个值的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);//*p代表的是值，p代表的是地址
//		p = p + 1;
//	}
//	return 0;
//}


//指针-指针：得到的是指针之间元素的个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	&arr[9] - &arr[0];//之间有9个元素，36个字节
//	printf("%d\n" &arr[0] - &arr[9]);
//	return 0;
//}

//用指针方式实现strlen
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end!='\0')
	{
		end++;
	}
	return end-start;//指针-指针：得到的是指针之间元素的个数
}
int main()
{
	//strlen-求字符串长度
	//递归-模拟实现了strlen-计数器的方式1，递归的方式2
	char arr[] = "bit";
	//从b开始,t结束,\n用来判断
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}