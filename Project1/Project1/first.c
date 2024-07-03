#define _CRT_SECURE_NO_WARNINGS //必须在第一行
#include <stdio.h>

//int main()
//{
//	int num1 = 0; //初始化
//	int num2 = 0;
//
//	scanf("%d %d", &num1, &num2);
//
//	int sum = num1 + num2;
//
//	printf("%d\n", sum); //%d是类型
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//	{
//		int n1 = 0;
//        int n2 = 0;
//		//输入
//		scanf("%d %d", &n1, &n2);
//		//求和
//
//		//int sum = n1 + n2;
//		int sum = Add(n1, n2);
//
//		//打印
//		printf("%d\n", sum);
//
//		return 0;
//	}

//int main()
//{
//	int arr[10] = {10,11,12,13,14,15,16,17,18,19};//数组
//	//printf("%d\n", arr[8]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}
// 
// 
//描述
//KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。
//输入描述：
//无
//输出描述：
//#include<stdio.h>
//
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//#include<stdio.h>

//int main()
//{
//
//	printf("Nmae    Age    Gender \n");
//	printf("--------------------\n");
//	printf("Jack    18     Man\n");
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("I lost my cellphonel\n");
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int b = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", b);
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int r = Max(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//	return 0;
//}

//int main()
//{
//	/*int a = 20;
//	int b = 0;
//	if (a || b)
//	{
//		printf("hehe\n");
//	}*/
//	int a = 20;
//	int b = 10;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//
//	int r = a < b ? a : b;
//	printf("%d\n", r);*/
//	int a = 10;
//	int b = 20;
//
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//       c==8       a==28      5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr[3] = 20;
//	printf("%d\n", arr[3]);
//	return 0;
//}

//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 0;//nint==unsigned int
//	return 0;
//}
//#include<stdio.h>

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>

//void test()
//{
//	printf("hello world\n");
//
//}
//#include<stdio.h>
//
////外部声明符号
//extern int g_val;//从add.c引用的
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//#include<stdio.h>
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*&a;
// 	printf("%p\n", &a);*/
//	int* p = &a;//p就是指针变量
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(char*));//用sizeof最好用%zu
//	printf("%zu\n", sizeof(short*));//用sizeof最好用%zu
//	printf("%zu\n", sizeof(int*));//用sizeof最好用%zu
//	printf("%zu\n", sizeof(float*));//用sizeof最好用%zu
//	printf("%zu\n", sizeof(double*));//用sizeof最好用%zu
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "wangjialiang",18,"man","13031528871" };//创建的变量s
//	//结构体对象.成员名
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//%s s=string字符串用的，%c是单个字符用的
//
//	print(&s);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    int a = 1234;
//    printf("%#o %#X", a, a);
//    return 0;
//}


