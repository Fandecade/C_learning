#include <stdio.h>



////1.while循环打印1-4数字
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//			break;//结束循环
//		printf("%d\n", i);//0 1 2 3 4
//		i++;
//	}
//	return 0;
//}

//2.while循环，打印1-10数，跳过数字5
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//跳过本次循环，直接进入下一次循环
//		printf("%d\n", i);
//	}
//		return 0;
//	
//}

////3.getchar()和putchar,getchar()仅能接收一个字符
//int main()
//{
//	int ch = getchar();
//	putchar(ch);//与下面printf等价
//	printf("%c\n", ch);
//	return 0;
//}

//4.
//int main()
//{
//	int ch = 0;//定义了一个整型变量ch，为什么不是字符型变量，因为字符型变量是无符号的，无法把-1这个值赋给字符型变量
//	while ((ch = getchar() != EOF))//EOF:流结束符EOF,end of file->值为-1
//	{	//首先先输入一个字符，判断这个字符是否是EOF字符，若不是，则执行putchar()
//		//此时用户输入的字符存储在缓冲区中，但没有按下Enter键，那么程序即使执行到putchar()也不会将这个字符打印出来，
//		//因为压根就没有刷新缓冲区，当用户按下Enter键之后，计算机刷新缓冲区，将这个缓冲区的内容打印出来。
//		//putchar只能打印一个字符，那即使刷新了缓冲区，putchar（）也只能打印一个字符
//		//这句话确实没错，这里需要强调一下，
//		//无论是printf还是putchar，其本质都是一样的，都是刷新缓冲区，将缓冲区的内容打印出来，
//		//而我们在普通的putchar的适合，是getchar，再putchar，而getchar的时候就已经输入Enter键，
//		//即刷新缓冲区，因此输出一个字符。
//		
//		putchar(ch);
//	}
//	return 0;
//}
//无缓冲输入：用户输入字符后，程序立刻将这个字符打印出来, 即输入一个字符马上打印一个字符，这个过程成为无缓冲输入
//缓冲输入：用户输入字符后，字符会存入一个缓冲区中，直到用户按下Enter键，才会打印缓冲区的字符，
//          其优点是用户可以修改输入内容，增删减改。当然，其缺点是必须要按下Enter键才能输出内容，
//         不如无缓冲输入及时，比如在很多电子游戏中就是采用的无缓冲输入（如CS的WASD，英雄联盟的QWER)。
//流结束符EOF：判定程序输入的结束, 我们需要一个字符，一个任何文件都不会用到的字符----EOF(End Of File)
//            值为-1，因为getchar()函数虽是int类型，但返回值通常都介于0~127，也就是ASCII码的范围，
//	      因此 - 1这个字符不会对应任意一个字符，所以它可以作为文件结尾的标志，用来结束文件的输入。
//	      在Windows系统中, 用户可以通过Ctrl + Z来表示EOF，以结束文本流的输入。
//  
//5.getchar()
//int main()
//{
//
//	int ret = 0;
//	char password[20] = { 0 };//创建一个有20个字符的char型数组并初始化为0
//	printf("请输入密码：>");//输入123456
//	scanf_s("%s", password);//%s字符串格式输出，输入密码，并存放在password数组中
//	//输入函数->输入缓冲区存储123456和\n,scanf只读取123456其中按下的\n被放在缓冲区，\n被getchar读取
//	//缓冲区还剩一个'\n'
//	//读取一下'\n'
//	getchar();
//	printf("请确定（Y/N):>");
//	ret = getchar();//让用户输入Y/N，
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确定");
//	}
//}
//scanf在读取数字时会跳过空格，换行符，制表符
//getchar是键盘输入函数，功能是从键盘上输入一个字符，在c中功能就是接收一个字符,getchar()仅能接收一个字符



//int main()
//{
//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };//创建一个有20个字符的char型数组并初始化为0
//	printf("请输入密码：>");//输入123456
//	scanf_s("%s", password);//scanf在遇到空格，换行符，制表符会停止读取
//	
//	while (ch = getchar() != '\n')//如果输入1234 abcd,scanf读取1234此循环将空格和abcd都从缓冲区读取掉
//	{
//		;
//	}
//	printf("请确定（Y/N):>");
//	ret = getchar();//让用户输入Y/N，
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确定");
//	}
//}

//6.打印0-9数字
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//7.
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//。。。。
//		i++;//调整
//	}
//	return 0;
//}

//8.for循环打印1-10数字
//int main()
//{
//	int i = 0;
//	//  初始化  判断    调整 
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}



