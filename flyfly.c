#pragma warning(disable:6031)//���� 6031 �İ�ȫ����

#include "game.h"

//char* my_strcpy(char* dest, const char* src);
//
////1.дһ������ָ�� pf���ܹ�ָ�� my_strcpy��
////2.дһ������ָ������ pfArr���ܹ����4�� my_strcpy �����ĵ�ַ��
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











//��������Ϸ��

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
//	//���� - �������������Ϣ��
//	char board[ROW][COL] = { 0 };//ȫ���ո�
//	//��ʼ�����̡�
//	InitBoard(board, ROW, COL);
//	//��ӡ���̡�
//	DisplayBoard(board, ROW, COL);
//	// ���塣
//	while (1)
//	{
//		
//		// ������壻
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		system("cls");
//		//�ж���Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//
//		// �������塣
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
//		printf("���Ӯ��\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ��\n");
//	}
//	else
//	{
//		printf("ƽ�֡�\n");
//	}
//}
//
//void test()
//{
//	int input = 0;
//	do
//	{	
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������ٴ����룺\n");
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




//��������������Ԫ�صĵ�ַ�����������⡣1.  sizeof(������)  2. &�������������������������飬&ȡ����������ĵ�ַ��

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof (������) ������������Ĵ�С����λ�ֽڡ�
//	printf("%p\n", arr);// ��Ԫ�ص�ַ��
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//
//	printf("%p\n", &arr);  //����ĵ�ַ���������ַ��ʼ
//	printf("%p\n", &arr+1);
//	//printf("%d\n", *arr); // 1
//	return 0;
//}





//����һ��������ð������

//void bubble_sart(int arr[], int sz)
//{
//	//ȷ��ð�������������
//	int i = 0;
//	int flag = 1; // ������һ��Ҫ����������Ѿ�����
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
//				flag = 0; //���������������ʵ����ȫ����
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
//	bubble_sart(arr,sz); // ð����������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//쳲���������  ����� n �� ���Ƕ��٣�while ѭ����

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




//쳲���������  ����� n �� ���Ƕ��٣������ݹ顣

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




// ��������� �����ӡĳ�����֡�

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



//�Զ��庯�����ַ������ȣ������ݹ顣

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
//	int ret = str_(arr); // ģ��һ�� strlen������ arr�����飬���鴫�Σ�����ȥ���ǵ�һ��Ԫ�صĵ�ַ��
//	int len = strlen(arr);
//	printf("len = %d\n", len); // ���ַ������ȡ�
//	printf("ret = %d\n", ret);
//	return 0;
//}


//����ʱ10���ӡ�

//int main()
//{
//	int i = 0;
//	for (i = 10; i >= 0; i--)
//	{
//		printf("����ʱ %d\n", i);
//		Sleep(1000);
//		system("cls");
//
//	}
//	return 0;
//}



//�����塣Ϲ��ġ�

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




// ������Ƕ�׵��á�

//void new_line()
//{
//	printf("���ڵ��£���!\n");
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



// ÿ����һ�κ����� num+1��

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



// ����һ������ �ҵ������е�ĳ��������ָ���±ꡣ

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
//		printf("�Ҳ���ָ�����֡�\n", ret);
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}



// ����һ�������ж� ĳ���ǲ������ꡣ

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
//		printf("�������ꡣ\n");
//	else
//		printf("���������ꡣ\n");
//	return 0;
//}



// ����һ������ ������������

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





// �ж� 100 - 200 ֮���������

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




// ����һ�������Ƚ��������Ĵ�С��

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





//��������Ϸ��rand(��������� time ʱ�����

//void menu()
//{
//	printf("-----------------------------------------\n");
//	printf("-------- 1. ��ʼ��Ϸ  0.�˳���Ϸ --------\n");
//	printf("-----------------------------------------\n");
//
//}
//void game()
//{
//	int ret = 0;
//	int n = 0;
//	printf("��һ�����֣�\n");	
//	ret = rand()%100;
//	while (1)
//	{
//		scanf("%d", &n);
//		if(n>ret)
//		{
//			printf("�´��ˡ�\n");
//		}
//		else if (n<ret)
//		{
//			printf("��С�ˡ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶��ˡ�\n");
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������ٴ����룺\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//��������Ϸ��rand(��������� time ʱ�����

//void menu()
//{
//	printf("************************************\n");
//	printf("****  1. ��ʼ��Ϸ  0. �˳���Ϸ  ****\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int n = 0;
//	int ret = 0;
//	 ret  = rand()%100;
//	 printf("��һ�����֣�\n");
//	while(1)
//	{
//		scanf("%d", &n);
//		if (n < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (n > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}



//��1-100���ֶ��ٸ�9��

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





// ��100-1000�е�������

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




//�������������Լ����

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





//��ӡ9*9�˷���

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



//�ҵ���������������

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



//��1/1-1/2+1/3.....-1/100��

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



//��ӡ1-100֮��3�ı�����

//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i +=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}




//���������Ӵ�С���С�

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




//���������Ӵ�С���С�

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



//�������е�ĳ������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ� %d\n", i);
//			break;
//		}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//�������е�ĳ������

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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//		if (lift > right)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//	return 0;
//}


//��ӡ�ַ�������

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
//		system("cls");//ִ��ϵͳ�����һ������ -cls�����Ļ   #include <stdlib.h>
//		printf("%s\n", arr2);
//		Sleep(1000);  //  #include <windows.h>
//		//��Ϣһ��
//		
//		lift++;
//		right--;
//		
//	}
//	
//	return 0;
//}



//  ������  scanf ȡ�����  ���� \n�� getchar()ȡ�ߡ�

//int main()
//{
//	int ret = 0;	
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ����ȷ\n");
//
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}



// �û������˺� + ���� ������������ �˳�����  strcmp ������string compare)

//int main()
//{
//	int i = 0;
//	char yonghu[20] = {0};
//	char mima[20] = {0};
//	printf("����������û��˺�\n");
//	scanf("%s", yonghu);
//
//	for (i = 0;i < 3;i++)
//	{
//
//		printf("�������������\n");
//		scanf("%s", mima);
//		{
//
//			;
//		}
//
//		if (strcmp(mima , "xx521433") == 0)  //strcmp  (string compare) �ַ��ȽϺ��� a<b ���ظ����� a>b ���������� a=b���ء� 0 ��
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("��¼ʧ��\n");
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//
//	return 0;
//}



//  do  while ѭ���� 1��10�Ľ׳� �ۼӡ�

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



//  do  while ѭ���� n �Ľ׳ˡ�


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



//   while ѭ���� 1��10�Ľ׳� �ۼӡ�

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



// while ѭ���� n �Ľ׳ˡ�

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




//   for ѭ���� 1��10�Ľ׳� �ۼӡ�

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



//  for ѭ���� n �Ľ׳ˡ�

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



// for ѭ�� break ����ѭ�� ��

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



// struct �ṹ�� ��

//struct ������
//{
//	int �� ;
//	int �� ;
//	int �� ;
//
//};
//
//int main()
//{
//	struct ������ a = { 20,10,15 };
//	printf("�� = %d �� = %d ��= %d\n", a.��, a.��, a.��);
//	return 0;
//}



// struct �ṹ�� ��

//struct People
//{
//	char name[10];  //����
//	int tall;	    //���
//	float weigh;	//����
//};

//int main()
//{
//	struct People p1 = { "ۭ��Զ", 170, 144.5,};
//	printf("���֣� %s  ��ߣ� %dcm  ���أ� %f�� ", p1.name, p1.tall, p1.weigh);
//	return 0;
//}



// while ѭ�� + getchar()   putchar() ��

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


// while ѭ�� + getchar()   putchar() ��  EOF -> ctrl + z ��

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



// while ѭ�� �� 

//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//
//		if (i == 5)
//			continue;//������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��
//		printf("%d\n", i);
//		i++;
//		
//	}
//	return 0;
//}



// while ѭ�� �� 

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



// switch ��� ��

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



// switch ��� ��

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//���ͱ��ʽ
//	{
//	case 1: //���γ������ʽ
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:	
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//
//	}
//	return 0;
//}


// switch ��� ��

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
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
//		break;
//
//	}
//	return 0;
//}


// if ��䡣

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	if (day == 1)
//		printf("����һ\n");
//	else if (day == 2)
//		printf("���ڶ�\n");
//	else if (day == 3)
//		printf("������\n");
//	else if (day == 4)
//		printf("������\n");
//	else if (day == 5)
//		printf("������\n");
//	else if (day == 6)
//		printf("������\n");
//	else if (day == 7)
//		printf("������\n");
//	else
//		printf("�������\n");
//	return 0;
//}


// if ��䡣

//
//int main()
//{
//	int age = 111;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 70)
//		printf("����\n");
//	else if (age >= 70 && age < 90)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}



// struct �ṹ�� + ָ�� *p ��

//struct Book
//{
//	char name[20]; //����
//	short price;   //�۸�
//
//};
//
//int main()
//{
//	struct Book b1 = { "C����", 100, };
//	struct Book* pb = &b1;
//	/*b1.name = "C++";*/
//	b1.price = 200;
//	// name ���Ǳ����������������������ǵ�ַ
//	// price �Ǳ���,���Ը�
//	printf("������ %s\n", (*pb).name);
//	printf("�۸� %d\n", (*pb).price);
//  //�ṹ�����.��Ա
//  //�ṹ��ָ��->��Ա
//	printf("������ %s\n", pb->name);
//	printf("�۸� %d\n", pb->price);
//
//
//
//	return 0;
//}



// struct �ṹ�塣

//struct People
//{
//	char name[10];  //����
//	int tall;	    //���
//	float weigh;	//����
//
//	
//};
//int main()
//{
//	struct People p1 = { "ۭ��Զ", 170, 144.5,};
//	printf("���֣� %s  ��ߣ� %dcm  ���أ� %f�� \n", p1.name, p1.tall, p1.weigh);
//	return 0;
//}



// *p ָ�롣

//int main()
//{
//	double a = 4.33;
//	double* pd = &a;
//	*pd = 3.14;
//	printf("%lf\n", a);
//	printf("%d\n", sizeof(pd));
//	return 0;
//}



//32λ -> 4 ; 64λ -> 8 ;��λ�ֽڡ�

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}



// *p ָ�롣

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a = %p\n", &a);
//	return 0;
//}



// ���� һ������ Max()�Ƚϴ�С��

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


// ��Ŀ�����  (a > b ? a : b)

//int main()
//{
//	int a = 44;
//	int b = 55;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max = %d\n", max);
//	return 0;
//}




// && �߼���   �� ||  �߼���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;// && �߼��� || �߼���   a or b ����
//	printf("c = %d\n", c);
//	return 0;
//}



//& ��λ����÷���

//int main()
//{
//	int a = 3;
//	int b = 7;
//	int z = a & b; //&��λ��,��0Ϊ0��ȫ1Ϊ1��
//	// 8 -> 1000 
//	// 3 -> 0011
//
//	printf("%d\n", z);
//	return 0;
//}



//��ӡ�������ÿ������sizeof ��������ĳ��ȣ���λ�ֽڡ�

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



//scanf���� + if ��䡣

//int main()
//{
//	int input = 0;
//	printf("ѧϰC����\n");
//	printf("����ѧϰ����(1 or 0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�����ģ�\n");
//	else
//		printf("NO!\n");
//
//	return 0;
//}



//whileѭ��+if��䡣

//int main()
//{
//	int day = 0;
//	printf("����C\n");
//
//	while (day<20000)
//	{
//		printf("ѧϰ����: %d\n", day);
//		day++;
//	}
//	if (day>=20000)
//	printf("�úú�\n");
//	return 0;
//}



//scanf������Ӧ�ã���������������Ӻ͡�

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d", &num1);   //&ȡ��ַ���š�
//	scanf("%d", &num2);
//	printf("sum = %d\n", num1 + num2);
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}



//�������͵�����ռ��С����λ�ֽڡ�

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



//��������ĳ��ȣ���λ�ֽڣ��ҵ�\0ֹͣ��\0�����볤�ȡ�

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}