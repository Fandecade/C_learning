#include <stdio.h>
//ָ��Ľ���
//1.ָ�����һ��������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
//2.ָ��Ĵ�С�ǹ̶���4/8���ֽڣ�32λƽ̨/64λƽ̨��
//3.ָ���������ͣ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò�����ʱ���Ȩ��
//4.ָ�������

//int mian()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ���
//	printf("%s\n", *p);//ֻ��ӡa
//	printf("%s\n", p);//��ӡabcdef
//	return 0;
//}

//char* p="abcdef";ֻ�ǰ��ַ���abcdef�����ַ��ĵ�ַ�ŵ�p��

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//���ַ���
//	char* p2 = "abcdef";
//	if (arr1 == arr2)//�������洢������Ԫ�صĵ�ַ������ַ��ͬ�����Դ�ӡhaha
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)//�����洢���ַ�����ͬ�Ҷ��� ���ַ������������ڴ���ֻ��һ��
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//���ַ��������޸ģ�׼ȷд��
//const char* p = "abcdef";

//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[] = {arr};//�������ָ�������-ָ������
//	int* pch[5];//����ַ�ָ�������-ָ������
//	return 0;
//}


//��ָ�������ӡ�����ڵ�ֵ
//int mian()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d\n" ,* (parr[i] + j));
//			//int* parr[] = { arr1,arr2,arr3 };
//			//�������ָ�������-ָ������
//			//ָ������parr[0]��ʾ���arr1���׵�ַ��parr[0]+j,���Ա�ʾarr1��ֵ�ĵ�ַ
//		}
//	}
//	printf("\n");
//	return 0;
//}

//����ָ��
//����ָ����ָ��
//����ָ�룺int* p;�ܹ�ָ���������ݵ�ָ�롣������ָ�룺float* p���ܹ�ָ�򸡵������ݵ�ָ��
//����ָ�룺�ܹ�ָ�������ָ��

//int main()
//{
//	int* p = NULL;//p������ָ��-ָ�����͵�ָ��-���Դ�����͵ĵĵ�ַ
//	char* pc = NULL;//pa���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}
//
//int mian()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//char*:paָ��������Ԫ��������char*
//	//(*pa)[5]:˵��pa��ָ�룬paָ���������5��Ԫ�ص�
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}

//��ӡ�����ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", (*pa)[i]);
//		printf("%d", *(*pa + i));//*pa==arr
//	}
//	return 0;
// }

//��������ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; j++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", *(*(p + i) + j));
//			printf("%d", (*(p + i))[j]);//�ȼ�
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr-������-������������Ԫ�ص�ַ
//	//��arr�����һ������
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", *(arr+i));
//		printf("%d ", arr[i]);//arr[i]==*(arr+i)==*(p+i)==p[i]
//	}
//	return 0;
//}