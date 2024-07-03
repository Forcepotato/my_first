#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水(编程实现)。
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	//int total = money;
//	//int empty = money;
//
//	////置换
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//printf("%d\n", total);
//	if (money > 0)
//		printf("%d\n", 2 * money - 1);
//	else
//		printf("%d\n", 0);
//
//	return 0;
//}

////正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", i * a);//是最小公倍数不是公约数
//
//	return 0;
//}

//将一句话的单词进行倒置，标点不倒置。比如Iike beiing.经过函数后变为:beiing.like I

#include<string.h>
#include<assert.h>

void reverse(char* left, char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}

int main()
{
	char arr[101] = { 0 };
	//输入
	gets(arr);
	//逆置
	int len = strlen(arr);
	//1.逆序整个字符串
	reverse(arr,arr+len-1);
	//2。逆序每个单词
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if(*end!='\0')
		    end++;
		start = end;
	}
	printf("%s\n", arr);

	return 0;
}






