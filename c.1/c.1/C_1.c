#include <stdio.h>
#include <string.h>

int main()
{
	计算两数的和
	int num1 = 0;
	int num2 = 0;
	int toal = 0;
	scanf("%d%d", &num1, &num2);
	toal = num1 + num2;
	printf("toal=%d", toal);
}


枚举
enum  color
{
	RED,
	YELLOW,
	BULE;
};

int main( )
{
	enum color one = BULE;
	return 0;
}


计算字符串长度
int main()
{
	int arr[] = { "abc" };
	int arr2[] = { 'c' };
	printf("%d\n", strlen(arr));//3
	printf("%d\n", strlen(arr2));//1
	printf("%d\n", strlen("c:\test\32\test.c"));//13个字符
	    c  :   \t 制表符   e s t    \32表示八进制32代表的那个10进制数字算一个字符  \t  e  s   t    .    c
	    1  2      3        4 5 6     7                                              8  9  10  11   12  13
	printf("%c", '\065');
	return 0;

} 


移（2进制）位操作符
int main()
{
	int a = 1;//整形1占4个字节-32bit位
	1的2进制：00000000 00000000 00000000 00000001
	int b = a << 2;
	表示a左移2个2进制位得到结果赋给b
	00000000 00000000 00000000 00000001   ->000000 00000000 00000000 00000001 00  左移后不够32bit位在末尾补0
	                                                                        1*2^2+0*2^1+0*2^0=4
	printf("%d", b);//4

	return 0;
}

用函数方式比较两数大小
int ADD(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else if (x < y)
	{
		return y;
	}
	else
		return 0;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf("%d%d", &num1, &num2);
	max = ADD(num1, num2);
	if (max == 0)
	{
		printf("两数相等");
	}
	else
	printf("max=%d\n", max);
	return 0;
}


sizeof()--计算字节大小
int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof a );//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof int );//err
	printf("%d\n", sizeof(arr));//6*4=24
	计算数组元素个数
	printf("%d", sizeof(arr) / sizeof(arr[0]));//6
	return 0;
}



原码，反码，补码,( ~ )-按位取反
int main()
{
	int a = 0;//4个字节，32位bit位
	int b = ~a;//按（2进制位按位取反）
	a:0000 0000 0000 0000 0000 0000 0000 0000 计算机存储的是补码
	  1111 1111 1111 1111 1111 1111 1111 1111 按位取反      补码
 	  1111 1111 1111 1111 1111 1111 1111 1110 反码：补码减1
	  1000 0000 0000 0000 0000 0000 0000 0001 原码：符号位不变，其他按位取反
	符号位：1表示负数，0表示正数
	printf("%d", b);//计算机输出的是原码，结果为-1
	return 0;
}
