#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组---数组--存放指针的数组
//	int* arr[10];
//	//数组指针
//	//int*p3;整形指针---指向整形的指针
//	//char*p4//字符指针--指向字符的
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址，pa就市一个指针
//	
////
////
////}
//void test(int arr[])
//{
//}
//void test(int arr[10])
//{
//}
//void test(int* arr)
//{
//}
//void test(int*arr[20])
//{}
//void test(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//}
//void test(int arr[3][5])
////{}
//void test2(int arr[][5])
//{}
//void test1(int arr)
//{}
////void test2(int arr[3][])//error
////{}
////void test(int *arr)//err
//void test(int (*arr)[5])//arr和*结合是一个指针，指向的是一个数组
////数组5个元素每个元素是整形
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//    test1(arr);
//	test2(arr);
//	return 0;
//}
//数组指针--是指向数组的指针
// 
//函数指针--是指向函数的指针  --存放函数地址的一个指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a,b));
//	return 0;
//}
//&函数名和函数名都是函数的地址
//函数指针和数组指针规律一样
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	/*printf("%d\n", &Add);
//	printf("%d\n", Add);*/
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void(*p)(char*)=print;
    char* (*p)("hello bit");
	return 0;
}