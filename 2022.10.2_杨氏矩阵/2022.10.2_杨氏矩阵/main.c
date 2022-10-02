// 题目名称：杨氏矩阵
// 题目内容：
// 有一个数字矩阵，矩阵的每行从左到右都是递增的，矩阵从上到下都是递增的，请编写程序在这样的矩阵中查找某个数字是否在这个矩阵中。


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int FindNum(int arr[3][3], int k, int row, int col) {
	int x = 0;
	int y = col - 1;

	while (x <= row-1 && y>= 0)
	{
		if (arr[x][y] > k) {
			y--;
		}
		else if(arr[x][y] <k) {
			x++;
		}
		else
		{
			printf("下标是：（%d,%d）\n",x,y);
			return 1;
		}
	}
	// 找不到
	return 0;
}

int main() {
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int ret = FindNum(arr, k, 3, 3);
	if (ret == 1) {
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}


	return 0;
}