#include <stdio.h>
#include <string.h>
//int main()
//{
//	int a = 10;//������4���ֽڵĿռ�
//	printf("%p\n", &a);//��ӡa�ĵ�ַ
//	int* p = &a;//p��һ������-ָ�����
//	printf("% p\n", p);//ͨ��ָ�������a�ĵ�ַ����P
//	*p = 20;//*-�����ò�����/��ӷ��ʲ�����
//	printf("a=%d\n", a);//ͨ�������ò���������a�ĵ�ַ����a��ֵ,*p=a
//	return 0;
//}


//int main()
//{
//	double d = 3.14;
//	double * pd = &d;
//	*pd = 5.5;//*pd=d,������d��ֵλ5.5
//	printf("%1f\n",d);
//	printf("%1f\n", *pd);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//32λ��ַռ4���ֽڣ�64λ��ַռ8���ֽ�
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



////�ṹ������
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "c���Գ������",55 };
//	struct Book* pb = &b1;
//	printf("������%s\n", b1.name);
//	printf("�۸�:%dԪ\n", b1.price);
//	//����pb��ӡ���ҵ������ͼ۸�
//	//  .     �ṹ�����.��Ա
//	//  ->    �ṹ��ָ��->��Ա
//	printf("����1��%s\n", (*pb).name);
//	printf("�۸�1:%d\n", (*pb).price);
//	printf("����2��%s\n", pb->name);
//	printf("�۸�2��%d\n", pb->price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	strcpy(b1.name, "c++");//strcpy-string copy-�ַ�������-�⺯��-string.h
//	printf("% s\n", b1.name);
//	return 0;
//}



//if���
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	};
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (num == 5)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//whileѭ�����
//����whileѭ��������1��100������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//while������1��100������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//
//}


//switch�������
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//�������switch(�������ʽ),ע��switch()���治�ӷֺţ�
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n"); 
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;//break�����������switch���
//	};
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://�����������case
//		printf("�������\n");
//		break;
//	}
//}


int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch��n��
		{
	       case 1:n++;
	       case 2:m++; n++; break;//�˴�breakֻ������case3Ƕ�׵�switch���
		}//�˴���break���Ի�Ҫ����case4���
	case 4:m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d", m, n);//m=5,n=3
	return 0;
}
