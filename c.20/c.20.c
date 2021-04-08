#include <stdio.h>
//指针的进阶
//1.指针就是一个变量，用来存放地址，地址唯一标识一块内存空间
//2.指针的大小是固定的4/8个字节（32位平台/64位平台）
//3.指针是有类型，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限
//4.指针的运算

//int mian()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%s\n", *p);//只打印a
//	printf("%s\n", p);//打印abcdef
//	return 0;
//}

//char* p="abcdef";只是把字符串abcdef的首字符的地址放到p中

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//常字符串
//	char* p2 = "abcdef";
//	if (arr1 == arr2)//数组名存储的是首元素的地址，两地址不同，所以打印haha
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)//两个存储的字符串相同且都是 常字符串，所以在内存中只存一份
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//常字符串不可修改，准确写法
//const char* p = "abcdef";

//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[] = {arr};//存放整形指针的数组-指针数组
//	int* pch[5];//存放字符指针的数组-指针数组
//	return 0;
//}


//用指针数组打印数组内的值
//int mian()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d\n" ,* (parr[i] + j));
//			//int* parr[] = { arr1,arr2,arr3 };
//			//存放整形指针的数组-指针数组
//			//指针数组parr[0]表示存放arr1的首地址，parr[0]+j,可以表示arr1内值的地址
//		}
//	}
//	printf("\n");
//	return 0;
//}

//数组指针
//数组指针是指针
//整形指针：int* p;能够指向整型数据的指针。浮点型指针：float* p；能够指向浮点型数据的指针
//数组指针：能够指向数组的指针

//int main()
//{
//	int* p = NULL;//p是整型指针-指向整型的指针-可以存放整型的的地址
//	char* pc = NULL;//pa是字符指针-指向字符的指针-可以存放字符的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//	return 0;
//}
//
//int mian()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//char*:pa指向的数组的元素类型是char*
//	//(*pa)[5]:说明pa是指针，pa指针的数组是5个元素的
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}

//打印数组的值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", (*pa)[i]);
//		printf("%d", *(*pa + i));//*pa==arr
//	}
//	return 0;
// }

//不用数组指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; j++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", *(*(p + i) + j));
//			printf("%d", (*(p + i))[j]);//等价
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr-数组名-数组名就是首元素地址
//	//把arr想象成一堆数组
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", *(arr+i));
//		printf("%d ", arr[i]);//arr[i]==*(arr+i)==*(p+i)==p[i]
//	}
//	return 0;
//}