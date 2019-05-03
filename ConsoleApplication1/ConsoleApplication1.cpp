// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
//快速排序
void Qsort(int arr[], int low, int high) {
	if (high <= low) return;
	int i = low;
	int j = high + 1;
	int key = arr[low];
	//int a[] = { 57, 68, 59, 52, 72, 28, 96, 33, 24 };
	while (true)
	{
		/*从左向右找比key大的值*/
		while (arr[++i] < key)
		{
			if (i == high) {
				break;
			}
		}
		/*从右向左找比key小的值*/
		while (arr[--j] > key)
		{
			if (j == low) {
				break;
			}
		}
		if (i >= j) break;
		/*交换i,j对应的值*/
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	/*中枢值与j对应值交换*/
	int temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	Qsort(arr, low, j - 1);
	Qsort(arr, j + 1, high);
}


//斐波那契数列 递归
 int fibonacci1(int i) {
	if (i <= 0) {
		return 0;
	}
	if (i == 1) {
		return 1;
	}
	return fibonacci1(i - 1) + fibonacci1(i - 2);
}

 //普通循环
 int fibonacci2(int n)
 {
	 if (n <= 0) {
		 return 0;
	 }
	 if (n == 1) {
		 return 1;
	 }
	 int fibNMinusOne = 0;
	 int fibNMinusTwo = 1;
	 int fibN = 0;
	 for (int i = 2; i <= n; i++) {
		 fibN = fibNMinusOne + fibNMinusTwo;
		 fibNMinusOne = fibNMinusTwo;
		 fibNMinusTwo = fibN;
	 }
	 return fibN;
 }


int main()
{
	/*std::cout << "Hello World!\n";
	std::cout << "====This is a ConsoleApplication  Test====" << std::endl;

	int arrayA[4] = { 2, 4, 3, 1 };
	int length = sizeof(arrayA) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
		std::cout << arrayA[i] << "=";
	}
	std::cout << std::endl;*/
	//冒泡排序  从最后元素依次往前和前一个元素比较 比它小则交换顺序 遍历结束后第一个元素则为最小 排除第一个元素后  往前重复此操作 
	//2431   2413  2143  1/243    23/4
	/*for (size_t i = 0; i < length; i++)
	{
		for (size_t j = length - 1; j > i && j >= 1; j--)
		{
			if (arrayA[j] < arrayA[j-1] )
			{
				size_t  tmp = arrayA[j - 1];
				arrayA[j - 1] = arrayA[j];
				arrayA[j] = tmp;
			}
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arrayA[i] << "=";
	}
	std::cout << std::endl;*/
	//选择排序 例如选择和尾元素比  从头开始和尾元素比较 比完之后则尾元素最大 排除尾元素[已在有序队列中]  重复此操作
	//2431   2413  231/4   21/34  1/234
	/*
	for (int i = length -1 ; i > 0; i--)
	{
		int key = i;
		int value = arrayA[i];
		for (int j = 0; j < i; j++)
		{
			if (arrayA[j] > value)
			{
				value = arrayA[j];
				key = j;
			}
		}
		if (key < length - 1)
		{
			int  tmp = arrayA[key];
			arrayA[key] = arrayA[i];
			arrayA[i] = tmp;
		}
	}*/

	// 选择和头元素比   从头开始和之后元素比较 比完之后头元素最小 排除头元素[已在有序队列中]  重复此操作
	// 2431   1/432  1/342  12/43  123/4
	//for (int i = 0; i < length; i++)  //排除元素重复此操作
	//{
	//	int key = 0;
	//	int value = arrayA[i];
	//	for (int j = i+1; j < length  ; j++) //从头开始和之后元素比较 比完之后头元素最小
	//	{
	//		if ( value > arrayA[j])
	//		{
	//			key = j;
	//			value = arrayA[j];
	//		}
	//	}
	//	if (key > 0)
	//	{
	//		int  tmp = arrayA[key];
	//		arrayA[key] = arrayA[i];
	//		arrayA[i] = tmp;
	//	}
	//}

	//for (size_t i = 0; i < length; i++)
	//{
	//	std::cout << arrayA[i] << "=";
	//}
	//std::cout << std::endl;


	//插入排序  将第一个数放入[已排序队列]  将后面的数[ 未排序队列]和[已排序的队列]的数进行从后往前比较 找到合适位置插入到[已排序队列]   重复操作继续从[未排序队列]中查找
	//2431    12/43   123/4
	//for (int i = 1; i < length; i++)
	//{
	//	int j, key;
	//	key = arrayA[i];
	//	j = i - 1;
	//	while ( (j >=0) && (arrayA[j] > key) )  //从后依次往前将key和[已排序的队列]比  如果他们比key大 则往后移动位置 记录插入元素位置
	//	{
	//		arrayA[j + 1] = arrayA[j];
	//		j--;
	//	}
	//	arrayA[j + 1] = key;
	//}
	//for (size_t i = 0; i < length; i++)
	//{
	//	std::cout << arrayA[i] << "=";
	//}
	//std::cout << std::endl;

	//快速排序 
	//int a[] = { 57, 68, 59, 52, 72, 28, 96, 33, 24 };

	//Qsort(a, 0, sizeof(a) / sizeof(a[0]) - 1);/*这里原文第三个参数要减1否则内存越界*/

	//for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	//{
	//	cout << a[i] << " ";
	//}

	//斐波那契数列
	int b = fibonacci1(3);
	


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
