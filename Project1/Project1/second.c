#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
	/*if (5 == 5)
		printf("hehe\n");*/

	//int age = 10;
	//if (age < 18)
	//{
	//	printf("δ����\n");
	//	printf("��������\n");
	//}//��Ҫ��ӡ�����������{}
	//else
	//	printf("����\n");

//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϱϵ�\n");
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//if(5==num)��if(num==5)����
//		printf("hehe\n");
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//����%d���治��\n
//	if (num % 2 == 1)//����num%2�Ǳ��ʽ���ܸ�ֵ
//		printf("����\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//���1-100֮�������
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//	default://ȱϯ��������
//		printf("ѡ�����\n");
//		break;//��ֹ����8ʱû�����
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

//��ӡ1-10

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		/*i++;*/
//		if (5 == i)
//			/*break;*/
//			continue;//continue ��������Ĵ��룬���½���ѭ��
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
//	//EOF;//end of file//����getchar��������ֵ����EOF��EOF�ı����Ǿ���define�����-1��������int������getchar�����������ص�ֵ��
//	//int ch = getchar();//getchar�����ǻ�ȡһ���ַ���Assci��ֵ
//	//printf("%c\n", ch);//%c��ʾ���ַ���ʽ���
//	//putchar(ch);//putchar������ʾ��ӡһ�����ֵ��ʾ���ַ�
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);//��CTRL+Z����ͣ������CҲ�У�
//	//}
//
//	char password[20] = { 0 };//�������������ǵ�ַ������Ҫȡ��ַ
//	printf("����������:>");
//	scanf("%s", password);
//
//	//getchar();//��ȡ��\n��ֹ\nȥ����һ��getchar()     (\n�ǻ������ģ� ������
//	int ch = 0;
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}
//	
//	printf("��ȷ������(Y/N):>");
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
//	//ֻ��ӡ�����ַ�
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
//	float enlish = 0.0f;//0.0f��Ϊ��ȷ��float���ͣ�Ҫ��ȻĬ��duoble����
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
//	double �� = 3.1415926;
//	double v = 0.0f;
//	scanf("%lf\n", &r);
//	v = 4.0 / 3.0 * �� * r * r * r;
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

//����n�Ľ׳�
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

//����1!+2!+3!+4!+5!+.....+10!

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

//��һ�����������Ж��Ҿ����ĳ��������(������ֲ���)

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//��һ�����������Ж��Ҿ����ĳ��������
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//     }
//	 
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	 }
//	//���ֲ��ң��۰����
//
//	/*for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}*/
//	//��ͨд��
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
//		system("cls");//system��һ���⺯������ִ��ϵͳ����/�����Ļcls
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�(ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����)

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
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
//		printf("��ѡ��;>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//			break;
//		case  2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ����������ѡ��\n");
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
//	printf("��ע����ĵ��Խ���60m�ڹػ���������������ֹͣ�ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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
// //get_max���������
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
//	//�����ĵ���
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
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
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
//	int c = Add(a, b);//ʵ��Ҫ�޸ľ͵�ȡ��ַ ���޸ĵĻ�����Ҫȡ��ַ
//	printf("%d\n", c);
//
//	//���� 
//	printf("����ǰ:a=%d b=%d\n", a, b);
//
//	//a��b��ʵ��-ʵ�ʲ���
//	Swap(&a, &b);//��ַ������eg:Swap(a,b)�Ǵ�ֵ������
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//дһ�����������ж�һ�����ǲ���������
//������ֻ�ܱ�1�����䱾������������
//�汾1
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
////�Ż��İ汾1
//#include<math.h>
////sqrt�ǿ�ƽ�ţ�pow��ƽ����Ҫ��#include<math.h>
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

////�ú�������
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

////дһ�������ж�һ���ǲ�������
////������жϹ���
////1.�ܱ�4���������Ҳ��ܱ�100����������
////2���ܱ�400����������
//����1
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
//����2
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n",ret);
//	}
//
//	return 0;
//}

////���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
////��������������
////�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
//int binary_search(int arr[],int k)//�β�arr����ȥ�����飬������ָ�����
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 8;
//	
//
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n",ret);
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

////дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
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
//	//��ʽ��Ӧ
//	printf("%d\n", strlen("abcdef"));*///strlen�ķ���ֵ����printf�Ĳ���
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//       1             2               43
//	//�ȴ��Ҵ�ӡ����������
//	//printf�ķ���ֵ�Ǵ�ӡ���ַ�����
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

////main������3������
//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}
//
////��ȷ��˵����main��������Ҫ����
////������main�������в�����
//int main(void)
//{
//	return 0;
//}

////����������
//int Add(int x, int y);//x,y���Բ�д
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
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}

////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
////���磺
////���룺1234����� 1 2 3 4
//
//void print(unsigned int n)
//{
//	if (n > 9)//��֤������λ��
//	{
//		print(n / 10);//1234��123Ȼ����ѭ��123��12��12��1
//	}
//	printf("%d ", n % 10);//if�����ͷ��ʼ�飬��1Ȼ��12Ȼ��123Ȼ��1234
//}//ѭ����һ����һ������ִ�У��ݹ���һ�������ֱ�������������ٴ��ﵽ��ִ�������
//
//int main()
//{
//	unsigned int num = 0;//�޷�������
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}

////��д��������������ʱ���������ַ����ĳ��ȡ�
//
//#include<string.h>
//
//////int my_strlen(char str[])//��������д���������ʽ
////int my_strlen(char* str)//��������д��ָ�����ʽ
////{
////	int count = 0;//��������ʱ����
////	if (*str != '\0')
////	{
////		count++;
////		str++;//����һ���ַ�
////	}
////	return count;
////}
//
////�ݹ����
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

////��n�Ľ׳�
////�ݹ��ʵ��
////int fac(int n)
////{
////	if (n <= 1)
////		return 1;
////	else
////	return 	n* fac(n - 1);
////}
////������ʵ��-�ǵݹ�
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

////���n��쳲�������
////쳲���������
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

////д���뽫�������������Ӵ�С���
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

////дһ�������ӡ1-100֮������3�ı���������
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

////���������������������������Լ��
////������⣬������Ч
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
////շת�����(��ѧ��������������߼���
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

////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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

////����1/1-1/2+1/3-1/4+1/5�� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
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


////��10 �����������ֵ
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

////����Ļ�����9*9�˷��ھ���
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

////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
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

////ð������
//
//void bubble_sort(int arr[],int sz)//�β����������ʽ
//{
//	
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
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
//	//������������ų�����
//	int arr [] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//0��1��2��3��4��5��6��7��8��9
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
//	printf("%p\n",arr);//��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//	printf("--------------------\n");
//	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("--------------------\n");
//	printf("%p\n", &arr);//����õ�ַ
//	printf("%p\n", &arr+1);
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

////����a�д����10��ͬѧ��C���Գ�����ơ��ĳɼ������д��������ǰ��ɴ�С��˳�����в���������Ľ����int a[10]={70,68,61,77,79,80,82,65,73,93};
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
//		x = 1; // �ı�x��ֵ����ֹѭ��
//	}
//	printf("x is true, loop ends\n");
//	return 0;
//}

//�ַ�������(�ݹ�ʵ��)

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

////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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

////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);//��ѧ��ʽ
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

////������A�е����ݺ�����B�е����ݽ��н�����(����һ����)
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
//	//����һ�������ʾ��
//	/*int tmp[] = { 0 };
//	tmp = arr1;
//	arr1 = arr2;
//	arr2 = tmp;*/
//
//	return 0;
//}

////����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init()��ʼ������Ϊȫ0
////ʵ��print()��ӡ�����ÿ��Ԫ��
////ʵ��reverse()�����������Ԫ�ص�����
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
//	//���Ʋ�����
//	//�ƶ����Ƕ�����λ
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
//	//���Ʋ�����
//	//�ƶ����Ƕ�����λ
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
//	//00000000000000000000000000000011 - 3�Ĳ���
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 - -5�Ĳ���
//	//00000000000000000000000000000011 - 3�Ĳ���
//	//00000000000000000000000000000011 - c�Ĳ���
//
//	//%d ��ζ�Ŵ�ӡһ���з��ŵ�����
//	printf("c=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	//00000000000000000000000000000011 - 3�Ĳ���
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 - -5�Ĳ���
//	//00000000000000000000000000000011 - 3�Ĳ���
//	//11111111111111111111111111111011 - c�Ĳ���
//	//11111111111111111111111111111010 - c�ķ���
//	//10000000000000000000000000000101 - c��Դ��
//
//	//%d ��ζ�Ŵ�ӡһ���з��ŵ�����
//	printf("c=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//00000000000000000000000000000011 - 3�Ĳ���
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 - -5�Ĳ���
//	//00000000000000000000000000000011 - 3�Ĳ���
//	//11111111111111111111111111111000 - c�Ĳ���
//	//11111111111111111111111111110111 - c�ķ���
//	//10000000000000000000000000001000 - c��Դ��
//
//	//%d ��ζ�Ŵ�ӡһ���з��ŵ�����
//	printf("c=%d\n", c);
//
//	return 0;
//}

//���ܴ�����ʱ����(����������)��ʵ���������Ľ�����

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	a = a ^ b;//a=3^5
//	b = a ^ b;//3^5^5 --> b=3
//	a = a ^ b;//3^5^3 --> a=5
//	printf("������: a=%d b=%d\n", a, b);
//
//
//	return 0;
//}

////��д����ʵ��:��һ�������洢���ڴ��еĶ�������1�ĸ���
////����Ķ�������1�ĸ���
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
//}//��İ��Ƚ�

//int main()
//{
//	//int a = 0;
//	////00000000000000000000000000000000 ->����
//	////11111111111111111111111111111111 ->~a�Ĳ���
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
//	int c = a && b;//����
//	int d = a || b;//����
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//���Ϊ�٣��ұ߾Ͳ�������
//	//i = a++||++b||d++;//���Ϊ�棬�ұ߾Ͳ�������
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
//	char c = -1;//-1��������32������λ
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 -> -1�Ĳ���
//	//11111111 - cֻ�ܷ�����8������λ
//	//11111111111111111111111111111111 -> ��λ�������λ����Ϊ1
//	
//	char d = 1;
//	//00000000000000000000000000000001 -> 1�Ĳ���
//	//00000001 - dֻ�ܷ�����8������λ
//	//00000000000000000000000000000001 -> ��λ�������λ����Ϊ0
//
//	//�޷���������������λ��0
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
//	//������������
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
//		if (islower(ch))//�ж��ǲ���Сд
//			printf("%c\n", toupper(ch));//Сдת��д
//		else if (isupper(ch))//�ж��ǲ��Ǵ�д
//			printf("%c\n", tolower(ch));//��дתСд
//	}
//	return 0;
//}

//int main()
//{
//	char* pc = NULL;//NULL�൱��0
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	//sizeof ���ص�ֵ���������޷������� unsigned int
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
//	printf("pa = %p\n", pa);//%p�����ַ
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
//	//pû�г�ʼ��������ζ��û����ȷ��ָ��
//	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ:0xcccccccc
//
//	*p = 10;//�Ƿ������ڴ���,�����p����Ұָ��
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
//	int* p3 = NULL;//ָ�������ʼ�����ɿ�ָ�룬�����ܷ�ֹҰָ��
//
//	if (p3 != NULL)//��Ҫ��ֵ������
//	{
//		*p3 = 100;
//	}
//
//	return 0;
//}

//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
////ָ��+-������ָ��Ĺ�ϵ����
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//	*vp++ = 0;//�������*vp=0;vp++;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	////�����±��д��
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
//	//arr����Ԫ�صĵ�ַ
//	//&arr[0]
//	int* p = arr;
//	//ͨ��ָ������������
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
//	int* pa = &a;//pa��һ��ָ�������һ��ָ�����
//	int** ppa = &pa;//ppa��һ������ָ�����
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
//	//parr���Ǵ��ָ�������
//	//ָ������
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

////�����Ľṹ������struct peo
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
////}p1,p2;//p1��p2��2��ȫ�ֵĽṹ�����
////p1,p2��ʹ��struct peo�ṹ���ʹ�����2������
//
//int main()
//{
//	struct peo p1;//�ṹ������Ĵ���
//
//	return 0;
//}

//struct peo//�������
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//
//struct St//���������	
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
//	struct peo p1 = { "����","13031528871","��",175 };//�ṹ������Ĵ���
//	struct St s = { {"lisi","13333256809","Ů",166},100,3.14f };//���������ڴ��в��ܾ�ȷ����
//	//�����дf��������������������double���͵����ݴ��float����ȷ���������
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.mun, s.f);
//
//	print1(p1);
//	print2(&p1);
//
//	return 0;
//}

////дһ���������ز����������� 1 �ĸ�����
//
////int count_num_of_1(int n)//��������
////int count_num_of_1(unsigned int n)//���������Ϳ�����
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
////���Ҫ�ж�һ�����ǲ���2��n�η�
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

////����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ?
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
//	//^��������
//	//��ͬΪ0������Ϊ1
//	int ret = m ^ n;
//	//ͳ��һ��ret�ж�����λ�м���1
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

////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//
////10
////00000000000000000000000000001010
////31 30 29 28 ... 3 2 1 0���뼴��
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//��ȡ����λ������
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ������
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
//	//sizeeof������������㷵�صĽ����size_tl���͵ģ����޷������ε�
//	//�з����������޷�����ת����-1һ��ת����һ���ܴ������
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
////11111111111111111111111111111111 - ��-1ת��Ϊ�޷�����ʱ-1�Ĳ���ֱ�ӱ��ת������Դ��

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

////ʵ�ִ��룺�� 1��+2��+3�� ...+ n! �������������
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;//�������ս��
//	int ret = 1;//����n�Ľ׳�
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
////	//strcpy�ڿ����ַ�����ʱ�򣬻��Դ�ַ����е�\0Ҳ������ȥ
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
////void my_strcpy(char* dest, const char* src)//const��ֹdest��src����
////{
////	//����
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
////Ϊʲô����char*�أ�
////��Ϊ��ʵ����ʽ����
////strcpy�������ص���Ŀ��ռ����ʼ��ַ
//char* my_strcpy(char* dest, const char* src)//const��ֹdest��src����
//{
//	char* ret = dest;
//	//����
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
//	//strcpy�ڿ����ַ�����ʱ�򣬻��Դ�ַ����е�\0Ҳ������ȥ
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
//	//const ����ָ�����
//	//1.const ����*���
//	//const int* p;
//	//int const*p;
//	//��ʶ�ǣ�pָ��Ķ�����ͨ��p���ı��ˣ�����p���������ֵ�ǿ��Ըı��
//	//*p=20;//err
//
//	//2.const ����*�ұ�
//	//��˼��: pָ��Ķ����ǿ���ͨ��p���ı�ģ����ǲ����޸�p���������ֵ
//	int* const p = &num;
//	//��˼
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

////���ַ������ȵ�
//
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//����
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

























