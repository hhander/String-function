#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

#include <stdio.h>
#include <ctype.h>

void* my_memcpy(void* dest, void* sour, size_t num)
{
	if ((char*)dest < (char*)sour)
	{
		while(num--)
		{
			*(char*)dest = *(char*)sour;
			++(char*)dest;
			++(char*)sour;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest+num) = *((char*)sour+num);
		}
	}

}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memcpy(arr,arr+2, 20);
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);

	}
	return 0;
}






//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[30];
//	memcpy(arr2, arr1, 20);
//	memcpy(arr1 + 2, arr2,20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0; 
//}






//void* my_memcpy(void* dest, void* sour,size_t num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*(char*)dest = *(char*)sour;
//		++(char*)dest;
//		++(char*)sour;
//	}
//
//}
//
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1,20);
//	return 0;
//}





//int main()
//{
//	char arr[] = "Ajsn jsdn jsdn";
//	int i = 0;
//	int j = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	arr[0] = toupper(arr[0]);
//	/*printf("%s", arr);*/
//	while (arr[j])
//	{
//		if ((arr[j] == ' ')&&(arr[j+2]!=' '))
//		{
//			arr[j + 1] = toupper(arr[j + 1]);
//		}
//		j++;
//	}
//	printf("%s", arr);
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//		{
//			c = tolower(c);
//		}
//		putchar(c);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	/*char* ret = strerror(1);*/
//	/*printf("%s", ret);*/
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{ 
//		printf("success");
//	}
//	return 0;
//}




//int main()
//{
//	char* arr = "abcdef";
//	char ch[] = 'bcd';
//	char* ret = strchr(arr, ch);
//	printf("%s", ret);
//}






//int main()
//{
//	/*char arr[]= "934352541@qq.com";
//	char* p = "@.";*/
//	char arr[] = "192.168.31.211";
//	char* p = ".";
//	char buf[1024];
//	strcpy(buf, arr);
//	char* ret= NULL;
//	printf("%s", ret);
//	for (ret = strtok(buf, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	
//	return 0;
//}












//char* my_strstr(char* p1, char* p2)
//{
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 && *s2 && (!(*s1 - *s2)))
//		{
//			s1++;
//			s2++;
//		}
//		if (!(*s2))
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//
//}
//
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("找不到子串");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//	return 0;
//}










//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p1 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//
//
//}
//
//
//
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("not in");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//	return 0;
//}






//void swap_odd(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		while (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_odd(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}








//int num_find(int arr[3][3], int k,int* px,int* py)
//{
//	while (*px <= 2 && *py >= 0)
//	{
//		if (arr[*px][*py] > k)
//		{
//			(*py)--;
//		}
//		else if (arr[*px][*py] < k)
//		{
//			(*px)++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	int x = 0;
//	int y = 2;
//	scanf("%d", &k);
//	int ret = num_find(arr, k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了");
//		printf("%d %d", x, y);
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}








//////////////char* my_strstr(const char* dest, const char* sour)
//////////////{
//////////////	int lens_count = strlen(sour);
//////////////	while (*dest != *sour)
//////////////	{
//////////////		dest++;
//////////////	}
//////////////	while (lens_count&&(*dest==*sour))
//////////////	{
//////////////		lens_count--;
//////////////	}
//////////////	if (lens_count == 0)
//////////////	{
//////////////		return dest;
//////////////	}
//////////////	else
//////////////	{
//////////////		return NULL;
//////////////	}
//////////////}



//int main()
//{
//	char* arr1 = "abcdef";
//	char* arr2 = "ce";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("not exit");
//	}
//	else
//	{
//		printf("%s", ret);
//	}
//	return 0;
//}





//int my_strncmp(const char* dest, const char* sour, int count)
//{
//	while (count&&(*dest == *sour))
//	{
//		dest++;
//		sour++;
//		count--;
//	}
//	if (count == 0)
//	{
//		return 0;
//	}
//	 
//}


//char* my_strncpy(char* dest, char* sour, int count)
//{
//	assert(dest && sour);
//	char* ret = dest;
//	while (count&&*sour!='\0')
//	{
//		*dest++ = *sour++;
//		count--;
//	}
//	if (count)
//	{
//		*dest++ = '\0';
//		
// 
// 
//	}
//	return dest;
//}
//
//
//
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "$$$";
//	/*int ret = my_strncmp(arr1,arr2,6);*/
//	my_strncpy(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}