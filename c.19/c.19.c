#include <stdio.h>
//���������ڴ��еĴ洢
//�����ĸ�������
//3.14159 1E10���������������float��double��long double.
//��������ʾ�ķ�Χ��float.h�ж���
int main()
{
	int n = 9;
	float* pfloat = (float*)&n;
	printf("n��ֵ��%d\n", n);//9
	printf("*pfloat��ֵΪ��%f\n", *pfloat);//0.000000
	*pfloat = 9.0;
	printf("num��ֵΪ��%d\n", n);//1091567616
	printf("*pfloat��ֵΪ��%f\n", *pfloat);//9.000000
	return 0;
}
//���ݹ��ʱ�־IEEE�������͵��ӹ���Э��)754������һ�������Ƹ�����v���Ա�ʾ���������ʽ��
//��-1)^S*M2^E
//(-1)^S��ʾ����λ����s=0,vΪ��������s=1,vΪ������
//M��ʾ��Ч���֣����ڵ���1��С��2��
//2^E��ʾָ��λ

//���ӣ�ʮ���� 5.0��д�ɶ������� 101.0���൱�� 1.01*2^2����ôs=0,M=1.01,E=2
//���ӣ�ʮ����-5.0��д�ɶ�������-101.0���൱��-1.01*2^2����ôs=1,M=1.01,E=2

//IEEE 754�涨������32λ�ĸ����������λ1λ�Ƿ���λs�����ŵ���8λ��ָ��E��ʣ�µ�23λλ��Ч����M