#define _CRT_SECURE_NO_WARNINGS
//ţ������ָoffer 
//����
//JZ6 ��β��ͷ��ӡ����

/**
* struct ListNode {
*	int val;
*	struct ListNode *next;
* };
*
* C������������ȫ�ֱ��������static����ֹ�ظ�����
*/
/**
* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
*
*
* @param listNode ListNode��
* @return int����һά����
* @return int* returnSize ������������
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