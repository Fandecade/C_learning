#include <stdio.h>
//һ���ػ�����
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown-s-t 60��		60���رմ˼����
//	//-s �ǹرմ˼����
//	//-t ���ӳٶ೤ʱ��ر�, ���������
//	//system()-ִ��ϵͳ����
//	sysyem("shutdown-s-t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//		//�Ƚ������ַ���strcmp()
//		//int strcmp(const char *str1, const char *str2)
//		//str1 -- Ҫ���бȽϵĵ�һ���ַ�����
//		//str2 -- Ҫ���бȽϵĵڶ����ַ�����
//		//�������ֵС�� 0�����ʾ str1 С�� str2��
//		//�������ֵ���� 0�����ʾ str1 ���� str2��
//		//�������ֵ���� 0�����ʾ str1 ���� str2��
//	{
//		system("shutdown-a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//int main()
//{
//
//	int arr[20] = { 0 };
//	system("shutdown-s-t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n")��
//			scanf("%s", &input);
//		if (strcmp("shutdown-a") == 0);
//		{
//			break;
//		}
//	}
//	return 0;
//}

//����
//c�����еĺ����������ӳ���
//int main()
//{
//	char arr1[] = "bit";//   \0���ַ���������־����ӡʱ����\0��ֹͣ��ӡ
//	char arr2[] = "#############";
//	//             bit\0#########
//	strcpy(arr2, arr1);
//	//stecpy()�ַ�������
//	//����������char *strcpy(char *dest, const char *src)
//	//dest -- ָ�����ڴ洢�������ݵ�Ŀ�����顣
//	//src -- Ҫ���Ƶ��ַ�����
//	//�ú�������һ��ָ�����յ�Ŀ���ַ��� dest ��ָ�롣
//	printf("%s\n", arr1);//strcpy����������\0��ֹͣ����
//	return 0;
//}

//strlen()-string length-�ַ��������й�

//�Զ��庯��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//���庯��:�ж�������С
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//



//����������ֵ
//void Swap(int x, int y)//void˵��û�з���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//����������ֵ
//void Swap2(int* pa, int* pb)//����ı���������ʽ����
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);   //&a,&b��ʵ�ʲ���
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//��ʽ������ʵ�ε�һ����ʱ����
//����ʽ�������޸��ǲ��ı�ʵ�ʲ�����