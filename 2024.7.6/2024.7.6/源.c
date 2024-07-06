#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100 - -20
//	unsigned int j = 10;
//	//00000000000000000000000000001010 - 10
//	printf("%d\n", i + j);
//	//11111111111111111111111111101100 - -20
//	//00000000000000000000000000001010 - 10
//	//11111111111111111111111111110110
//	//10000000000000000000000000001001
//	//10000000000000000000000000001010 - -10
//
//	return 0;
//}

//#include<windows.h>
//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//到0时-成-1，由于上面i是无符号数变成11111111111111111111111111111111
//	{
//		printf("%u\n", i);
//		Sleep(1000);//休眠1000毫秒
//	}
//
//	return 0;
//}

//#include<string.h>

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//arr[i]-->char  -128~127
//	//-1 -2 ... -128 127 126 ...3 2 1 0 -1...
//	printf("%d\n", strlen(a));
//	//strlen是求字符串长度，关注的是字符串中'\0'(数字0)之前出现多少字符
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hehe\n");
//	}
//	//死循环 因为256是10000 0000正好超出一个字节 而i是char类型 放不下这么大的数 截断为0 等于重新开始了 永不会结束
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	//int len = strlen("acdef");
//	//printf("%d\n",len);
//	//size_t -> unsigned int
//
//	if (strlen("abc") - strlen("abcdef") >= 0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//    printf("num的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//	
//    return 0;
//}

int main()
{
	float f = 5.5;
	//5.5
	//101.1
	//1.011*2^2
	//s=0 m=1.011 e=2
	//0 10000001 01100000000000000000000
	//2+127=129
	//0100 0000 1011 0000 0000 0000 0000 0000
	//0x40 b0 00 00

	return 0;
}
