#include <stdio.h>

////用指针方式实现strlen-递归方式
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//指针相减表示他们之间的元素个数
//}
//int main()
//{
//	//strlen()-求字符串长度
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//指针可以比较大小
//将数组值变为0
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
////标准规定：允许指向指针元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
////但不允许与指向第一个元素之前的那个内存位置的指针进行比较

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素的地址
//	printf("%p\n", &arr[0]);
//	//1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组，&数组名表示取出的是整个数组的地址
//	//2.sizeof(arr),sizeof(数组名)-数组名表示的是整个数组，sizeof(数组名)计算的是整个数组的大小
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
//int* p = arr;//p存放的是数组首元素的地址
//既然可以把数组名当成地址存放到一个指针中，我们使用指针来访问一个就成为可能

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p=========%p\n", p + i, &arr[i]);
//	}                           //   两个等价
//	return 0;
//}


//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa是二级指针
//	printf("%d\n", **ppa);//10
//}

//结构体
//结构体的声明
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量，是变量
//int main()
//{
//	struct stu s;//局部变量
//	return 0;
//}

////tyoedef 重新定义结构体名字
//typedef struct stu
//{
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//此处stu为类型
////typedef 重新定义结构体名字为stu
//int main()
//{
//	struct stu s1;
//	stu s2;//与上面等价
//	return 0;
//}

//结构体变量的定义和初始化
//struct stu
//{
//		//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量，是变量
//int main()
//{
//	struct stu s = { "张三",20,"1214656","男" };//结构体初始化
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.tele);
//	printf("%s\n", s.sex);
//	return 0;
//}


//通过函数打印结构体变量
struct stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//s1,s2,s3是三个全局的结构体变量，是变量
void print1(struct stu s)//结构体类型是struct stu ,变量是s;不要漏写
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
	printf("%s\n", s->sex);//指针的方式打印结构体时:   ->
}

int main()
{
	struct stu s = { "张三",20,"1214656","男" };//结构体初始化
	print1(s);
	print2(&s);
	return 0;
}
//print2()函数更好：
//函数传参时，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，
//参数压栈的系统开销比较大，所以导致性能的下降

//结构体传参的时候，要传结构体的地址