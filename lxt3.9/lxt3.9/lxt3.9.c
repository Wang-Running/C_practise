#define _CRT_SECURE_NO_WARNINGS
//Fibonacci数列
//F[0] = 0
//F[1] = 1
//for each i ≥ 2: F[i] = F[i - 1] + F[i - 2]
//因此，Fibonacci数列就形如：0, 1, 1, 2, 3, 5, 8, 13, ...，在Fibonacci数列中的数我们称为Fibonacci数。给你一个N，你想让其变为一个Fibonacci数，每一步你可
//以把当前数字X变为X - 1或者X + 1，现在给你一个数N求最少需要多少步可以变为Fibonacci数。
//输入描述：
//输出描述：
//示例1：
//输入 15
//输出 2
//代码片段
//输入为一个正整数N(1 ≤ N ≤ 1, 000, 000)
//输出一个最小的步数变为Fibonacci数"
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	int n = 0;
//	scanf("%d",&n);
//	while (1)
//	{
//		if (b == n)
//		{
//			printf("%d\n",0);
//			break;
//		}
//		else if (n < b)
//		{
//			if (abs(a - n) < abs(n - b))
//			{
//				printf("%d\n",abs(a-n));
//				break;
//			}
//			else
//			{
//				printf("%d\n", abs(n - b));
//				break;
//			}
//		}
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return 0;
//}

//【替换空格】请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为
//We%20Are % 20Happy。