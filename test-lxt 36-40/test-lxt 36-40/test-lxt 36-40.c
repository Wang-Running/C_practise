#define _CRT_SECURE_NO_WARNINGS
//BC36
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

//BC37
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

//BC38
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i<100000; i++)
//	{
//		if (i == (i / 10000)*(i % 10000) + (i / 1000)*(i % 1000) + (i / 100)*(i % 100) + (i / 10)*(i % 10))
//			printf("%d ", i);
//	}
//	return 0;
//}

//BC39
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int arr[40];
//	scanf("%d", &a);
//	for (i = 0; i<a; i++)
//	{
//		scanf("%d", &arr[i]);          //循环输入成绩
//	}
//	for (i = 0; i<a - 1; i++)          //换行大循环 5次 
//	{
//		int j = 0;
//		int flag = 0;                   //判断条件
//		for (j = 0; j<a - 1 - i; j++)   //行内排序
//		{
//			int temp = 0;
//			if (arr[j]<arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 1;                //判断条件
//			}
//		}
//		if (flag == 0)                   //如果=0，则不需要排序，已经有序，直接打印
//			break;
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);           //冒泡排序
//	}
//	return 0;
//}