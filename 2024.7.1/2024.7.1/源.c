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

////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
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

////��һ���ַ���str�����ݵߵ��������������
////���ݷ�Χ��1<=len(str)<=10000
//
//#include<stdio.h>
//
//int main()
//{
//	char arr[10001] = { 0 };
// //scanf("%s", arr);//���������ո��Ժ�����������
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
////	//scanf("%s", arr);//���������ո��Ժ�����������
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
//////ai�Ż����е㿴����stdin
////#include <stdio.h>
////#include <string.h>
////
////int main()
////{
////    char arr[10001] = { 0 };
////
////    // ʹ�� fgets ���� gets ���а�ȫ����
////    fgets(arr, 10001, stdin);
////
////    // ������ڻ��з��������Ƴ�
////    int sz = strlen(arr);
////    if (arr[sz - 1] == '\n') {
////        arr[sz - 1] = '\0';
////        sz--;
////    }
////
////    // �����ӡ�ַ�
////    for (int i = sz - 1; i >= 0; i--)
////    {
////        printf("%c", arr[i]);
////    }
////
////    return 0;
////}

////��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
////����:2 + 22 + 222 + 2222 + 22222
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

////���0~100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3����153��һ����ˮ�ɻ�������
//
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.����i�Ǽ�λ�� -> n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.�õ�iÿһλ����������n�η�֮��
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
	//�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		int j = 0;
		//��ӡ��߿ո�
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
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





