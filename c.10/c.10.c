#include <stdio.h>
链式反应
int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen("abc"));
	return 0;
}


?
int main()
{
	printf("%d", printf("%d", printf("%d",43)));//printf的函数返回值表示的是其返回的字符长度
	//printf("%d",43)返回字符长度2
	//printf("%d",printf("%d",43))返回字符长度1
	return 0;//结果是4321
}

函数的声明和定义
函数的声明：
1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，无关紧要
2.函数的声明一般出现在函数的使用之前，要满足先声明后使用
3.函数的声明一般要放在头文件中的



//函数的声明
int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数的调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//函数的定义
int Add(int x, int y)
{
	int z = x + y;
	return z;
}



函数递归
递归：呈现调用自身的编程技巧
递归的2个必要条件
存在限制条件，当满足这个限制条件的时候，递归便不再继续
每次递归调用之后越来越接近这个限制条件
递归常见的错误：栈溢出

int main()//函数调用时会在栈区存储
{
	printf("hehe\n");//stack overflow栈溢出
	main();
	return 0;
}

内存分布
               栈区                                 堆区                              静态区
存储：   局部变量，函数形参              动态开辟的内存，malloc,calloc        全局变量，static修饰的变量


接受一个整形值（无符号），按照顺序打印它的每一位。例如：输入1234，输出1 2 3 4 

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);// n/10（n>9）表示除去数字的最后一位,例如123/10=12
	}
	printf("%d", n % 10);//n%10（求余数）:只保留最后一位
}
int main()
{
	unsigned int num = 0;
	scanf_s("%d", &num);//1234
	//递归
	print(num);
	//print(1234）
	//print(123）4
	//print(12）3 4
	//print(1）2 3 4
}

编写函数不容许创建临时变量，求字符串的长度
int main()
{
	char arr[] = "bit";
	int len = strlen(arr);//求字符串长度
	printf("%d\n", len);
	return 0;
}


int my_strlen(char* str)//因为传过来的是数组的第一个元素的地址，地址需要指针接受
{
	int count = 0;
	while (*str != '\0')//字符串最后为\0
	{
		count++;//如果传来的地址表示的值不为\0则count++,然后str++判断下一个地址，循环结束返回count++
		str++;
	}
	return count;
}


int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而且为第一个元素的地址
	printf("len=%d\n", len);
	return 0;
}

递归的方法
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
把大事化小
my_strlen("bit");
1+my_strlen("it");
1+1+my_strlen("t");
1+1+1+my_strlen("");
1+1+1+0
3