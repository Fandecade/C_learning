#include <stdio.h>
��ʽ��Ӧ
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
	printf("%d", printf("%d", printf("%d",43)));//printf�ĺ�������ֵ��ʾ�����䷵�ص��ַ�����
	//printf("%d",43)�����ַ�����2
	//printf("%d",printf("%d",43))�����ַ�����1
	return 0;//�����4321
}

�����������Ͷ���
������������
1.���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ��޹ؽ�Ҫ
2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
3.����������һ��Ҫ����ͷ�ļ��е�



//����������
int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//�����ĵ���
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//�����Ķ���
int Add(int x, int y)
{
	int z = x + y;
	return z;
}



�����ݹ�
�ݹ飺���ֵ�������ı�̼���
�ݹ��2����Ҫ����
���������������������������������ʱ�򣬵ݹ�㲻�ټ���
ÿ�εݹ����֮��Խ��Խ�ӽ������������
�ݹ鳣���Ĵ���ջ���

int main()//��������ʱ����ջ���洢
{
	printf("hehe\n");//stack overflowջ���
	main();
	return 0;
}

�ڴ�ֲ�
               ջ��                                 ����                              ��̬��
�洢��   �ֲ������������β�              ��̬���ٵ��ڴ棬malloc,calloc        ȫ�ֱ�����static���εı���


����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺����1234�����1 2 3 4 

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);// n/10��n>9����ʾ��ȥ���ֵ����һλ,����123/10=12
	}
	printf("%d", n % 10);//n%10����������:ֻ�������һλ
}
int main()
{
	unsigned int num = 0;
	scanf_s("%d", &num);//1234
	//�ݹ�
	print(num);
	//print(1234��
	//print(123��4
	//print(12��3 4
	//print(1��2 3 4
}

��д��������������ʱ���������ַ����ĳ���
int main()
{
	char arr[] = "bit";
	int len = strlen(arr);//���ַ�������
	printf("%d\n", len);
	return 0;
}


int my_strlen(char* str)//��Ϊ��������������ĵ�һ��Ԫ�صĵ�ַ����ַ��Ҫָ�����
{
	int count = 0;
	while (*str != '\0')//�ַ������Ϊ\0
	{
		count++;//��������ĵ�ַ��ʾ��ֵ��Ϊ\0��count++,Ȼ��str++�ж���һ����ַ��ѭ����������count++
		str++;
	}
	return count;
}


int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬����Ϊ��һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);
	return 0;
}

�ݹ�ķ���
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
�Ѵ��»�С
my_strlen("bit");
1+my_strlen("it");
1+1+my_strlen("t");
1+1+1+my_strlen("");
1+1+1+0
3