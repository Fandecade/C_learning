#include <stdio.h>
#include <windows.h>

//1.forѭ��,10��ѭ����10�δ�ӡ��10��Ԫ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//ǰ�գ�i=0;�󿪣�i<10
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//2.����forѭ����ӡ100��hehe
//int main()
//{
//	int i = 0;
//	int a = 1;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;//i��ѭ��ÿ�γ�ʼ��j��һ��iѭ����10��jѭ��
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d:hehe\n",a);
//			a++;
//		}
//	}//10*10=100
//	return 0;
//}

//3.�����д������ӡ100��hehe��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 1;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("%d:hehe\n", a);
//			a++;
//		}
//	}//ֻ��ӡ10��hehe
//	return 0;
//}


////4.
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//����ѭ��Ҫѭ�����ٴ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�ж���䣺k=0,���ǵ��ڣ�����Ϊ==����ʾ��0��ֵ��k��ʹ���ж����=0�򲻽���ѭ��
//	{
//		k++;
//	}
//	return 0;//ѭ��0��
//}

//do whileѭ��
//int main()
//{
//	int i = 1;
//	do 
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);//1.2.3.4
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//1�Ľ׳�+2�Ľ׳�+3�Ľ׳�.....+10�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;//n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ�����ֵ��±�:���ֲ��ҷ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;//��������7
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±꣨��ʱ��ʾ��һ������Ԫ��1�������±��0��ʼ��
//	int right = sz - 1;//���±꣨sz�����Ԫ�ظ��������������±���0��ʼ��sz-1��ʾ���һ��Ԫ�ص��±꣩
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)//�ж��м������С�Ͳ������ֵĴ�С��ϵ���Ӷ�ȷ�������±�
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//ע�⡱����ʾ�������������Ԫ��ʱ
//
int main()
{
	char arr1[] = "welcom to bit!!!!!";//�ַ����еĿո�Ҳ��һ���ַ��������ܱ�sizeof��������
	char arr2[] = "##################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0])-2 ;//,����2��ȥ��2���ո񣩵���ʱ�������±��Ǵ���ģ�
	     //û�п��ǵ��ַ���������־
	     //char arr1[] = "welcom to bit!!!!!";
	     //[w e l c o m �ո� t o �ո� b   i   t   ��  ��  ��  ��  ! ���ַ���������־\0]
	     // 1 2 3 4 5 6  7   8 9  10  11  12  13  14  15  16  17 18  19
	//printf("�����right=%d", right);
	int right = strlen(arr1) - 1;//�����������±�
	//strlen��sizeof�����������ַ�����ĳ��Ⱥ���������������������Ƿ�����Ľ�����־Ҳ����ȥ��
    // strlen�ǲ��ӵģ�����ʾ�ַ����ĳ��ȡ�
	//��sizeof������ַ������ڴ��еĳ��ȣ��������Ǽ�������'\0'��
	while (left <= right)//ѭ�����е�����
	{
		arr2[left] = arr1[left];//��arr1�������Ԫ�ظ�ֵ��arr2���������Ԫ�أ�ÿ�ν���һ��Ԫ�صĸ�ֵ
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣ1��
		Sleep(1000);//���ͷ�ļ�#include <windows.h>
		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}