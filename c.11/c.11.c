#include <stdio.h>
//递归与迭代
//求n的阶乘
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Fac1(n);//循环的方式
	printf("%d\n", ret);
	return 0;
}

//递归方式
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Fac2(n);//循环的方式
	printf("%d\n", ret);
	return 0;
}


//求第N个斐波拉契数(1 1 2 3 5 8 13 21 34 55)
//a=1;b=1;c=0;
//while(n>2)//当求第三个时才会用到a,b,c,所以循环是从2开始的
//c=a+b;a=b
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}
int Fib(int n)
{
	int a = 1;
	int b = 2;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}