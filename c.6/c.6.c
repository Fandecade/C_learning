#include <stdio.h>

//1.strcmp(������Ҫ�жϵ��ַ�������д���жϵ��ַ�����)
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//�ж�2�ַ����Ƿ����
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�����\n");
//	}
//	return 0;
//}

//�����Ӵ�С����
//�㷨ʵ�֣�a�����ֵb��֮��c�з���С
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);//2,1,3
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//

//���������������������������������Լ��
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)//m%n:����������ó���������������Ϊ0����ѭ��������ֱ������Ϊ0ѭ��ֹͣ
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		�ж�year�Ƿ�Ϊ����
//		1.�ܱ�4�������Ҳ��ܱ�100����������
//		2.�ܱ�400������������
//		if ((year % 4 == 0 )&& (year % 100 != 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//{
//	printf("%d\n", year);
//	count++;
//}

//��ӡ100-200֮�������
int main()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		//�ж��Ƿ�Ϊ������1.�Գ���:��������2->i-1(������ֻ�ܱ�1���Լ�����)
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}