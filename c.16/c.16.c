#include <stdio.h>
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p; *p�ܹ�����4���ֽ�
//char* p; *p�ܹ�����1���ֽ�
//double* p; *p�ܹ�����8���ֽ�

//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//int* :pa-- > pa + 1    4
//char* :pa-- > pa + 1   1
//double*:pa-- > pa + 1  8

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	//int* :pa-->pa+1  ����4���ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//char* :pc-->pc+1  ����1���ֽ�
//	return 0;
//}

//��������ֵ��Ϊ1
//int mian()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//Ұָ��:����ָ��ָ���β֭�ǲ���֪�ģ�����ģ�
//���磺��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//int arr[10] = { 0 };
//for(i=0;i<=100;i++)
//{
//      *(p++)=i
//}
//int main()
//{
//	//int a;
//	int* p;//�ֲ���ָ��������ͻᱻ��ʼ�����ֵ
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//	//��������������ı����ͻ����٣�û������
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//Ұָ��
//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;//�ֲ���������ʼ��������Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//	return 0;
//}

//��ι��Ұָ��
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷż�ʹ��NULL
//4.ָ��ʹ��֮ǰ�����Ч��


//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//	return 0;
//}

//ָ������

//��ָ�룺��ӡ����ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//�洢�����һ��ֵ�ĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);//*p�������ֵ��p������ǵ�ַ
//		p = p + 1;
//	}
//	return 0;
//}


//ָ��-ָ�룺�õ�����ָ��֮��Ԫ�صĸ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	&arr[9] - &arr[0];//֮����9��Ԫ�أ�36���ֽ�
//	printf("%d\n" &arr[0] - &arr[9]);
//	return 0;
//}

//��ָ�뷽ʽʵ��strlen
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end!='\0')
	{
		end++;
	}
	return end-start;//ָ��-ָ�룺�õ�����ָ��֮��Ԫ�صĸ���
}
int main()
{
	//strlen-���ַ�������
	//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2
	char arr[] = "bit";
	//��b��ʼ,t����,\n�����ж�
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}