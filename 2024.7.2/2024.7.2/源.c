#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ(���ʵ��)��
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	//int total = money;
//	//int empty = money;
//
//	////�û�
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

////������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С��������
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
//	printf("%d\n", i * a);//����С���������ǹ�Լ��
//
//	return 0;
//}

//��һ�仰�ĵ��ʽ��е��ã���㲻���á�����Iike beiing.�����������Ϊ:beiing.like I

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
	//����
	gets(arr);
	//����
	int len = strlen(arr);
	//1.���������ַ���
	reverse(arr,arr+len-1);
	//2������ÿ������
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






