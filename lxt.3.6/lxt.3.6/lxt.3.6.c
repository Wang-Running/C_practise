#define _CRT_SECURE_NO_WARNINGS
//int fun(int x)
//{
//	int count = 0;
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0;j<x;j++)
//		{
//			count++;
//		}
//	}
//}
//时间复杂度为O(x^2)


//void Func1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//总次数为F(n)=n*n+2*n+10
//时间复杂度为O(x^2)

//#include <stdio.h>
//int main(){
//	unsigned char i = 1;
//	i -= 4;
//	printf("the value of i is: %d", i);
//	return 0;
//}

// 1111 1101，因为是无符号数，所以最高位的1不做符号位
//作为数值为，11111101对应的十进制数为253

//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d",&x);
//	int countx = 0;
//	while (x)
//	{
//		countx++;
//		x = x & (x - 1);
//	}
//	return countx;
//}
//6,看二进制里有几个一

//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4, c = 5, d = 2;
//	if (a > b)
//	if (b > c)
//		printf("%d", d++ + 1);
//	else
//		printf("%d", ++d + 1);
//	printf("%d\n", d);
//	return 0;
//}
//2,不变
