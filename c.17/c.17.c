#include <stdio.h>

////��ָ�뷽ʽʵ��strlen-�ݹ鷽ʽ
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//ָ�������ʾ����֮���Ԫ�ظ���
//}
//int main()
//{
//	//strlen()-���ַ�������
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ָ����ԱȽϴ�С
//������ֵ��Ϊ0
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//}
////��׼�涨������ָ��ָ��Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
////����������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	//1.&arr-&������-������������Ԫ�صĵ�ַ-��������ʾ�������飬&��������ʾȡ��������������ĵ�ַ
//	//2.sizeof(arr),sizeof(������)-��������ʾ�����������飬sizeof(������)���������������Ĵ�С
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);// 010FF7A0
//	printf("%p\n", arr+1);// 010FF7A4
//
//	printf("%p\n", &arr[0]);// 010FF7A0
//	printf("%p\n", &arr[0]+1);// 010FF7A4
//
//	printf("%p\n", &arr);// 010FF7A0
//	printf("%p\n", &arr+1);// 010FF7C8
//	return 0;
//}

//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//int* p = arr;//p��ŵ���������Ԫ�صĵ�ַ
//��Ȼ���԰����������ɵ�ַ��ŵ�һ��ָ���У�����ʹ��ָ��������һ���ͳ�Ϊ����

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p=========%p\n", p + i, &arr[i]);
//	}                           //   �����ȼ�
//	return 0;
//}


//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	printf("%d\n", **ppa);//10
//}

//�ṹ��
//�ṹ�������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ��������Ǳ���
//int main()
//{
//	struct stu s;//�ֲ�����
//	return 0;
//}

////tyoedef ���¶���ṹ������
//typedef struct stu
//{
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//�˴�stuΪ����
////typedef ���¶���ṹ������Ϊstu
//int main()
//{
//	struct stu s1;
//	stu s2;//������ȼ�
//	return 0;
//}

//�ṹ������Ķ���ͳ�ʼ��
//struct stu
//{
//		//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ��������Ǳ���
//int main()
//{
//	struct stu s = { "����",20,"1214656","��" };//�ṹ���ʼ��
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.tele);
//	printf("%s\n", s.sex);
//	return 0;
//}


//ͨ��������ӡ�ṹ�����
struct stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//s1,s2,s3������ȫ�ֵĽṹ��������Ǳ���
void print1(struct stu s)//�ṹ��������struct stu ,������s;��Ҫ©д
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n", s.sex);
}

void print2(struct stu *s)
{
	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%s\n", s->tele);
	printf("%s\n", s->sex);//ָ��ķ�ʽ��ӡ�ṹ��ʱ:   ->
}

int main()
{
	struct stu s = { "����",20,"1214656","��" };//�ṹ���ʼ��
	print1(s);
	print2(&s);
	return 0;
}
//print2()�������ã�
//��������ʱ����������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ�����
//����ѹջ��ϵͳ�����Ƚϴ����Ե������ܵ��½�

//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ