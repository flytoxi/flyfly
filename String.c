#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>



//  �ڴ溯��  

// memset  -  �ڴ�����

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);  //��λ���ֽ� 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}


// memcmp

//int main()
//{
//	int arr1[] = { 1, 2, 5, 4, 5 };
//	int arr2[] = { 1, 2, 3, 4, 3 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}



//    memcpy �ڴ濽��       memove                memcmp           memset
//    ���ص����ڴ�         �ص����ڴ濽��
//struct S
//{
//	char name[20];
//	int age;
//};
//
//
//void* my_memcpy(void* dest, const void* src, int num) //  ���ܴ����ص�����
//{
//	assert(dest && src);
//	void* start = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}

//void* my_memmove(void* dest, const void* src, int num)
//{
//	
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		// ǰ����
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		// ��ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//my_memcpy(arr + 2, arr, 20);  //  Ŀ�ĵغ�Դͷ �����й���
//	
//	// memmove  �����ص������
//	//memmove(arr + 2, arr, 20);
//	my_memmove(arr + 2, arr, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3 ,4, 5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	struct S arr3[] = { {"����", 20}, {"����", 30} };
//	struct S arr4[3] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	int j = 0;
//	for (j = 0; j < 2; j++)
//	{
//		printf("������ %s  ���䣺 %d\n", arr4[j].name, arr4[j].age);
//	}
//	return 0;
//}




//  �ַ�������    ���������� �ַ���  \0


//  �ַ����ຯ��

// ����			������Ĳ����������������ͷ��� ��

//   ͷ�ļ� <ctype.h>
// 
//iscntrl		�κο����ַ�
//isspace		�հ��ַ�:  �ո�  '' ��ҳ '\f' ����  '\n'  �س�   '\r' �Ʊ��  '\t'
//isdigit		ʮ�������� 0-9
//isxdigit		ʮ���������֣���������ʮ�������֣� Сд��ĸ a - f  ,��д��ĸ A - F
//islower		Сд��ĸ
//isupper		��д��ĸ
//isalpha		��ĸ a - z or A - Z
//isalnum		��ĸ�������֣�  a - z   A - Z   0 - 9
//ispunct		�����ţ��κβ��������ֻ�����ĸ��ͼ���ַ�  ( �ɴ�ӡ )
//isgraph		�κ�ͼ���ַ�
//isprint       �κοɴ�ӡ�ַ��� �����ַ��Ϳհ��ַ�


//int main()
//{
//	char ch = 'w';
//	char j = 'A';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	int i = isalnum(j);
//	printf("%d\n", i);
//
//	return 0;
//}

// �ַ�ת�� 

//  tolower  תСд
//  toupper  ת��д

//int main()
//{
//	char arr[] = "I Am A Chinese !";
//	int i = 0;
//	while (arr[i])
//	{
//		int ret = 0;
//		if (ret = isupper)
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}




// ���󱨸溯��  
// strerror


//int main()
//{
//	//  ������ ������Ϣ
//	//  0   No error
//	//  1   Operation not permitted
//	//  2   No such file or directory
//	//  3   No such process
//	//  4	Interrupted function call ........
//	//  errno  ��һ��ȫ�ֵĴ�����ı���
//	//  ��C���ԵĿ⺯����ִ�й����У� �����˴��� �ͻ�Ѷ�Ӧ�Ĵ����룬 ��ֵ�� errno ��
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//  ���ļ�
//	FILE* pf = fopen("text.txt", "r"); // ���ļ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//		printf("open file success\n");
//	//   No such file or directory
//	//   ����һ���������ļ�  --  open file success
//	return 0;
//}



// strtok   char* strtok(char* str, const cahr* sep)
//											sep�����Ǹ��ַ����������������ָ�����ַ�����

	//192.168.31.121  
	//192 168 31 121  -strtok
	//2239359619@qq.com
	//2239359619 qq com

//int main()
//{
//	char arr1[] = "21@125.354.256.154.";
//	char* p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr1, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s ", ret);
//	}
//
//	//�и�
//	/*char* ret = strtok(arr1, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	return 0;
//}
































