#include <stdio.h>

�����ĵ���
1.��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
2.��ַ���ã��ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
            ���ִ��η�ʽ�����ú����ͺ����ⲿ�ı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���


�������ж�һ�����ǲ�������
�������֣�����������1��������������0
int is_prime(int x)
{
	//�Գ���
	int j = 0;
	for (j = 2; j < x; j++)
	{
		if (x % j == 0)
			return 0;
	}return 1;
}
	
int main()
{
	//��ӡ100-200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)//ע���Խ�����ʹ��ʱ��������
		{
			printf("100-200֮���������%d\n", i);
		}
	}
	return 0;
}


�ж��Ƿ�Ϊ���꣨��ӡ1000-2000�����꣩
�������֣���Ϊ�����򷵻�1�����򷵻�0
int is_leap_year(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
		{
			printf("%d\n", year);
		}
	}
	return 0;
}

���ֲ���:��һ�����������в��Ҿ����ĳ�������ҵ��˾ͷ�����������±����ͷ���-1
��������
int binary_search(int arr[], int k,int sz)//���ں������ݵ���һ����ַ����int arr[]��һ��ָ��
{
	//�㷨��ʵ��
	//int sz = sizeof(arr) / sizeof(arr[0]);//��ʱarrֻ��arr[]������Ԫ�صĵ�ַ���������飬���Լ���sz����������
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//ѭ��ֹͣ�������ǣ�ֱ���ҵ��Ǹ���
		}
	}
	return -1;//��ѭ��������û�ҵ��Ǹ���������-1����ʾ������û�����ҵ�����
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//����Ҫ���ҵ���Ϊ7
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);//arr���ݹ�ȥ��������arr��Ԫ�صĵ�ַ,������������
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	
	}
	return 0;
}

дһ��������ÿ����һ������������ͻὫnum��ֵ����1
void Add(int* p)//�ú�������ʵ�ε�ֵ�����ݲ���ʱ���ݵ�ַ��
{
	(*p)++;//����*p++
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);//1
	Add(&num);
	printf("num=%d\n", num);//2
	Add(&num);
	printf("num=%d\n", num);//3
	return 0;
}

������Ƕ�׵��ú���ʽ���ʣ������뺯��֮������л�����ϵģ�
��ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	return 0;
}
