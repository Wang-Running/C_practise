#define _CRT_SECURE_NO_WARNINGS
//BC41
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 140)
//		printf("Genius");
//	return 0;
//}                          //一次输入

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	if (a>=140)
//		printf("Genius\n");
//	return 0;
//}                         //多次输入

//BC42
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	if (a >= 90 && a <= 100)
//		printf("Perfect\n");
//	return 0;
//}

//BC43
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a >= 60 && a <= 100)
//			printf("Pass\n");
//		else
//			printf("Fail");
//	}
//	return 0;
//}

//BC44
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}

//BC45
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a>b)
			b = a;
		if (b>c)
			c = b;
		printf("%d\n", c);              //判断三个数大小并输出最大值
	}
	return 0;
}