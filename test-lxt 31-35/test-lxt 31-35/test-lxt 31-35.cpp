#define _CRT_SECURE_NO_WARNINGS
//BC31
//#include <stdio.h>
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//BC32
//#include<stdio.h>
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}

//////#include <stdio.h>
//////int main()
//////{
//////	char Name = 'Jake';
//////	int Age = 18;
//////	char Gender = 'Man';
//////	printf("Name Age Gender\n---------------------\n%c %d %c", Name, Age, Gender);
//////	return 0;
//////}

//BC33
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	float p = 0;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	p = (a + b + c + d + e) / 5.0;
//	printf("%.1f", p);
//	return 0;
//}

//BC34
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%0x %o", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//BC35
#include <stdio.h>
int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'A'&&ch <= 'z') || (ch >= 'a'&&ch <= 'z'))
			printf("YES\n");
		else
			printf("NO\n");
		getchar();
	}
	return 0;
}
