#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b & b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || a == c || b == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}

////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

////将一个字符串str的内容颠倒过来，并输出。
////数据范围：1<=len(str)<=10000
//
//#include<stdio.h>
//
//int main()
//{
//	char arr[10001] = { 0 };
// //scanf("%s", arr);//不行遇到空格以后的输出不出来
//	gets(arr);
//
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//
////#include<string.h>
////
////int main()
////{
////	char arr[10001] = { 0 };
////	//scanf("%s", arr);//不行遇到空格以后的输出不出来
////	gets(arr);
////	int sz = strlen(arr) - 1;
////	int i = 0;
////	for (i = sz; i >= 0; i--)
////	{
////		printf("%c", arr[i]);
////
////	}
////
////	return 0;
////}
//////ai优化版有点看不懂stdin
////#include <stdio.h>
////#include <string.h>
////
////int main()
////{
////    char arr[10001] = { 0 };
////
////    // 使用 fgets 代替 gets 进行安全输入
////    fgets(arr, 10001, stdin);
////
////    // 如果存在换行符，将其移除
////    int sz = strlen(arr);
////    if (arr[sz - 1] == '\n') {
////        arr[sz - 1] = '\0';
////        sz--;
////    }
////
////    // 逆序打印字符
////    for (int i = sz - 1; i >= 0; i--)
////    {
////        printf("%c", arr[i]);
////    }
////
////    return 0;
////}

////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
////例如:2 + 22 + 222 + 2222 + 22222
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

////求出0~100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3，则153是一个“水仙花数”。
//
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.计算i是几位数 -> n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.得到i每一位，计算他的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	//上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		int j = 0;
		//打印左边空格
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j <=i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}





