#include <stdio.h>
#include <string.h>

//int main()
//{
//	//���������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int toal = 0;
//	scanf("%d%d", &num1, &num2);
//	toal = num1 + num2;
//	printf("toal=%d", toal);
//}


//ö��
//enum  color
//{
//	RED,
//	YELLOW,
//	BULE;
//};
//
//int main( )
//{
//	enum color one = BULE;
//	return 0;
//}
//

//�����ַ�������
//int main()
//{
//	int arr[] = { "abc" };
//	int arr2[] = { 'c' };
//	//printf("%d\n", strlen(arr));//3
//	//printf("%d\n", strlen(arr2));//1
//	printf("%d\n", strlen("c:\test\32\test.c"));//13���ַ�
//	//    c  :   \t �Ʊ��   e s t    \32��ʾ�˽���32������Ǹ�10����������һ���ַ�  \t  e  s   t    .    c
//	//    1  2      3        4 5 6     7                                              8  9  10  11   12  13
//	printf("%c", '\065');
//	return 0;
//
//} 


//�ƣ�2���ƣ�λ������
//int main()
//{
//	int a = 1;//����1ռ4���ֽ�-32bitλ
//	//1��2���ƣ�00000000 00000000 00000000 00000001
//	int b = a << 2;
//	//��ʾa����2��2����λ�õ��������b
//	//00000000 00000000 00000000 00000001   ->000000 00000000 00000000 00000001 00  ���ƺ󲻹�32bitλ��ĩβ��0
//	//                                                                        1*2^2+0*2^1+0*2^0=4
//	printf("%d", b);//4
//
//	return 0;
//}

//�ú�����ʽ�Ƚ�������С
//int ADD(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else if (x < y)
//	{
//		return y;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max = ADD(num1, num2);
//	if (max == 0)
//	{
//		printf("�������");
//	}
//	else
//	printf("max=%d\n", max);
//	return 0;
//}


//sizeof()--�����ֽڴ�С
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a );//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof int );//err
//	printf("%d\n", sizeof(arr));//6*4=24
//	//��������Ԫ�ظ���
//	printf("%d", sizeof(arr) / sizeof(arr[0]));//6
//	return 0;
//}



//ԭ�룬���룬����,( ~ )-��λȡ��
//int main()
//{
//	int a = 0;//4���ֽڣ�32λbitλ
//	int b = ~a;//����2����λ��λȡ����
//	//a:0000 0000 0000 0000 0000 0000 0000 0000 ������洢���ǲ���
//	//  1111 1111 1111 1111 1111 1111 1111 1111 ��λȡ��      ����
// 	//  1111 1111 1111 1111 1111 1111 1111 1110 ���룺�����1
//	//  1000 0000 0000 0000 0000 0000 0000 0001 ԭ�룺����λ���䣬������λȡ��
//	//����λ��1��ʾ������0��ʾ����
//	printf("%d", b);//������������ԭ�룬���Ϊ-1
//	return 0;
//}
