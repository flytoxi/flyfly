#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <stddef.h>


//    struct  结构体


//  联合  (  共用体  )
//  成员是公用一块内存空间  至少是最大成员的大小
//  在同一时刻只能用一个  



//union Un
//{
//	char c; //1
//	int i;  //4
//};// 4个字节
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	// 地址相同
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);  //  11223355
//	return 0;
//}

//大小端
// 
//int check_sys()
//{
//	//int a = 1;
//	//return *(char*)&a;
//	union Un 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.i;
//}
//int main()
//{
//	int i = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}



//      枚举    类型
//  枚举 有类型检查， 更加严谨   可以使用 #define 定义常量
// 一次可以定义多个常量   防止了命名污染（封装）  便于调试
//
//enum Day  // 星期
//{
//	//枚举的可能取值
//	Mon,  //  0
//	Tues, //  1
//	Wed,  //  2
//	Thur, //  3
//	Fri,  //  4
//	Sat,  //  5
//	Sun   //  6
//};
//enum Sex
//{
//	MALE,   //0
//	FEMALE, //1
//	SECRET  //2
//};
//enum Color
//{
//	RED = 10,  //10 
//	GREEN,     //11
//	BLUE       //12
//};
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	enum Color c = 2;// 类型不一样 左边 枚举类型 右边 整形
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	return 0;
//}


//        位段     
//  位段  比 结构 更节省空间  但 不能跨平台  位 -- 二进制位
//  位段的成员必须是 int unsigned int signed int
//  位段的成员后面有一个冒号  和 一个数字， 最大数目 < 64   (32位<32)
//  一次开辟4个字节   节省空间 
//  位段是不跨平台的  
//  舍弃剩余的位还是利用，也是不确定的
//  位段中的成员在内存中从左向右分配， 还是从右向左分配标准尚未定义
//  int 位段被当成是无符号还是有符号是不确定的

//struct A
//{
//	int a : 2;  // 2  bit  
//	int b : 5;
//	int c : 10;
//	int d : 30;// ...... 47 bit - 6个字节  但是它是 8个字节
//};
//int main()
//{
//	struct A a;
//	printf("%d", sizeof(a));
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%c %c %c %c\n", s.a, s.b, s.c, s.d);
//	return 0;
//}

//struct S 
//{
//	int a;
//	char c;
//	double d;
//};

//void Init(struct S* tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'w';
//	tmp->d = 3.14;
//}

//void Print1(struct S tmp) 
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}

//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}

//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//  传址
//	Print1(s); //  传值
//	Print2(&s);// 传址  更好  但不安全  可以加 const 
//
//	/*printf("%d\n", s.a);*/
//	return 0;
//}