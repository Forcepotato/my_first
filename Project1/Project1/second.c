#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
	/*if (5 == 5)
		printf("hehe\n");*/

	//int age = 10;
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能饮酒\n");
	//}//想要打印两个必须加上{}
	//else
	//	printf("成年\n");

//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 100)
//		printf("老年\n");
//	else
//		printf("老毕登\n");
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//if(5==num)比if(num==5)更好
//		printf("hehe\n");
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//这里%d后面不加\n
//	if (num % 2 == 1)//这里num%2是表达式不能赋值
//		printf("奇数\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		/*if (i % 2 == 1)*/
//			printf("%d ", i);
//		/*i++;*/
//			i += 2;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int  day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	/*case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;*/
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default://缺席，不参与
//		printf("选择错误\n");
//		break;//防止输入8时没有输出
//	}
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//打印1-10

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		/*i++;*/
//		if (5 == i)
//			/*break;*/
//			continue;//continue 跳过后面的代码，重新进入循环
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int arr[] = { 105,  108, 111, 118, 101,  121, 111, 117 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//EOF;//end of file//函数getchar（）返回值就是EOF（EOF的本质是井号define定义的-1）所以用int来接收getchar（）函数返回的值。
//	//int ch = getchar();//getchar（）是获取一个字符的Assci码值
//	//printf("%c\n", ch);//%c表示以字符形式输出
//	//putchar(ch);//putchar（）表示打印一个这个值表示的字符
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);//按CTRL+Z就能停下来（C也行）
//	//}
//
//	char password[20] = { 0 };//数组名本来就是地址，不需要取地址
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	//getchar();//读取了\n防止\n去下面一个getchar()     (\n是缓冲区的） 不好用
//	int ch = 0;
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}
//	
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('y' == ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	//只打印数字字符
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%4d%2d%2d", &y, &m, &d);
//	printf("year=%d\n", y);
//	printf("month=%02d\n", m);
//	printf("date=%02d\n", d);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	float c = 0.0f;
//	float match = 0.0f;
//	float enlish = 0.0f;//0.0f是为了确定float类型，要不然默认duoble类型
//	scanf("%d;%f,%f,%f", &a, &c, &match, &enlish);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, c, match, enlish);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n%d", a);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    while (i < 4)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    int max = arr[0];
//    i = 1;
//    while (i < 4)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        i++;
//    }
//    printf("%d", max);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	double r = 0.0f;
//	double π = 3.1415926;
//	double v = 0.0f;
//	scanf("%lf\n", &r);
//	v = 4.0 / 3.0 * π * r * r * r;
//	printf("%.3lf\n", v);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int t = 0;
//	int s = 0;
//	scanf("%d %d", &t, &s);
//	float r = t / (s / 100.0) / (s / 100.0);
//	printf("%.2f\n", r);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	printf("    %c\n", a);
//	printf("   %c %c\n", a, a);
//	printf("  %c %c %c\n", a, a, a);
//	printf(" %c %c %c %c\n", a, a, a, a);
//	printf("%c %c %c %c %c\n", a, a, a, a, a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	for (int a = 0; a < 10; a++)
//	{
//		printf("%d\n", a);
//		printf("hehe\n");
//	}
//	return 0;
//}

//计算n的阶乘
//1*2*3*4*5*6*7*......*n

//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//计算1!+2!+3!+4!+5!+.....+10!

//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
// 	/*for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//	     {
//		     ret = ret * i;
//	     }
//		sum = sum + ret;
//	}*/
//
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("%d\n",sum);
//
//	return 0;
//}

//在一个有序数组中査找具体的某个数字西(讲解二分查找)

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//在一个有序数组中査找具体的某个数字西
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//=left+(left-right)/2
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//     }
//	 
//	if (left > right)
//	{
//		printf("找不到\n");
//	 }
//	//二分查找，折半查找
//
//	/*for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}*/
//	//普通写法
//
//	return 0;
//}

//#include<windows.h>//Sleep
//#include<stdlib.h>//system
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//=sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//system是一个库函数，可执行系统命令/清空屏幕cls
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。(只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。)

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//void meun()
//{
//	printf("**********************************\n");
//	printf("*********    1.play    ***********\n");
//	printf("*********    2.exit    ***********\n");
//	printf("**********************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	do 
//	{
//		meun();
//		printf("请选择;>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("猜数字\n");
//			break;
//		case  2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请从新选择\n");
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑将在60m内关机，请输入我是猪，停止关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//#include <stdio.h>
// //get_max函数的设计
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1,&num2);
//	//函数的调用
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//Swap(int* px, int* py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);//实参要修改就得取地址 不修改的话不需要取地址
//	printf("%d\n", c);
//
//	//交换 
//	printf("交换前:a=%d b=%d\n", a, b);
//
//	//a和b叫实参-实际参数
//	Swap(&a, &b);//传址变量。eg:Swap(a,b)是传值变量。
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//写一个函数可以判断一个数是不是素数。
//素数：只能被1或者其本身整除的数。
//版本1
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
////优化的版本1
//#include<math.h>
////sqrt是开平号，pow是平方。要用#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

////用函数来做
//
//#include<math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	int flag = 1;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

////写一个函数判断一年是不是闰年
////闰年的判断规则
////1.能被4整除，并且不能被100整除是闰年
////2，能被400整除是闰年
//方案1
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}
//方案2
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 400 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}



//int is_lean_year(int y)
//{
//	if (((y % 4 == 0) && (y % 400 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_lean_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right-left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//找到了，返回下标
//	//找不到，返回-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n",ret);
//	}
//
//	return 0;
//}

////数组传参实际上传递的是数组首元素的地址
////而不是整个数组
////所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
//int binary_search(int arr[],int k)//形参arr看上去是数组，本质是指针变量
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//    
//	while (left <= right)
//	{
//		int mid = left + (right-left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 8;
//	
//
//	//找到了，返回下标
//	//找不到，返回-1
//
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n",ret);
//	}
//
//	return 0;
//}

//#include<stdbool.h>
//
//bool is_prime(int n)
//{
//	int j = 0;
//	int flag = 1;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(bool));
//	return 0;
//}

////写一个函数，每调用一次这个函数，就会将 num 的值增加1。
//
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	/*while (num <999999999999999)
//	{
//		Add(&num);
//		printf("%d\n", num);
//	}*/
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	/*int len = strlen("abcdef");
//	printf("%d\n",len);
//
//	//链式反应
//	printf("%d\n", strlen("abcdef"));*///strlen的返回值做了printf的参数
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//       1             2               43
//	//先从右打印，依次往左。
//	//printf的返回值是打印的字符个数
//
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//	test();
//	return 0;
//}

////main函数有3个参数
//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}
//
////明确的说明，main函数不需要参数
////本质上main函数是有参数的
//int main(void)
//{
//	return 0;
//}

////函数的声明
//int Add(int x, int y);//x,y可以不写
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

////接受一个整型值（无符号），按照顺序打印它的每一位。
////例如：
////输入：1234，输出 1 2 3 4
//
//void print(unsigned int n)
//{
//	if (n > 9)//保证大于两位数
//	{
//		print(n / 10);//1234变123然后在循环123变12，12变1
//	}
//	printf("%d ", n % 10);//if递完掉头开始归，从1然后12然后123然后1234
//}//循环是一遍又一遍完整执行，递归是一层层深入直到不满足条件再从里到外执行完程序
//
//int main()
//{
//	unsigned int num = 0;//无符号整形
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}

////编写函数不允许创建临时变量，求字符串的长度。
//
//#include<string.h>
//
//////int my_strlen(char str[])//参数部分写出数组的形式
////int my_strlen(char* str)//参数部分写出指针的形式
////{
////	int count = 0;//计数，临时变量
////	if (*str != '\0')
////	{
////		count++;
////		str++;//找下一个字符
////	}
////	return count;
////}
//
////递归求解
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//[a,b,c\0]
//	//char*
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

////求n的阶乘
////递归的实现
////int fac(int n)
////{
////	if (n <= 1)
////		return 1;
////	else
////	return 	n* fac(n - 1);
////}
////迭代的实现-非递归
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d ",ret);
//	return 0;
//}

////求第n个斐波那契数
////斐波那契数列
////1 1 2 3 5 8 13 21 34 55....
//
////int fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return fib(n - 1) + fib(n - 2);
////}
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	
//	return 0;
//}

////写代码将三个整数数按从大到小输出
//
//swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

////写一个代码打印1-100之间所有3的倍数的数字
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
////暴力求解，不够高效
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	int min = (a < b) ? a : b;
////	int m = min;
////	while (100)
////	{
////		if (a % m == 0 && b % m == 0)
////		{
////			break;
////		}
////		m--;
////	}
////	printf("%d\n", m);
////
////	return 0;
////}
//
////辗转相除法(数学方法，这里锻炼逻辑）
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d ", b);
//
//	return 0;
//}

////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5… + 1 / 99 - 1 / 100 的值，打印出结果
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


////求10 个整数中最大值
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//	    }
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

////在屏幕上输出9*9乘法口诀表
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%2d      ", i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%2d  ", i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////冒泡排序
//
//void bubble_sort(int arr[],int sz)//形参是数组的形式
//{
//	
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	//把数组的数据排成升序
//	int arr [] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//0，1，2，3，4，5，6，7，8，9
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//首元素的地址
//	printf("%p\n", arr+1);
//	printf("--------------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);
//	printf("--------------------\n");
//	printf("%p\n", &arr);//数组得地址
//	printf("%p\n", &arr+1);
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

////数组a中存放着10名同学《C语言程序设计》的成绩，请编写程序对它们按由大到小的顺序排列并输出排序后的结果。int a[10]={70,68,61,77,79,80,82,65,73,93};
//
//void hanshu(int a[], int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (a[j] > a[j+1])
//			{
//				int tmp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a[10] = { 70,68,61,77,79,80,82,65,73,93 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	hanshu(a, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int x = 0;
//	while (!x)
//	{
//		printf("x is false\n");
//		x = 1; // 改变x的值以终止循环
//	}
//	printf("x is true, loop ends\n");
//	return 0;
//}

//字符串逆序(递归实现)

//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(strlen(str+1)>=2)
//	reverse(str + 1);
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int left = 0;
//	////int right = sz-2;
//	//int right = strlen(arr) - 1;
//
//	//while (left < right)
//	//{
//	//	char tmp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = tmp;
//
//	//	left++;
//	//	right--;
//	//}
//	
//	printf("%s\n", arr);
//
//	return 0;
//}

////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}

////编写一个函数实现n的k次方，使用递归实现
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);//数学公式
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//
//	printf("%lf\n", ret);
//
//	return 0;
//}

////将数组A中的内容和数组B中的内容进行交换。(数组一样大)
//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		
//	}
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	//这是一个错误的示范
//	/*int tmp[] = { 0 };
//	tmp = arr1;
//	arr1 = arr2;
//	arr2 = tmp;*/
//
//	return 0;
//}

////创建一个整形数组，完成对数组的操作
////实现函数init()初始化数组为全0
////实现print()打印数组的每个元素
////实现reverse()函数完成数组元素的逆置
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	for (i = 0; i < sz; i++)
//	{
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr,sz);
//
//	return 0;
//}

//int main()
//{
//	int a = 7;
//	//左移操作符
//	//移动的是二进制位
//	int b = a << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	//左移操作符
//	//移动的是二进制位
//	int b = a << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 7;
//	int b = a >> 1;
//
//	printf("a=%d\n", a);
//	printf("a=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//
//	printf("a=%d\n", a);
//	printf("a=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//00000000000000000000000000000011 - 3的补码
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 - -5的补码
//	//00000000000000000000000000000011 - 3的补码
//	//00000000000000000000000000000011 - c的补码
//
//	//%d 意味着打印一个有符号的整数
//	printf("c=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	//00000000000000000000000000000011 - 3的补码
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 - -5的补码
//	//00000000000000000000000000000011 - 3的补码
//	//11111111111111111111111111111011 - c的补码
//	//11111111111111111111111111111010 - c的反码
//	//10000000000000000000000000000101 - c的源码
//
//	//%d 意味着打印一个有符号的整数
//	printf("c=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//00000000000000000000000000000011 - 3的补码
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 - -5的补码
//	//00000000000000000000000000000011 - 3的补码
//	//11111111111111111111111111111000 - c的补码
//	//11111111111111111111111111110111 - c的反码
//	//10000000000000000000000000001000 - c的源码
//
//	//%d 意味着打印一个有符号的整数
//	printf("c=%d\n", c);
//
//	return 0;
//}

//不能创建临时变量(第三个变量)，实现两个数的交换。

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前: a=%d b=%d\n", a, b);
//	a = a ^ b;//a=3^5
//	b = a ^ b;//3^5^5 --> b=3
//	a = a ^ b;//3^5^3 --> a=5
//	printf("交换后: a=%d b=%d\n", a, b);
//
//
//	return 0;
//}

////编写代码实现:求一个整数存储在内存中的二进制中1的个数
////求补码的二进制中1的个数
//
//int main()
//{
//	int a = 0;
//	scanf("%d", a);
//	int count = 0;
//	int b = a & 1;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		a << 1;
//		if (b == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}//错的啊等讲

//int main()
//{
//	//int a = 0;
//	////00000000000000000000000000000000 ->补码
//	////11111111111111111111111111111111 ->~a的补码
//	//printf("%d\n", ~a);
//
//	int a = 13;
//	a |= (1 << 4);
//	printf("%d\n", a);//29
//	a &= (~(1 << 4));//a=13
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n",a);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 7;
//	int c = a && b;//并且
//	int d = a || b;//或者
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//左边为假，右边就不计算了
//	//i = a++||++b||d++;//左边为真，右边就不计算了
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu *ps)
//{
//	//strcpy((*ps).name, "wangjialiang");
//	//(*ps).age = 18;
//	//(*ps).score = 100.0;
//
//	strcpy(ps->name, "wangjialiang");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}

//int main()
//{
//	char c = -1;//-1是整数，32个比特位
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 -> -1的补码
//	//11111111 - c只能放下这8个比特位
//	//11111111111111111111111111111111 -> 高位补充符号位，即为1
//	
//	char d = 1;
//	//00000000000000000000000000000001 -> 1的补码
//	//00000001 - d只能放下这8个比特位
//	//00000000000000000000000000000001 -> 高位补充符号位，即为0
//
//	//无符号整形提升，高位补0
//
//	return 0;
//}

//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101 - a
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110 - b
//	char c = a + b;
//	//000000000000000000000000000000101 - a
//	//000000000000000000000000001111110 - b
//	//发生整型提升
//	//000000000000000000000000001000011
//	//10000011 - c
//	//111111111111111111111111110000011
//	//111111111111111111111111110000011
//	//111111111111111111111111110000010
//	//100000000000000000000000001111101
//
//	printf("%d\n", c);//-125
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//
//	if (b == 0xb600)
//		printf("b");
//
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//
//	return 0;
//}

//#include<ctype.h>
//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch))//判断是不是小写
//			printf("%c\n", toupper(ch));//小写转大写
//		else if (isupper(ch))//判断是不是大写
//			printf("%c\n", tolower(ch));//大写转小写
//	}
//	return 0;
//}

//int main()
//{
//	char* pc = NULL;//NULL相当于0
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	//sizeof 返回的值的类型是无符号整形 unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//
//	char* pc = (char*)&a;
//	*pc = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//
//	printf("pa = %p\n", pa);//%p输出地址
//	printf("pa+1 = %p\n", pa + 1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc + 1);
//
//
//	return 0;
//}

//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值:0xcccccccc
//
//	*p = 10;//非法访问内存了,这里的p就是野指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p3 = NULL;//指针给他初始化赋成空指针，尽可能防止野指针
//
//	if (p3 != NULL)//想要赋值这样整
//	{
//		*p3 = 100;
//	}
//
//	return 0;
//}

//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
////指针+-整数；指针的关系运算
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//	*vp++ = 0;//拆成两个*vp=0;vp++;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	////数组下标的写法
//	
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	/*int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//arr是首元素的地址
//	//&arr[0]
//	int* p = arr;
//	//通过指针来访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p---------%p\n", &arr[i], p + i);
//	}
//
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量，一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量
//
//	**ppa = 20;
//	printf("%d\n", a);
//
//
//	/**pa = 20;
//	printf("%d\n", a);*/
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	//parr就是存放指针的数组
//	//指针数组
//	int* parr[10] = { &a,&b,&c };
//	
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////声明的结构体类型struct peo
//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
////
////struct peo
////{
////	char name[20];
////	char tele[12];
////	char sex[5];
////	int high;
////}p1,p2;//p1和p2是2个全局的结构体变量
////p1,p2是使用struct peo结构类型创建的2个变量
//
//int main()
//{
//	struct peo p1;//结构体变量的创建
//
//	return 0;
//}

//struct peo//先有这个
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//
//struct St//才能用这个	
//{
//	struct peo p;
//	int mun;
//	float f;
//};
//
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
//}
//
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
//}
//
//int main()
//{
//	struct peo p1 = { "张三","13031528871","男",175 };//结构体变量的创建
//	struct St s = { {"lisi","13333256809","女",166},100,3.14f };//浮点数在内存中不能精确保存
//	//如果不写f，编译器会把你的数当成double类型的数据存进float里，精度方面有问题
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.mun, s.f);
//
//	print1(p1);
//	print2(&p1);
//
//	return 0;
//}

////写一个函数返回参数二进制中 1 的个数。
//
////int count_num_of_1(int n)//负数不行
////int count_num_of_1(unsigned int n)//这样负数就可以了
////{
////	int count = 0;
////	while (n)
////	{
////		
////		if (n % 2 == 1)
////		{
////			count++;
////		}
////		n /= 2;
////	}
////	return count;
////}
//
////int count_num_of_1(int n)
////{
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((n >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
////n=15
////n=n&(n-1)
////1111 n
////1110 n-1
////1110 n
////1101 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000 n
//
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
////如果要判断一个数是不是2的n次方
////2^1
////10
////2^2
////100
////2^3
////1000
//
////if ((n & (n - 1)) == 0)
////{
////
////}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}

////两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同?
//
////int count_diff_bit(int m, int n)
////{
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((m >> i) & 1) != ((n >> i) & 1))
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//^异或操作符
//	//相同为0，相异为1
//	int ret = m ^ n;
//	//统计一下ret中二进制位有几个1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//
//	return 0;
//}

////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//
////10
////00000000000000000000000000001010
////31 30 29 28 ... 3 2 1 0对齐即可
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//获取奇数位的数字
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}

//int i;//0
//int main()
//{
//	i--;//-1
//	//sizeeof这个操作符计算返回的结果是size_tl类型的，是无符号整形的
//	//有符号数会向无符号数转换，-1一会转换成一个很大的正数
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}
////-1
////10000000000000000000000000000001
////11111111111111111111111111111110
////11111111111111111111111111111111 - 当-1转化为无符号数时-1的补码直接变成转化数的源码

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//void test(int a[])
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test() 
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d ", c);
//	return 0;
//}

////实现代码：求 1！+2！+3！ ...+ n! ；不考虑溢出。
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int ret = 1;//保存n的阶乘
//	int j = 0;
//	
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

////strcpy
//
////#include<string.h>
////
////int main()
////{
////	char arr1[20] = { 0 };
////	char arr2[] = "hello,bit";
////	strcpy(arr1, arr2);
////	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
////	printf("%s\n", arr1);
////
////	return 0;
////}
//
////#include<string.h>
////
////void my_strcpy(char* dest, char* src)
////{
////	while (*src != '\0')
////	{
////		*dest = *src;
////		dest++;
////		src++;
////	}
////	*dest = *src;
////}
//
//#include<assert.h>
//
////void my_strcpy(char* dest, const char* src)//const防止dest和src反了
////{
////	//断言
////	assert(src != NULL);
////	assert(dest != NULL);
////
////	while (*dest++ = *src++)
////	{
////		;
////	}
////	
////}
//
////为什么返回char*呢？
////是为了实现链式访问
////strcpy函数返回的是目标空间的起始地址
//char* my_strcpy(char* dest, const char* src)//const防止dest和src反了
//{
//	char* ret = dest;
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//return dest;//err
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] ="XXXXXXXXXXXXXX";
//	char arr2[] = "hello,bit";
//	char* p = NULL;
//	//my_strcpy(arr1, arr2);
//	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}

//int main()
//{
//	/*int num = 10;
//	num = 20;
//	printf("%d\n", num);*/
//
//	const int num = 10;
//	//const 修饰指针变量
//	//1.const 放在*左边
//	//const int* p;
//	//int const*p;
//	//意识是：p指向的对象不能通过p来改变了，但是p变量本身的值是可以改变的
//	//*p=20;//err
//
//	//2.const 放在*右边
//	//意思是: p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值
//	int* const p = &num;
//	//意思
//	*p = 0;//ok
//	int n = 100;
//	p = &n;//err
//
//
//	//const int* p = &num;
//	//int n = 100;
//
//	//*p = 20;//err
//	//p = &n;//ok
//
//	printf("%d\n", num);
//
//	return 0;
//}

////求字符串长度的
//
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//断言
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

























