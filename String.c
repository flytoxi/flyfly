#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <assert.h>
#include <string.h>




//  字符串





// strstr

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s1 == *s2) && (*s2 != '\0'))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}


int main()
{
	char* p1 = "abcdefg";
	char* p2 = "def";
	/*char* ret = strstr(p1, p2);*/
	char* ret = my_strstr(p1, p2);

	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}






// strcmp   比较字符的ascll值  


//int main()
//{
//	const char* p1 = "qbcdef";
//	const char* p2 = "qwerty";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//
//	return 0;
//}

// strncmp

//int main()
//{
//	const char* p1 = "aasdaf";
//	const char* p2 = "asdasfasd";
//	int ret = strncmp(p1, p2, 1);
//	printf("%d\n", ret);
//
//	return 0;
//}






























