#include <stdio.h>
//�ݹ������
//��n�Ľ׳�
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
	ret = Fac1(n);//ѭ���ķ�ʽ
	printf("%d\n", ret);
	return 0;
}

//�ݹ鷽ʽ
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
	ret = Fac2(n);//ѭ���ķ�ʽ
	printf("%d\n", ret);
	return 0;
}


//���N��쳲�������(1 1 2 3 5 8 13 21 34 55)
//a=1;b=1;c=0;
//while(n>2)//���������ʱ�Ż��õ�a,b,c,����ѭ���Ǵ�2��ʼ��
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