#include <stdio.h>
#include <math.h>


//int main()
//{
//	//水仙花数
//	int i = 0;
//	for(i=100;i<1000;i++)
//	{
//		int j = i / 100;99
//		int k = i % 10;
//		int l = (i % 100 - k)/10;
//		if (j * j * j + k * k * k + l * l * l == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//  每一位上的数字的 n(这个数有几位)次方 的 和 = 这个数
// 
//int main()
//{
//	int i = 0;
//	for ( i = 0; i <=100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}