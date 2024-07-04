#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////第一个void 表示函数不会返回值
////第二个void 表示函数不需要传任何参数
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(1);
//
//	return 0;
//}

//请简述大端字节序和小端字节序的概念设计一个小程序来判断当前机器的字节序。

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("是小端\n");
//	}
//	else
//	{
//		printf("是大端\n");
//	}
//
//	return 0;
//}

int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");

	return 0;
}