#include <stdio.h>
#include <math.h>
//��ӡ100-200֮�������:sqrt(����)[ƽ��������]�� ��: ����һ���Ǹ�ʵ����ƽ������ͷ�ļ�math.h
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
//
//1��100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//9,19,29.....99
//		{
//			count++;
//		}
//		if (i / 10 == 9)//90,91,92...99
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//
//����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = flag*1.0/i;//ע��1/i�����0
//		flag = -flag;//ͨ��flag��������������
//	}
//	printf("%1f\n", sum);//(.1f)�����ʱС�������һλС��
//
//	return 0;
//}
//
//
//
//��10�������е����ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//��ʼ�����ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//
//
//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡ1��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);//%-2d:��ʾ������룬�������2λ
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ
void menu()
{
	printf("****************************************\n");
	printf("****1.play         0.exit         ******\n");
	printf("****************************************\n");
}
void game()
{
	//1.����һ�������
	int ret = 0;
	//��ʱ����������������������ʼ��
	//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0��0��0��=(xxxx)��
	int guess = 0;//���ܲµ�����
	srand((unsigned int)time(NULL));//���������https://www.cnblogs.com/jianqiao123/p/12164779.html��
	//srand������������������ĳ�ʼ��������ԭ��:void srand(unsigned seed);
	//time���������ϵͳʱ�䣬���ķ���ֵΪ�� 00:00:00 GMT, January 1, 1970 ��������������������
	//Ȼ��time_t������ת��Ϊ(unsigned)���ٴ���srand��������: srand((unsigned) time(&t));
	//(unsigned)time(&t)��ǿ����ת������time_t����->unsigned����
	//�������һ��������������������У���Ҫ���������������֮ǰ����һ���������
	//ֻ����������ʼ������srand((unsigned)time(NULL)); ����ֱ����rand
	ret = rand()%100+1;//�����������rand()�����������https://www.cnblogs.com/dgwblog/p/8900755.html��
	//1��rand()����Ҫ���������᷵��һ����0�������������������������������Ĵ�Сͨ���ǹ̶���һ����������
	//2�������Ҫ����0~99��100�������е�һ��������������Ա��Ϊ��int num = rand() % 100;
	//3�����Ҫ����1~100������������int num = rand() % 100 + 1;
	//4���ܽ���˵�����Ա�ʾΪ��int num = rand() % n +a;���е�a����ʼֵ��n - 1 + a����ֵֹ��n�������ķ�Χ��
	//8�������԰���time.hͷ�ļ���Ȼ��ʹ��srand(��unsingned��time(NUll))��ʹ�õ�ǰʱ��ʹ������������������
	//�����Ϳ��Ա�֤ÿ��������ʱ���Եõ���ͬ����������У�ͬʱ��Ҫ�������������еļ������1�롣
	while (1)
	{
		printf("��������µ�����");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//ѡ�������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ");
		    break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
}