#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////��һ��void ��ʾ�������᷵��ֵ
////�ڶ���void ��ʾ��������Ҫ���κβ���
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

//���������ֽ����С���ֽ���ĸ������һ��С�������жϵ�ǰ�������ֽ���

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("��С��\n");
//	}
//	else
//	{
//		printf("�Ǵ��\n");
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
		printf("С��\n");
	else
		printf("���\n");

	return 0;
}