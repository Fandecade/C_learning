#include <stdio.h>
#include <string.h>
//数组
//数组创建，[]中要给一个常量才可以，不能使用变量
//int main()
//{
//	//创建一个数组-存放整形-10个
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a',98 };//创建了一个字符型数组所以此时98表示b
//	char arr3[5] = "ab";//数组元素有a,b,/0,0,0
//	char arr4[] = "abcdef";//此时数组大小为7，因为还包含字符串结束标志/0
//	printf("%d\n", sizeof(arr4));//sizeof 计算arr4所占空间大小，结果为7
//	printf("%d\n", strlen(arr4));//strlen 求字符串的长度，即\0之前的字符个数，结果为6
//	return 0;
//}

//1.stelen和sizeof没有什么关联
//2.strlen 是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
//3.sizeof 计算变量，数组，类型的大小-单位是字节-操作符

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}


////将数组里面的字符打印()
//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[1]);//只能打印一个
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)//i从0开始：数组下角标从0开始
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}


////数组在内存中是连续存放的
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d\n", arr[i]);
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//		//打印数组的地址，得出结论：数组在内存中是连续存放的
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1,2,3 }, { 4,5 } };//表示三行四列，其中123放在第一行，45放在第二行
//	int arr1[][4] = { {1,2,3,4},{5,6,7,8} };//二维数组不能省略列
//	return 0;
//}


////打印2维数组，二维数组存储也是连续的
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//此数组表示为
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////数组作为函数参数
////冒泡排序，将一个整形数组排序
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void bubble_sort2(int arr[], int sz)
//{
//	//确定冒泡排序趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟排序的数组已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本堂排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	//对arr进行排序，排序成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
//	//所以在函数部分不要算数组个数多少，在main函数中算好直接传给函数
//	bubble_sort2(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//数组名：数组首元素的地址
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", *arr);//*arr=1（数组的首元素）


//2个例外
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名）-数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//2.&数组名，数组名代表整个数组，&数组名表示取出整个数组的地址
	printf("%p\n", &arr[0]);//只是代表1的那个地址结束
	printf("%p\n", &arr);//数组的地址，就是从1的地址到5的地址结束

	return 0;
}
