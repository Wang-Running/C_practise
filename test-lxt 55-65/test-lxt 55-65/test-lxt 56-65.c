#define _CRT_SECURE_NO_WARNINGS
//BC56 判断字母
//#include <stdio.h>
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch == '\n') continue;
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//}

//BC57 四季

//#include<stdio.h>
//int main()
//{
//	int year, month;
//	scanf("%4d%2d", &year, &month);
//	switch (month){
//	case 3:
//	case 4:
//	case 5:printf("spring"); break;
//	case 6:
//	case 7:
//	case 8:printf("summer"); break;
//	case 9:
//	case 10:
//	case 11:printf("autumn"); break;
//	case 12:
//	case 1:
//	case 2:printf("winter"); break;
//	}
//
//}

//BC58 健康评估
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float kg = 0;
//	float m = 0;
//	float BIM = 0;
//	scanf("%f %f", &kg, &m);
//	BIM = kg / pow(m, 2);
//	if (18.5<BIM&&BIM<23.9)
//		printf("Normal");
//	else
//		printf("Abnormal");
//	return 0;
//}

//BC59 小乐乐找最大数
//#include <stdio.h>
//#define MAX(a,b) ((a) > (b) ? (a) : (b))
//
//int main(void)
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%d\n", MAX(MAX(a, b), MAX(c, d)));
//	return 0;
//}

//BC60 判断是不是字母
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char a = 0;
//	while (scanf("%c", &a) != EOF)
//	{
//		if (isalpha(a))
//			printf("%c is an alphabet.\n", a);
//		else
//			printf("%c is not an alphabet.\n", a);
//		getchar();
//	}
//	return 0;
//}

//BC61 牛牛的二三七整除
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 0 || num % 3 == 0 || num % 7 == 0)
//	{
//		if (num % 2 == 0)
//			printf("2 ");
//		if (num % 3 == 0)
//			printf("3 ");
//		if (num % 7 == 0)
//			printf("7\n");
//	}
//	else
//		printf("n\n");
//	return 0;
//}

//BC62 统计数据正负个数
//#include <stdio.h>
//int main()
//{
//	int p = 0;
//	int n = 0;
//	int sum = 0;
//	for (int i = 0; i<10; i++)
//	{
//		scanf("%d", &sum);
//		if (sum>0)
//			p++;
//		else if (sum<0)
//			n++;
//	}
//	printf("positive:%d\n", p);
//	printf("negative:%d\n", n);
//	return 0;
//}

//BC63 网购
//#include<stdio.h>
//int main()
//{
//	float jg = 0;
//	int yf = 0;
//	int rq = 0;
//	int yhq = 0;
//	scanf("%f %d %d %d", &jg, &yf, &rq, &yhq);
//	if (yf == 11, rq == 11)
//	{
//		if (yhq == 0)
//		{
//			jg = jg*0.7;
//			if (jg>0)
//				printf("%.2f", jg);
//			else
//				printf("0.00");
//		}
//		if (yhq == 1)
//		{
//			jg = jg*0.7 - 50;
//			if (jg>0)
//				printf("%.2f", jg);
//			else
//				printf("0.00");
//		}
//	}
//	else if (yf == 12, rq == 12)
//	{
//		if (yhq == 0)
//		{
//			jg = jg*0.8;
//			if (jg>0)
//				printf("%.2f", jg);
//			else
//				printf("0.00");
//		}
//		if (yhq == 1)
//		{
//			jg = jg*0.8 - 50;
//			if (jg>0)
//				printf("%.2f", jg);
//			else
//				printf("0.00");
//		}
//	}
//	else
//		printf("%.2f", jg);
//	return 0;
//}

//BC64 牛牛的快递
//#include<stdio.h>
//int main()
//{
//	float a;
//	char b;
//	int price;
//	scanf("%f %c", &a, &b);
//	getchar();
//	if (a <= 1){
//		price = 20;
//		if (b == 'y'){
//			price += 5;
//		}
//		else if (b == 'n'){
//			price += 0;
//		}
//	}
//	if (a>1){
//		int c = a;
//		if ((a - c)>0){
//			price = 20 + c;
//		}
//		if ((c - a) >= 0){
//			price = 19 + c;
//		}
//		if (b == 'y'){
//			price += 5;
//		}
//		else if (b == 'n'){
//			price += 0;
//		}
//	}
//	printf("%d", price);
//	return 0;
//}

//BC65 计算商品打折结算金额
//#include <stdio.h>
//int main()
//{
//	float sum = 0;
//	scanf("%f", &sum);
//	if (sum<100)
//	{
//		printf("%.1f", sum);
//	}
//	else if (sum >= 100 && sum<500)
//	{
//		sum *= 0.9;
//		printf("%.1f", sum);
//	}
//	else if (sum >= 500 && sum<2000)
//	{
//		sum *= 0.8;
//		printf("%.1f", sum);
//	}
//	else if (sum >= 2000 && sum<5000)
//	{
//		sum *= 0.7;
//		printf("%.1f", sum);
//	}
//	else
//	{
//		sum *= 0.6;
//		printf("%.1f", sum);
//	}
//	return 0;
//}