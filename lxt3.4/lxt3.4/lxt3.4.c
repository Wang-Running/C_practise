#define _CRT_SECURE_NO_WARNINGS
//牛客网剑指offer 
//链表
//JZ6 从尾到头打印链表

/**
* struct ListNode {
*	int val;
*	struct ListNode *next;
* };
*
* C语言声明定义全局变量请加上static，防止重复定义
*/
/**
* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
*
*
* @param listNode ListNode类
* @return int整型一维数组
* @return int* returnSize 返回数组行数
*/
//int* printListFromTailToHead(struct ListNode* listNode, int* returnSize) {
//	// write code here
//	int count = 0;
//	int arr[100000];
//	while (listNode != NULL)
//	{
//		arr[count] = listNode->val;
//		count++;
//		listNode = listNode->next;
//	}
//	*returnSize = count;
//	int *tem = (int*)malloc(count*sizeof(int));
//	int i = 0;
//	for (int j = count - 1; j >= 0; j--)
//	{
//		tem[i] = arr[j];
//		i++;
//	}
//	return tem;
//}