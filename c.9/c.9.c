#include <stdio.h>

//函数的调用
//1.传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//2.传址调用：是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//            这种传参方式可以让函数和函数外部的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量


//函数：判断一个数是不是素数
//函数部分：是素数返回1，不是素数返回0
//int is_prime(int x)
//{
//	//试除法
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}return 1;
//}
//	
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)//注意自建函数使用时的完整性
//		{
//			printf("100-200之间的素数：%d\n", i);
//		}
//	}
//	return 0;
//}


//判断是否为闰年（打印1000-2000的闰年）
//函数部分：若为闰年则返回1，否则返回0
//int is_leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}

//二分查找:在一个有序数组中查找具体的某个数，找到了就返回这个数的下标否则就返回-1
//函数部分
//int binary_search(int arr[], int k,int sz)//由于函数传递的是一个地址，则int arr[]是一个指针
//{
//	//算法的实现
//	//int sz = sizeof(arr) / sizeof(arr[0]);//此时arr只是arr[]数组首元素的地址，不是数组，所以计算sz不能在这算
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//循环停止的条件是：直到找到那个数
//		}
//	}
//	return -1;//若循环结束还没找到那个数，返回-1，表示此数组没有所找的数字
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//你所要查找的数为7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);//arr传递过去的是数组arr首元素的地址,不是整个数组
//	if (ret == -1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值怎加1
//void Add(int* p)//用函数控制实参的值（传递参数时传递地址）
//{
//	(*p)++;//不是*p++
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//	Add(&num);
//	printf("num=%d\n", num);//2
//	Add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}

//函数的嵌套调用和链式访问（函数与函数之间可以有机的组合的）
//链式访问：把一个函数的返回值作为另外一个函数的参数
int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	return 0;
}
