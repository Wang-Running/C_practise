#define _CRT_SECURE_NO_WARNINGS
//BC26
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b, c, area;
//	scanf("%f %f %f", &a, &b, &c);
//	float circumference = a + b + c;
//	float p = (a + b + c) / 2;
//    area = (float)(sqrt(p*(p - a)*(p - b)*(p - c)));
//	printf("circumference=%.2f area=%.2f", circumference, area);
//	return 0;
//}

//BC27
//#include <stdio.h>
//int main()
//{
//	double pi = 3.1415926;
//	double r = 0;
//	scanf("%lf", &r);
//	double v = (4 * pi*r*r*r / 3);
//	printf("%.3lf", v);
//	return 0;
//}

//BC28
//#include <stdio.h>
//int main()
//{
//	char c=0;
//	while (scanf("%c", &c)!= EOF)
//	{
//		printf("%c\n", c + 32);
//		getchar();
//	}
//	return 0;
//}

//BC29
//#include<stdio.h>
//int main()
//{
//	int num;
//	while (scanf("%d", &num) != EOF)
//		printf("%d\n", 1 << num);
//	return 0;
//}

//BC30
#include<stdio.h>
int main()
{
	int n, h, m, s;
	scanf("%d %d %d", &n, &h, &m);
	if (m <= n * h&&m%h == 1)
	{
		s = n - m / h - 1;
		printf("%d", s);
	}
	else if (m <= n * h&&m%h == 0)
	{
		s = n - m / h;
		printf("%d", s);
	}
	return 0;
}