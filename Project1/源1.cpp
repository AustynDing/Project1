#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<Windows.h>
#include<stdlib.h>
#include <time.h>
 /*int main()
{
	int num1;
	int num2;
	int num3;
	int sum;
	scanf_s("%d%d%d", &num1, &num2,&num3);
	sum = num1+num2-num3;
	printf("sum =%d\n",sum);

	return  0;
}*/

//
//int main()
//{
//	int num = 8;
//		printf("%d", num);
//		double d =9.8;
//			printf(" %lf", d);
//
//
//
//	return  0;
//}
//int main()
//{
//	  int num = 8;
//		printf("%d", num);
//	int num = 9;
//	printf(" %d", num); 
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() 
//{
//	char arr1[] = "qwertyuiopasdfghjklzxcvbnm";
//	printf("%d ", strlen(arr1));
//	char arr2[] = { 'a','b',' c','\0'};
//	printf(" %d ", strlen(arr2));
//    return 0;

//}
//int main()
//{
	//printf("c;\\\\\\test\\32\\test c");
	//printf("abc");
	///*printf("%s\n", "\a ");

	//printf("%s\n", "\a ");*/
	//printf("%d\n", strlen("c:\test\32\test:c"));
	//printf("%d\n", 'a');
 	//printf("%c\n", '\132');
	//printf("%c\n", '\a'); 
	//return 0;
	//七月三十日，刚上到第10课
//}						
//int main()
//{
	/*printf("%s\n", "123");
	printf("123");
	int num1 = 123;
		/*printf("\n%d\n",num1);
		printf("%c\n", '\a');
		printf("%c\n", '"');
		printf("%s\n", "\"");*/
		/*printf("%d\n",'\32');
		printf("%d\n", '\x72');*/
		/*printf("d\n", strlen("\x72"));
		char arr1[] = "qwertyuiopasdfghjklzxcvbnm";
		printf("%d ", strlen(arr1));
		char arr2[] = { 'a','b',' c','\0'};
		printf(" %d ", strlen(arr2));*/
		//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入县一中\n");
//	printf("你要好好学习吗？(1/0):>");
//	scanf_s("%d\n", &input);
//	if (input == 1)
//	{
//
//		printf("good offer\n");
//	}
//	else
//
//	{
//		printf("回家种地\n");
//	}
//		return 0;
//}

//int main(void)
//{
//	int age, price = 80;
//	printf("请输入您的年龄：");
//	scanf_s("%d", &age);
//	if (age >= 60 || age <= 10)
//		price /= 2;
//	printf("您的年龄:%d,票价:%d\n", age, price);
//	return 0;
//}
//int main()
//{
//	int age;
//	double price = 99;
//	printf("请输入您的年龄");
//	scanf_s("%d", &age);
//	if (age >= 77 || age <= 22)
//		price /= 2;
//	printf("您的年龄:%d,票价:%lf\n", age, price);
//     return 0;
//} 
//循环语句
//
//int main()
//{
//	    int line=0 ;
//		printf("加入我们\n");
//		while (line <= 10)
//		{
//			printf("努力学习:%d\n",line);
//			line++;
//		}
//		
//		if(line>10)
//		printf("你成功了\n");
//		return 0;
//}
//自定义函数
//int Q(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

////int main()
////{
////	int sum1 = 0;
////	sum1 = Q(3,5);
////	printf("%d\n", sum1);
////	int sum2 = 0;
////	int a = 99;  int b = 96;
////	sum2 = Q(a, b);
////	printf("%d\n", sum2);
////
////
////
////	return 0;
////}
////int main()
////{
////	int arr1[10] = { 1,2,3,6,8,9,79,46,13,78 };
////	printf("%d\n", arr1[9]);
////    return 0;
////}
//int main()
//{
//	int arr1[5] = { 1,3,4,6,8 };
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	}
//	i++;
//	if (i >= 6)
//	{
//		printf("%d\n", arr1[2]);
//	}
//
//
//	return 0;
//}
//int  main()
//{
////	/*float a = 6/9;
//	printf("%lf\n", a);
//	float b = 9;
//	float c = 6;
//	float d = b / c;
//	printf("%f\n", d);*/
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n",!a);
//	
//	
//	return 0;
//
//}
//int main()
//{   int a = 3;
//	int b = 5;
//	printf("%d%d\n", a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d%d\n", a, b) ;
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0; 
//	int ret = 0;
//    for (i = 0; i < sz; i++);
//	{ret = ret ^ arr[i]; }
//	printf("%d\n", ret);
//		return 0;
//}
//int main()
//{	
//	/*
//	int a = 10;
//	int b = a++;
//	
//	printf("%d %d ", a, b );*/
//	
//	/*
//	int a = 758;
//	int b = ~a;
//	printf("%d\n%d\n", a, b);
//	printf("%d\n", b);*/
//
//	//char arr[] = {"abcdef"};
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", strlen(arr));
//
//	//for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
//	//	printf("%d,", arr[i]);
//	return 0;
//	
//}
//
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	unsigned int  num=-1;
//	printf("%u\n", num);
//	
////	/*
//	int a= 88;
//	int b = 99;
//	int bigger = (a > b ? a:b);
//	printf("%d\n", bigger);*/
	/*int bigger = 0;
	if (x > y)
	{
		bigger = x;
	}
	else bigger = y;
	printf("%d\n", bigger);*/

	//
//void test()
//{
//	static int a = 10;
//	a += 10;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	for (int i = 0; i < 5;)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
////}
//int main()
//{
//	extern int m;
//	printf("m=%d\n", m);
//
//	return 0;
////}
//int sum(int x,int y)
//{int z= x + y;
//	return z;
//
//}
//int main()
//{
//	int num1 = 12;
//	int num2 = 7894613;
//	int sUm=sum(num1, num2);
//	printf("sum=%d\n",sUm);
//
//	return 0;
//}
// int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;/*
//	int bigger = max(a, b);
//	printf("bigger=%d\n", bigger);
//	return 0;*/
////	printf(" % d\n % p\n", &a,p );
// struct book
// {
//	 char name[14];
//	 short price;
//};
// int main()
// {
//	 struct book b1 ={"C语言程序设计",100 };
//	 b1.price = 20;
//	 strcpy_s(b1.name, "C++");
//	 printf("%d\n%s\n", b1.price, b1.name);
//	/* printf("书名：%s\n", b1.name);
//	 printf("价格:%d\n", b1.price);
//	 struct book* p = &b1;
//	 printf("%p\n", p);
//	 printf("%s\n %d\n", (*p).name,(*p).price);
//	 printf("%s\n", p->name);
//	 printf("%d\n", p->price);*/
//
//	 return 0;
// }
//int main()
//{
//	char a [11] = ("你好，世界");
//	printf("%s\n", a);
//
//	return 0;
//}

/*
	if (18 < age && age < 25)
		printf("青年\n");
	else if (age >= 25 && age < 55)
		printf("中年\n");
	else if (age >= 55 && age < 99)
		printf("老年\n");
	else 
		printf("未成年\n");*//*
	int a = 0;
	int b = 2;
	if (a == 1)

	{
		if (b == 2)
			printf("haha\n");

		else
			printf("hehe\n");
	}*//*
	int num = 4;
	if(num==5)
		printf("hhd");*/
  
	//int main()
	//{
	//	int a;
	//	scanf_s("%d", &a);
	//	if (a == 1) {
	//		printf("if---%d\n", a);
	//	}
	//	else {
	//		printf("else---%d\n", a);
	//	}
	//	return 0;
////	//}
//int main()
//{
//	int a;
//	scanf_s("%d\n", &a);
//	if (a%2==1)
//		printf("a是奇数");
//	else
//		printf("a是偶数");
//	return 0;
//}
//int main()
//{
//	int a=98;
//	if (a % 2 == 1)
//		printf("a是奇数");
//	else
//		printf("a是偶数");
//	return 0;
//}
//int main()
////{/*
//	int a=1;
//	while (a <= 100)
//	{
//		printf("%d ",a);
//		a += 2;*/
		/*if (a % 2 == 1)
		{
			printf("  %d", a);
		}
		a++;*//*
	 const int n = 1;
	int money = 0;
	switch (money)
	{ case n:  

	}
	return 0;*/
//////}
//int main()
//{
//
//	int day = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("monday");
//	case 2:
//		printf("tuesday");
//		break;
//	case 3:
//		printf("wednesday");
//		break;
//	default:
//		printf("输入错误");
//	}
//	return 0;
//}

//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: n++;
//	case 2: m++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:n++, m++;
//			break;
//		}
//	case 4:m++;
//	}
//	printf("%d%d", m, n);
//	return 0;
////}
//int main()
//{
//	int m = 1;
//	int n = 2;
//	switch (n)
//	{
//	case1:n=n++;
//	case2:n=n++,m= m++;
//	case3:
//	  switch (m)
//	  {
//	case 1:n=n++;
//	case 2:n=n++,m= m++;
//		break;
//	  }
//	  break;
//	}
//	printf("%d %d", n, m);
//	return 0;
//}
//int main()
//{
/*
	int i = 0;
	while (i <10)
	{
		if (i == 3)
			continue;
		i++;
		printf("%d\n", i);
		*/
	//}

	//return 0;
//}

   /*
   { int ch = getchar();
	putchar(ch);*/
	//int a = 0;
	//while ((a = getchar()) != EOF)
	//	putchar(a) ;
////	//	return 0;
//int main()
//{
//int a = 0;
//int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	printf("请输入Y/N\n");
//	a = getchar();
//	if (a == 'Y')
//	{
//		printf("输入正确\n");
//	}
//	else
//	{
//		printf("输入错误\n");
//	}
//		return 0;
////}
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a < 'z' || a >'k')
//			continue;
//			putchar(a);
//	}
//
//	return 0;
//}
//int main()
/*
	int i = 9;
	for (i = 1; i <= 10; i ++)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}*//*
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;

	}*//*
	int i = 0;
	for (i = 0; i <= 10; i++)
		if (i =0)
			printf("hhaha");*//*
	int i = 1;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
			printf("hehe\n");
	}*//*
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 3; x++, y++)
		printf("hehe\n");*//*
	int j = 0;
	int k = 0;
	for (k = 0, j = 0; j ==0; j++, k++)
		printf("haha ");
	return 0;/*
}*//*
int main()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	}
	while (i <= 10);

	return 0;
}*//*
int main()
{
	int i = 0;
	int j = i-1;
	scanf("%d", &i);
	for (; i >= 0;i -= 1)
	{
		int m = i* j;
	}

	return 0;
}*//*
int main()
{
	int i = 1;
	int a = 1;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a = a * i;
    }
	printf("%d\n", a);
	return 0;
}*//*
int main()
{
	int a = 1;
	int i = 0;
	int n = 1;
	int sum = 0;
	for (n=1;n<=4;n++)
	{  
		a = 1;
		for (i = 1; i <= n; i++)
		{   
			
			a = a * i;
		}
		sum = sum + a;
	}
	printf("%d\n", sum);
	return 0;
}*//*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a =21;
	int i = 0;
	for (i = 0; i <sz; i++)
	{
		if (a == arr[i])
		{
			printf("找到了，下标为：%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("can not find");
	return 0;
}*//*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 11;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while ( right>=left)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < a)
		{
			left = mid+1;
		}
		else if (arr[mid] > a)
		{
			right = mid-1;
		}
		else
		 {
			printf("找到了，下标为:%d\n", mid);
			break;
		 }
	}
		if (right < left)
		{
			printf("找不到\n");
		}
	
	return 0;
}*//*
int main()
{
	char arr1[] = "welcome to the world";
	char arr2[] = "####################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	while (left<=right)
	{
	

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		
		Sleep(1000);
		system("cls");
		printf("%s\n", arr2);
		left++;
		right--;
	}
	
	return 0;
}*//*
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if(i=5)
			printf("%d ",i);
	}

	return 0;
}*//*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if(a>b&&a>c)
	{
		if(b>c)
		printf("%d>%d>%d ", a,b,c);
	    if(b<c)
		printf("%d>%d>%d ", a, c, b);
	}
	if (b >a&& b > c )
	{ 
		if(a>c)
		printf("%d>%d>%d ", b, a , c);
	   if(a<c)
		   printf("%d>%d>%d ", b,c,a);
	
	}
	if (c> b && c > a  )
	{
		if(a>b)
		printf("%d>%d>%d ", c,a, b);
	    if(a<b)
		printf("%d>%d>%d ", c,b,a);
	}
	return 0;
}*//*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b)
	{
		int d = a;
		a = b;
		b = d;
	}
	if (a < c)
	{
		int d = a;
		a = c;
		c = d;
	}
	if (b < c)
	{
		int d = b;
		b = c;
		c = d;
	}

	printf("%d>%d>%d", a, b, c);
	return 0;
}*//*
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i%3==0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*//*
int main()
{
	int num[] = { 1,2,3,5,9 };
	int target = 12;
	int a = 0;
	int b = 0;
	if (num[a] + num[b] == target)
		printf("%d %d,a,b");
	return 0;
}*//*
int main()
{
	int a ;
	int b;
	int c = 0;
	scanf("%d&d",&a,&b);
	
	while (a%b!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d\n ", b);
    return 0;
////}*/
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0)||(year%400==0))
//		{
//			printf(" %d ", year);
//			count++;
//		}
//	}
//	printf("\n闰年有%d次", count);
//	return 0;
////}
//#include<math.h>
//int main()
//{
//	int i = 100;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <=i/2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i/2)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入选择的楼层:");
//	while (1)
//	{
//		scanf("%d", &a);
//		switch (a)//switch语句中填写整形表达式
//		{
//		case 1://case后接整形常量表达式
//			printf("到达第一层");
//			break;
//		case 2:
//			printf("到达第二层");
//			break;
//		case 3:
//			printf("到达第三层");
//			break;
//		default:
//			printf("楼层不存在，请重新输入");
//			continue;
//		}
//		break;
//	}
//	return 0;
////}
//int main()
//{
//	double sum = 0;
//	int i = 1;
//	int a = 1;
//	for (i = 1; i<=100;i++)
//	{
//		sum = sum +a*( 1.0/i);
//		a = -a;
//	}
//	printf("%lf\n", sum);
//	return 0;
/*}*//*
int main()
{
	int a = 5 / 2;
	int b = 5.0 / 2;
	double c = 5 / 2;
	double d = 5.0 / 2;
	float e = 5.0 / 2;;
	printf("%d\n%d\n%lf\n%lf\n%lf\n", a, b, c, d, e);

	return 0;
}*/
//int main()
//{
//	int arr[] = { 7,5,9,6,23,54,48,69,100,112,456,201 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i = 1; i <= sz; i++)
//	{
//		
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}///*
//int main()
//{
//	printf(
//		"100%%12=%d \n100%%-12=%d \n-100%%12=%d \n-100%%-12=%d \n",
//		100 % 12, 100 % -12, -100 % 12, -100 % -12
//	);
//	return 0;
////}*/
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	for (i =1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			m = i * j;
//			printf("%d*%d=%-2d ",j,i, m);
//
//	     }
//		printf("\n");
//
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			m = i * j;
//			printf("%d*%d=%-4d", j, i, m);
//		}
//		printf("\n");
//	}
//	return 0;
////}
//int main()
//{
//	
//	
//	int i = 0;
//	while(i <= 9)
//	{
//		 int a = rand();
//		printf("%d\n", a);
//		i++;
//	}
//	return 0;
////}
//void game()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));//提供一个随机数
//	i = rand()%100+1;
//    //printf("%d\n", i);
//	int a = 0;
//	do
//	{
//		scanf("%d", &a);
//		if (a > i)
//		{
//			printf("猜大了，请重新输入:");
//		}
//		else if (a < i)
//		{
//			printf("猜小了,请重新输入:");
//		}
//		else
//		{
//			printf("恭喜你，猜对了。");
//			printf("\n它就是：%d\n",a);
//			break;
//		}
	/*} while (a != 0);
}
void menu()
{
	提供游戏开始界面的菜单
	printf("game    start   please  choose\n");
	printf("##############################\n");
	printf("##   1.start    0.end       ##\n");
	printf("##############################\n");
}
int main()
{  
	int input = 0;
	//*/
	//do//利用循环至少执行一次的特点
	//{
	//	menu();
	//	scanf("%d", &input);//必须要在循环中间，否则会出问题
	//	switch (input)
	//	{
	//	case 0:
	//		printf("游戏结束\n");
	//		break;
	//	case 1:
	//		printf("猜数字，请输入1-100中的数字\n");
	//		game();
	//		break;
	//	default:
	//		printf("输出错误，请重新输入\n");
	//		break;

	//	}
	//} while (input);
	//return 0;
////}
//int main()
//{
////	system("shutdown - s - t 1200");/*
//	char arr1[]= { "我是猪" };
//	char arr2[20] = { 0 };
//	printf("请输入我是猪，否则电脑将在2分钟后关机\n");
//	printf("请输入：");
//	scanf("%s", arr2);
//	if (strcmp(arr2, arr1) == 0)
//	{
//		system("shutdown -a");
//	}*//*
//	return 0;
//}*/
//}
//int main()
//{
//	
//	
//	char a[7] = { "abdcfj" };
//	int b = sizeof(a);
//	int c = strlen("a");
//	printf("%d\n%d\n", b, c);
//	return 0;
////}
//int main()
//{
//	char arr[] = { "abc"};
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//	return 0;
//}

void game()
{
	int i = 0;
	srand((unsigned int)time(NULL));//提供一个随机数
	i = rand() % 100 + 1;
	//printf("%d\n", i);
	int a = 0;
	do
	{
		scanf("%d", &a);
		if (a > i)
		{
			printf("猜大了，请重新输入:");
		}
		else if (a < i)
		{
			printf("猜小了,请重新输入:");
		}
		else
		{
			printf("恭喜你，猜对了。");
			printf("\n它就是：%d\n", a);
			break;
		}
	} 	while (a != 0);
}
void menu()
		{
			//提供游戏开始界面的菜单
			printf("Game    start   please  choose\n");
			printf("##############################\n");
			printf("##   1.start    0.end       ##\n");
			printf("##############################\n");
		}
 int main()
		{
			int input = 0;

			do//利用循环至少执行一次的特点
			{
				menu();
				scanf("%d", &input);//必须要在循环中间，否则会出问题
				switch (input)
				{
				case 0:
					printf("游戏结束\n");
					break;
				case 1:
					printf("猜数字，请输入1-100中的数字\n");
					game();
					break;
				default:
					printf("输出错误，请重新输入\n");
					break;

				}
			} while (input);
			return 0;
		}