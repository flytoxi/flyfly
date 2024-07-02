#include <stdio.h>








//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	while(arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//int my_strlen2(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1 )= '\0';
//	if (len > 3)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1 )= tmp;
//}
//
//int main()
//{
//	char arr[] = { "abc" };
//	//int i = my_strlen2(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

















//void reverse(char arr[], int lift, int right)
//{
//	if (lift < right)
//	{
//		char tmp = arr[lift];
//		arr[lift] = arr[right];
//		arr[right] = tmp;
//		reverse(arr, lift + 1, right - 1);
//	}
//
//
//}
//
//int main()
//{
//	char arr[] = { "abcdefg" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int lift = 0;
//	int right = sz - 2;
//	reverse(arr,lift,right);
//	printf("%s\n", arr);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int n = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了，它是第%d个位置\n", i+1);
//			break;
//		}
//		if (i == 10)
//			printf("没找到。\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int n = 0;
//	long ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	//printf("%d\n", ret);
//	printf("%d\n", sum);
//
//	return 0;
//}




//int main()
//{
//	float i = 0.0f;
//	scanf("%f", &i);
//	float ret = i * i;
//	printf("%2l\n", ret);
//
//
//	return 0;
//}









//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++)
//		k++;
//	printf("%d\n", k);
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	do
//	{
//
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//
//	} while (i <=10);
//	return 0;
//}