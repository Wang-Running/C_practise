#define _CRT_SECURE_NO_WARNINGS
//BC11
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	float b, c, d;
//	scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//	return 0;
//}

//BC12
//#include<stdio.h>
//int main()
//{
//	char a;
//	int i = 0;
//	scanf("%c", &a);
//	for (i = 0; i<5; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4 - i; j++)
//		{
//			printf(" ");
//		}
//		int n = 0;
//		for (n = i + 1; n>0; n--)
//		{
//			printf("%c ", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//BC13
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++)
//		printf("%c", arr[i]);
//	return 0;
//}

//BC14
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d %2d %2d", &year, &month, &date);
//	printf("year=%4d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	return 0;
//}

//BC15
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	printf("a=%d,b=%d", b, a);
//	return 0;
//}