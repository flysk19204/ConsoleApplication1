// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "Hello World!\n"; 
	std::cout << "====This is a ConsoleApplication  Test===="<< std::endl;

	int arrayA[4] = {2, 4, 3, 1};
	size_t length = sizeof(arrayA) / sizeof(int);
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arrayA[i] << "=";
	}
	std::cout << std::endl;
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
	//选择排序 例如选择和尾元素比  从头开始和尾元素比较 比完之后则尾元素最大 排除尾元素  重复此操作
	//2431   2413  231/4   21/34  1/234
	
	/*for (size_t j = length -1 ; j > 0; j--)
	{
		for (size_t i = 0; i < j; i++)
		{
			if (arrayA[i] > arrayA[j] )
			{
				size_t  tmp = arrayA[j];
				arrayA[j] = arrayA[i];
				arrayA[i] = tmp;
			}
		}
	}*/

	// 选择和头元素比   从头开始和之后元素比较 比完之后头元素最小 排除头元素  重复此操作
	// 2431   1/432  1/342  12/43  123/4
	for (size_t i = 0; i < length; i++)  //排除头元素重复此操作
	{
		for (size_t j = i+1; j < length  ; j++) //从头开始和之后元素比较 比完之后头元素最小
		{
			if (arrayA[j] < arrayA[i] )
			{
				size_t  tmp = arrayA[j];
				arrayA[j] = arrayA[i];
				arrayA[i] = tmp;
			}
		}
	}

	for (size_t i = 0; i < length; i++)
	{
		std::cout << arrayA[i] << "=";
	}
	std::cout << std::endl;


	//插入排序


	//快速排序
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
