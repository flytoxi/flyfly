#pragma warning(disable:6031)//禁用 6031 的安全警告

#include "game.h"

//char* my_strcpy(char* dest, const char* src);
//
////1.写一个函数指针 pf，能够指向 my_strcpy；
////2.写一个函数指针数组 pfArr，能够存放4个 my_strcpy 函数的地址。
//
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char, char) = { my_strcpy,my_strcpy ,my_strcpy ,my_strcpy };
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		
//	}
//	return 0;
//}





//int main()
//{
////	int len = strlen("abcdef");
//	char arr[] = { 'a', 'b ', 'c', 'd', 'e', 'f', 0};
//	int len = strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}











//井字棋游戏。

//void menu()
//{
//	printf("--------------------------------------\n");
//	printf("----------1. play    0. exit----------\n");
//	printf("--------------------------------------\n");
//}
//
//void game()
//{
//	int ret = 0;
//	//数组 - 存放整个棋盘信息。
//	char board[ROW][COL] = { 0 };//全部空格。
//	//初始化棋盘。
//	InitBoard(board, ROW, COL);
//	//打印棋盘。
//	DisplayBoard(board, ROW, COL);
//	// 下棋。
//	while (1)
//	{
//		
//		// 玩家下棋；
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		system("cls");
//		//判断输赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//
//		// 电脑下棋。
//		WindowsMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("玩家赢！\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢！\n");
//	}
//	else
//	{
//		printf("平局。\n");
//	}
//}
//
//void test()
//{
//	int input = 0;
//	do
//	{	
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请再次输入：\n");
//			break;
//		}
//
//	} while (input);
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	test();
//	return 0;
//}




//数组名是数组首元素的地址。有两个例外。1.  sizeof(操作符)  2. &数组名，数组名代表整个数组，&取出整个数组的地址。

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof (数组名) 计算整个数组的大小，单位字节。
//	printf("%p\n", arr);// 首元素地址。
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//
//	printf("%p\n", &arr);  //数组的地址，从这个地址开始
//	printf("%p\n", &arr+1);
//	//printf("%d\n", *arr); // 1
//	return 0;
//}





//定义一个函数，冒泡排序。

//void bubble_sart(int arr[], int sz)
//{
//	//确定冒泡排序的趟数。
//	int i = 0;
//	int flag = 1; // 假设这一趟要排序的数据已经有序。
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0; //本趟排序的数据其实不完全有序。
//			}
//
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sart(arr,sz); // 冒泡排序函数。
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//斐波那契数列  计算第 n 个 数是多少，while 循环。

//int is_game(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = is_game(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}




//斐波那契数列  计算第 n 个 数是多少，函数递归。

//int is_game(int x)
//{
//	if (x > 2)
//		return is_game(x - 1) + is_game(x - 2);
//	else
//		return 1;
//
//
//}
//// 1 1 2 3 5 8 13 21  
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = is_game(n);
//	printf("ret = %d\n", ret);
//
//}




// 定义个函数 逐个打印某个数字。

//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//		printf("%d ", x%10);
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//自定义函数求字符串长度，函数递归。

//int str_(char* str)
//{
//	if (*str != '\0')
//		return 1 + str_(str + 1);
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "abcd";
//	int ret = str_(arr); // 模拟一个 strlen函数。 arr是数组，数组传参，传过去的是第一个元素的地址。
//	int len = strlen(arr);
//	printf("len = %d\n", len); // 求字符串长度。
//	printf("ret = %d\n", ret);
//	return 0;
//}


//倒计时10秒钟。

//int main()
//{
//	int i = 0;
//	for (i = 10; i >= 0; i--)
//	{
//		printf("倒计时 %d\n", i);
//		Sleep(1000);
//		system("cls");
//
//	}
//	return 0;
//}



//无意义。瞎打的。

//void lst()
//{
//	
//	printf("*******\n");
//	lst();
//}
//
//int main()
//{
//	lst();
//	return 0;
//
//}




// 函数的嵌套调用。

//void new_line()
//{
//	printf("活在当下！！!\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}



// 每调用一次函数， num+1；

//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}



// 定义一个函数 找到数组中的某个数，并指出下标。

//int find(int arr[], int k, int sz)
//{
//	int lift = 0;
//	int right = sz - 1;
//	
//	while (lift<=right)
//	{
//		int mid = (lift + right) / 2;
//		if (arr[mid] < k)
//		{
//			lift = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = find(arr, k, sz);
//	if (ret == -1)
//		printf("找不到指定数字。\n", ret);
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}



// 定义一个函数判断 某年是不是闰年。

//int determine(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (determine(i) == 1)
//		printf("它是闰年。\n");
//	else
//		printf("它不是闰年。\n");
//	return 0;
//}



// 定义一个函数 交换两个数。

//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}





// 判断 100 - 200 之间的素数。

//int sushu(int x)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if(sushu(i)==1)
//		printf("%d ", i);
//	}
//	return 0;
//}




// 定义一个函数比较两个数的大小。

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}





//猜数字游戏。rand(）随机函数 time 时间戳。

//void menu()
//{
//	printf("-----------------------------------------\n");
//	printf("-------- 1. 开始游戏  0.退出游戏 --------\n");
//	printf("-----------------------------------------\n");
//
//}
//void game()
//{
//	int ret = 0;
//	int n = 0;
//	printf("猜一下数字：\n");	
//	ret = rand()%100;
//	while (1)
//	{
//		scanf("%d", &n);
//		if(n>ret)
//		{
//			printf("猜大了。\n");
//		}
//		else if (n<ret)
//		{
//			printf("猜小了。\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了。\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请再次输入：\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//猜数字游戏。rand(）随机函数 time 时间戳。

//void menu()
//{
//	printf("************************************\n");
//	printf("****  1. 开始游戏  0. 退出游戏  ****\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int n = 0;
//	int ret = 0;
//	 ret  = rand()%100;
//	 printf("猜一下数字：\n");
//	while(1)
//	{
//		scanf("%d", &n);
//		if (n < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (n > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	} 
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}



//数1-100出现多少个9。

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//					
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}





// 求100-1000中的素数。

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101;i <= 1000;i+=2)
//	{
//		int j = 0;
//		for (j = 2;j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			
//		}
//		if (j>sqrt(i)) 
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount= %d", count);
//	return 0;
//}




//求两个数的最大公约数。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}





//打印9*9乘法表。

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 1;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}



//找到数组中最大的数。

//int main()
//{	
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i < sz;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		
//	}
//	printf("max = %d\n", max);
//	return 0;
//}



//求1/1-1/2+1/3.....-1/100。

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag*1.0 / i;	
//		flag = -flag;
//		
//
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}



//打印1-100之间3的倍数。

//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i +=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}




//把三个数从大到小排列。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}




//把三个数从大到小排列。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b && a >= c )
//	{
//		if (b > c)
//		{
//			printf("%d %d %d\n", a, b, c);
//
//		}
//		else
//		{
//			printf("%d %d %d\n", a, c, b);
//		}
//	}
//	else if (b >= a && b >= c)
//	{
//		if (a > c)
//		{
//
//			printf("%d %d %d\n", b, a, c);
//
//		}
//		else
//		{
//			printf("%d %d %d\n", b, c, a);
//		}
//	}
//
//	else if(c >= a && c >= b)
//	{
//		if (a > b)
//		{
//			printf("%d %d %d\n", c, a, b);
//		}
//		else
//		{
//			printf("%d %d %d\n", c, b, a);
//		}
//
//	}
//	return 0;
//}



//找数组中的某个数。

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是： %d\n", i);
//			break;
//		}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//找数组中的某个数。

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int lift = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	
//	while (lift <= right)
//	{
//		int mid = (lift + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid -1;
//		}
//		else if (arr[mid] < k)
//		{
//			lift = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (lift > right)
//		{
//			printf("找不到\n");
//		}
//	}
//	return 0;
//}


//打印字符跳动。

//int main()
//{
//	char arr1[] = "welcome to handan !!!!";
//	char arr2[] = "######################";
//
//	
//	int lift = 0;
//	int right = strlen(arr1) - 1;     //#lnclude <string.h>
//	
//	while (lift <= right)
//	{
//		arr2[lift] = arr1[lift];
//		arr2[right] = arr1[right];
//		system("cls");//执行系统命令的一个函数 -cls清空屏幕   #include <stdlib.h>
//		printf("%s\n", arr2);
//		Sleep(1000);  //  #include <windows.h>
//		//休息一秒
//		
//		lift++;
//		right--;
//		
//	}
//	
//	return 0;
//}



//  缓存区  scanf 取输入的  留下 \n， getchar()取走。

//int main()
//{
//	int ret = 0;	
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认正确\n");
//
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}



// 用户输入账号 + 密码 密码输入三次 退出程序。  strcmp 函数（string compare)

//int main()
//{
//	int i = 0;
//	char yonghu[20] = {0};
//	char mima[20] = {0};
//	printf("请输入你的用户账号\n");
//	scanf("%s", yonghu);
//
//	for (i = 0;i < 3;i++)
//	{
//
//		printf("请输入你的密码\n");
//		scanf("%s", mima);
//		{
//
//			;
//		}
//
//		if (strcmp(mima , "xx521433") == 0)  //strcmp  (string compare) 字符比较函数 a<b 返回负数， a>b 返回正数， a=b返回‘ 0 ’
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("登录失败\n");
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//
//	return 0;
//}



//  do  while 循环的 1到10的阶乘 累加。

//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int add = 0;
//	do
//	{
//		ret = ret * i;
//		add = add + ret;
//		i++;
//
//	}
//	while (i <= 10);
//	printf("add = %d\n", add);
//	return 0;
//}



//  do  while 循环的 n 的阶乘。


//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	do
//	{
//		ret = ret * i;
//		i++;
//
//	}
//	while (i <= n);
//	printf("ret = %d\n", ret);
//	
//	return 0;
//}



//   while 循环的 1到10的阶乘 累加。

//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int add = 0;
//	while (i <= 10)
//	{
//		ret = ret* i;
//		add = add + ret;
//		i++;
//
//
//	}
//	printf("add = %d\n", add);
//
//	return 0;
//}



// while 循环的 n 的阶乘。

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret = ret * i;
//		i++;
//
//	}
//	printf("ret = %d\n", ret);
//
//	return 0;
//}




//   for 循环的 1到10的阶乘 累加。

//int main()
//{
//	int i = 0;
//	int add = 0;
//	int ret = 1;
//	for (i = 1;i <= 10; i++)
//	{
//		ret = ret * i;
//		add += ret;
//	}
//	printf("add = %d\n", add);
//	return 0;
//}



//  for 循环的 n 的阶乘。

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("ret = %d\n", ret);
//	
//
//	return 0;
//}



// for 循环 break 跳出循环 。

//int main()
//{
//	int a = 0;
//	for (a = 1;a < 100;a++)
//	{
//		if (a == 50)
//			break;
//		printf("%d ", a);
//		
//	}
//	return 0;
//}



// struct 结构体 。

//struct 长方体
//{
//	int 长 ;
//	int 宽 ;
//	int 高 ;
//
//};
//
//int main()
//{
//	struct 长方体 a = { 20,10,15 };
//	printf("长 = %d 宽 = %d 高= %d\n", a.长, a.宽, a.高);
//	return 0;
//}



// struct 结构体 。

//struct People
//{
//	char name[10];  //名字
//	int tall;	    //身高
//	float weigh;	//体重
//};

//int main()
//{
//	struct People p1 = { "郗高远", 170, 144.5,};
//	printf("名字： %s  身高： %dcm  体重： %f斤 ", p1.name, p1.tall, p1.weigh);
//	return 0;
//}



// while 循环 + getchar()   putchar() 。

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//
//		putchar(ch);
//	}
//	return 0;
//}


// while 循环 + getchar()   putchar() ，  EOF -> ctrl + z 。

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF - end of file -> -1
//	{
//		putchar(ch);
//	}
//
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);*/
//	return 0;
//}



// while 循环 。 

//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//
//		if (i == 5)
//			continue;//用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分，进入下一次循环
//		printf("%d\n", i);
//		i++;
//		
//	}
//	return 0;
//}



// while 循环 。 

//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	int a = 1;
//	while (a < 100)
//	{
//		printf("%d ", a);
//		a += 2;
//
//	}
//	return 0;
//}



// switch 语句 。

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		n++;
//		m++;
//	case 2:
//		n++;
//		m++;
//	case 3:
//		switch (n)
//		{
//		case 3:
//			m++;
//		case 4:
//			n++;
//		}
//		printf("n = %d\nm = %d\n", n, m);
//	}
//	return 0;
//}



// switch 语句 。

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//整型表达式
//	{
//	case 1: //整形常量表达式
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:	
//	case 7:
//		printf("休息日\n");
//		break;
//
//	}
//	return 0;
//}


// switch 语句 。

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
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
//		break;
//
//	}
//	return 0;
//}


// if 语句。

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	if (day == 1)
//		printf("星期一\n");
//	else if (day == 2)
//		printf("星期二\n");
//	else if (day == 3)
//		printf("星期三\n");
//	else if (day == 4)
//		printf("星期四\n");
//	else if (day == 5)
//		printf("星期五\n");
//	else if (day == 6)
//		printf("星期六\n");
//	else if (day == 7)
//		printf("星期日\n");
//	else
//		printf("输入错误\n");
//	return 0;
//}


// if 语句。

//
//int main()
//{
//	int age = 111;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 70)
//		printf("中年\n");
//	else if (age >= 70 && age < 90)
//		printf("老年\n");
//	else
//		printf("老寿人\n");
//	return 0;
//}



// struct 结构体 + 指针 *p 。

//struct Book
//{
//	char name[20]; //书名
//	short price;   //价格
//
//};
//
//int main()
//{
//	struct Book b1 = { "C语言", 100, };
//	struct Book* pb = &b1;
//	/*b1.name = "C++";*/
//	b1.price = 200;
//	// name 不是变量，是数组名，本质上是地址
//	// price 是变量,可以改
//	printf("书名： %s\n", (*pb).name);
//	printf("价格： %d\n", (*pb).price);
//  //结构体变量.成员
//  //结构体指针->成员
//	printf("书名： %s\n", pb->name);
//	printf("价格： %d\n", pb->price);
//
//
//
//	return 0;
//}



// struct 结构体。

//struct People
//{
//	char name[10];  //名字
//	int tall;	    //身高
//	float weigh;	//体重
//
//	
//};
//int main()
//{
//	struct People p1 = { "郗高远", 170, 144.5,};
//	printf("名字： %s  身高： %dcm  体重： %f斤 \n", p1.name, p1.tall, p1.weigh);
//	return 0;
//}



// *p 指针。

//int main()
//{
//	double a = 4.33;
//	double* pd = &a;
//	*pd = 3.14;
//	printf("%lf\n", a);
//	printf("%d\n", sizeof(pd));
//	return 0;
//}



//32位 -> 4 ; 64位 -> 8 ;单位字节。

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}



// *p 指针。

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a = %p\n", &a);
//	return 0;
//}



// 定义 一个函数 Max()比较大小。

//int Max(int x, int y)
//{
//	int z = 0;
//	z = (x > y ? x : y);
//	return z;
//}
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = 0;
//	if (a > b)
//		printf("z = %d\n", a);
//	else
//		printf("z = %d\n", b);
//	z = Max(a, b);
//	printf("z = %d\n", z);
//	z = (a > b ? a : b);
//	printf("z = %d\n", z);
//	return 0;


// 三目运算符  (a > b ? a : b)

//int main()
//{
//	int a = 44;
//	int b = 55;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max = %d\n", max);
//	return 0;
//}




// && 逻辑与   ， ||  逻辑或

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;// && 逻辑与 || 逻辑或   a or b 真或假
//	printf("c = %d\n", c);
//	return 0;
//}



//& 按位与的用法。

//int main()
//{
//	int a = 3;
//	int b = 7;
//	int z = a & b; //&按位与,见0为0，全1为1。
//	// 8 -> 1000 
//	// 3 -> 0011
//
//	printf("%d\n", z);
//	return 0;
//}



//打印数组里的每个数，sizeof 计算数组的长度，单位字节。

//int main()
//{
//	int arr[] = { 32,432,55,3,234,24,23,4,234,234,243,4,32, };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	while (i<sz)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	
//
//	return 0;
//}



//scanf函数 + if 语句。

//int main()
//{
//	int input = 0;
//	printf("学习C语言\n");
//	printf("今天学习来吗？(1 or 0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好样的！\n");
//	else
//		printf("NO!\n");
//
//	return 0;
//}



//while循环+if语句。

//int main()
//{
//	int day = 0;
//	printf("加入C\n");
//
//	while (day<20000)
//	{
//		printf("学习天数: %d\n", day);
//		day++;
//	}
//	if (day>=20000)
//	printf("好好好\n");
//	return 0;
//}



//scanf函数的应用，输入两个数，算加和。

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d", &num1);   //&取地址符号。
//	scanf("%d", &num2);
//	printf("sum = %d\n", num1 + num2);
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}



//各个类型的申请空间大小，单位字节。

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(char));
//
//	return 0;
//}



//计算数组的长度，单位字节，找到\0停止，\0不计入长度。

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}