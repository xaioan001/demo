//指针进阶
#include <stdio.h>
//void test(int arr[])
//{
//
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    printf("%d\n", sz);
//}
//int main()
//{
//    
//    int arr[10] = { 0 };
//    test(arr);
//    return 0;
//}
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;*/
//	char arr[] = "abcdef";
//	char* pc = arr;
//	
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";
//	printf("%s\n", p);	
//	return 0;
//}
//segentfault   网站
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//指针数组
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];//存放整形指针的数组-指针数组
//	char* pch[5];//存放字符指针的数组-指针数组
//
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//    int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", * (parr[i]+j));
//		}
//	}
//	return 0;
//}
//数组指针--指针
//int main()
//{
//	int* p = NULL;//p是整形指针-指向整形的指针
//	char* pc =NULL;//pc是字符指针-指向字符的指针
//	//数组指针-指向数组的指针--存放数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;  &arr取的是整个数组的元素
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x;i++ )
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
void print2(int (*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{ 
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i)+j));
		}
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return  0;
}

