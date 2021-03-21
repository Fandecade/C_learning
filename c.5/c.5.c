#include <stdio.h>
#include <windows.h>

//1.for循环,10次循环，10次打印，10个元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//前闭：i=0;后开：i<10
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//2.利用for循环打印100个hehe
//int main()
//{
//	int i = 0;
//	int a = 1;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;//i的循环每次初始化j，一个i循环有10次j循环
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d:hehe\n",a);
//			a++;
//		}
//	}//10*10=100
//	return 0;
//}

//3.错误的写法（打印100次hehe）
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 1;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("%d:hehe\n", a);
//			a++;
//		}
//	}//只打印10个hehe
//	return 0;
//}


////4.
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//请问循环要循环多少次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//判断语句：k=0,不是等于（等于为==）表示将0赋值给k，使得判断语句=0则不进行循环
//	{
//		k++;
//	}
//	return 0;//循环0次
//}

//do while循环
//int main()
//{
//	int i = 1;
//	do 
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);//1.2.3.4
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//1的阶乘+2的阶乘+3的阶乘.....+10的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;//n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字的下标:二分查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;//查找数字7
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标（此时表示第一个数组元素1，数组下标从0开始）
//	int right = sz - 1;//右下标（sz计算出元素个数，由于数组下标由0开始，sz-1表示最后一个元素的下标）
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)//判断中间数组大小和查找数字的大小关系，从而确定左右下标
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//注意”“表示的数组计算数组元素时
//
int main()
{
	char arr1[] = "welcom to bit!!!!!";//字符串中的空格也算一个字符，所以能被sizeof计算在内
	char arr2[] = "##################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0])-2 ;//,（减2是去掉2个空格）但此时计算右下标是错误的，
	     //没有考虑到字符串结束标志
	     //char arr1[] = "welcom to bit!!!!!";
	     //[w e l c o m 空格 t o 空格 b   i   t   ！  ！  ！  ！  ! 和字符串结束标志\0]
	     // 1 2 3 4 5 6  7   8 9  10  11  12  13  14  15  16  17 18  19
	//printf("错误的right=%d", right);
	int right = strlen(arr1) - 1;//计算数组右下标
	//strlen和sizeof两个函数求字符数组的长度函数，他们俩的区别就是是否把最后的结束标志也加上去。
    // strlen是不加的，他表示字符串的长度。
	//而sizeof求的是字符串在内存中的长度，所以它是加上最后的'\0'的
	while (left <= right)//循环进行的条件
	{
		arr2[left] = arr1[left];//将arr1数组左边元素赋值给arr2代替它左边元素，每次进行一个元素的赋值
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息1秒
		Sleep(1000);//添加头文件#include <windows.h>
		system("cls");//执行系统命令的一个函数-cls-清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}