#include <stdio.h>
������arr����ʾ��Ԫ�صĵ�ַ
���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
��������ָ��������

int arr[5];  arr��һ��5��Ԫ�ص���������
int* parr1[10];  parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
int(*parr2)[10]; parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int,parr2������ָ��
int (*         )[5]; parr3��һ�����飬��������10��Ԫ�أ�ÿ5��Ԫ����һ������ָ�룬
      parr3[10]                 ������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int,����������ָ��


int main()
{
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";
	//ָ������-����-���ָ�������
	int* arr[10];
	char* ch[5];
	//����ָ��-ָ������
	int arr2[5];
	int(*pa)[5]= &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
	int* p1;//����ָ��-ָ�����͵�ָ��
	char* p4;//�ַ�ָ��-ָ���ַ���
	return 0;
}

���������ָ�����
void test(int arr[]); ����
{}
void test(int arr[10]);����
{}
void test(int *arr);����
{}
void test(int *arr[10]);����
{}
void test(int **arr);����
{}
int main()
{
	int arr[10] = { 0 };
	int* arr[20] = { 0 };
	test();
	return 0;
}

��ά���鴫��
��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
��Ϊ��һ����ά���飬���Բ�֪���ж����У�������֪��һ���ж���Ԫ��
���ڶ�ά���飬�����������һ������ĵ�ַ

һ��ָ�봫��
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}
int mian()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9};
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//һ��ָ��P,��������
	print(p, sz);
	return 0;
}

����ָ�봫��
int main()
{
	int* ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);//ָ������Ҳ����
	return 0;
}


����ָ��-��ָ������ָ��
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	//int (*p)[10]=&arr   ����ָ��
	printf("%p\n", &Add);
	printf("%p\n", Add);
	//&�������ͺ������Ǻ����ĵ�ַ
	int (*pa)(int, int) = Add;//����ָ��
	printf("%d\n", (*pa)(2, 3));//5
}
//����ָ�룺��ָ�������ָ��
//����ָ�룺��ָ������ָ�� ��ź�����ַ��һ��ָ��

void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = print;
	(*p)("hello bit");
	return 0;
}

void (*p)(char*) = print; 
void print(char* str)

��*��void(*)())0)();
void(*)():����ָ������
��0ǿ������ת���ɣ�void(*)()����ָ������-0����һ�������ĵ�ַ
����0��ַ�ĸú���

void (*signal(int,void(*)(int)))(int);
void (*            signal(  int   ,     void(*)(int)  )            )(int) 
����ָ�뷵�����ͻ���һ������ָ��



signal��һ����������
signal�����Ĳ�����2������һ����int.��2���Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
signed�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����Int,����������void
void (*signal(int, void(*)(int)))(int);
typedef void(*pfun_t)(int);//����������ָ��typedf
pfun_t signal(int, pfun_t);


typedef unsigned int uint;

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int mian()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = Add;
	int(*pa)(int, int) = Add;
	printf("%d\n", (pa)(2, 3));
	printf("%d\n",Add(2, 3));
	printf("%d\n", (*pa)(2, 3));
	printf("%d\n", (**pa)(2, 3));
	printf("%d\n", (***pa)(2, 3));
	//�����ͬ
}


int main()
{
	//ָ������
	int* arr[5];
	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ�������
	int(*pa)(int, int) = Add;//
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3));
	}
	return 0;
}