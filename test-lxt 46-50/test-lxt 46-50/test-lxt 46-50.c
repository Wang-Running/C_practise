#define _CRT_SECURE_NO_WARNINGS
//BC46
//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	while (scanf("%c", &c) != EOF)
//	{
//		switch (c)
//		{
//		case'A':
//		case'a':
//		case'E':
//		case'e':
//		case'I':
//		case'i':
//		case'O':
//		case'o':
//		case'U':
//	    case'u':printf("Vowel\n");
//			break;
//		default:printf("Consonant\n");
//			break;
//		}
//		getchar();
//	}
//	return 0;
//}

//BC47
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char a = 0;
//	while (scanf("%c",&a) != EOF)
//	{
//		if (isalpha(a))
//			printf("%c is an alphabet.", a);
//		else
//			printf("%c is not an alphabet.", a);
//		getchar();
//	}
//	return 0;
//}

//BC48
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			ch = ch - 32;
//			printf("%c\n", ch);
//			continue;
//		}
//		if (ch >= 'A'&&ch <= 'z')
//		{
//			ch = ch + 32;
//			printf("%c\n", ch);
//		}
//	}
//	return 0;
//}

//BC49
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a == b)
//			printf("%d=%d\n", a, b);
//		else if (a>b)
//			printf("%d>%d\n", a, b);
//		else
//			printf("%d<%d", a, b);
//	}
//	return 0;
//}

//BC50



//BC84
//#include<stdio.h>
//int y(int x)
//{
//	if (x < 0)
//		printf("1\n");
//	else
//	if (x == 0)
//		printf("0\n");
//	else
//		printf("-1\n");
//      return 0;
//}
//
//int main()
//{
//	int z = 0;
//	int a = 0;
//	scanf("%d", &a);
//	z = y(a);
//	return z;
//}

