#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <stddef.h>


//    struct  �ṹ��


//  ����  (  ������  )
//  ��Ա�ǹ���һ���ڴ�ռ�  ����������Ա�Ĵ�С
//  ��ͬһʱ��ֻ����һ��  



//union Un
//{
//	char c; //1
//	int i;  //4
//};// 4���ֽ�
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	// ��ַ��ͬ
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);  //  11223355
//	return 0;
//}

//��С��
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
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}



//      ö��    ����
//  ö�� �����ͼ�飬 �����Ͻ�   ����ʹ�� #define ���峣��
// һ�ο��Զ���������   ��ֹ��������Ⱦ����װ��  ���ڵ���
//
//enum Day  // ����
//{
//	//ö�ٵĿ���ȡֵ
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
//	enum Color c = 2;// ���Ͳ�һ�� ��� ö������ �ұ� ����
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	return 0;
//}


//        λ��     
//  λ��  �� �ṹ ����ʡ�ռ�  �� ���ܿ�ƽ̨  λ -- ������λ
//  λ�εĳ�Ա������ int unsigned int signed int
//  λ�εĳ�Ա������һ��ð��  �� һ�����֣� �����Ŀ < 64   (32λ<32)
//  һ�ο���4���ֽ�   ��ʡ�ռ� 
//  λ���ǲ���ƽ̨��  
//  ����ʣ���λ�������ã�Ҳ�ǲ�ȷ����
//  λ���еĳ�Ա���ڴ��д������ҷ��䣬 ���Ǵ�����������׼��δ����
//  int λ�α��������޷��Ż����з����ǲ�ȷ����

//struct A
//{
//	int a : 2;  // 2  bit  
//	int b : 5;
//	int c : 10;
//	int d : 30;// ...... 47 bit - 6���ֽ�  �������� 8���ֽ�
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
//	Init(&s);//  ��ַ
//	Print1(s); //  ��ֵ
//	Print2(&s);// ��ַ  ����  ������ȫ  ���Լ� const 
//
//	/*printf("%d\n", s.a);*/
//	return 0;
//}