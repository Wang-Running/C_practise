#define _CRT_SECURE_NO_WARNINGS
//Fibonacci����
//F[0] = 0
//F[1] = 1
//for each i �� 2: F[i] = F[i - 1] + F[i - 2]
//��ˣ�Fibonacci���о����磺0, 1, 1, 2, 3, 5, 8, 13, ...����Fibonacci�����е������ǳ�ΪFibonacci��������һ��N�����������Ϊһ��Fibonacci����ÿһ�����
//�԰ѵ�ǰ����X��ΪX - 1����X + 1�����ڸ���һ����N��������Ҫ���ٲ����Ա�ΪFibonacci����
//����������
//���������
//ʾ��1��
//���� 15
//��� 2
//����Ƭ��
//����Ϊһ��������N(1 �� N �� 1, 000, 000)
//���һ����С�Ĳ�����ΪFibonacci��"
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

//���滻�ո���ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���Ϊ
//We%20Are % 20Happy��

class Solution {
public:
	void replaceSpace(char *str, int length) {
		int spacecent = 0;
		char* cur = str;
		while (*cur)
		{
			if (*cur == ' ')
				spacecent++;
			cur++;
		}
		int newlen = length + spacecent * 2;
		int end1 = length - 1;
		int end2 = newlen - 1;
		while (end1 != end2)
		{
			if (str[end1] != ' ')
				str[end2--] = str[end1--];
			else
			{
				str[end2--] = '0';
				str[end2--] = '2';
				str[end2--] = '%';
				end1--;
			}
		}
	}
};
