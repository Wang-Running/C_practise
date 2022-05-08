#define _CRT_SECURE_NO_WARNINGS

//leetcode 35. ËÑË÷²åÈëÎ»ÖÃ

int searchInsert(int* nums, int numsSize, int target){
	int left = 0;
	int right = numsSize - 1;
	if (nums[right] < target)
		return numsSize;
	if (nums[right] == target)
		return right;
	if (nums[left] >= target)
		return left;
	while (nums[left]<target && nums[right]>target)
	{
		int mid = (left + right) / 2;
		if (mid == left)
		{
			return right;
		}
		if (nums[mid]>target)
		{
			right = mid;
		}
		if (nums[mid]<target)
		{
			left = mid;
		}
		if (nums[mid] == target)
		{
			return mid;
		}
	}
	if (nums[left]<target)
	{
		return right;
	}
	if (nums[right]>target)
	{
		return left;
	}
	return;
}