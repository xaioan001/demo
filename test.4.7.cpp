//qsort
//第一个参数：待排序数组元素地址
//第二个参数：待排序数组元素个数
//第三个参数：待排序数组的每个元素的大小--单位是字节
//第四个参数：是函数指针，比较两个元素的所用函数的地址--这个函数使用者自己实现
//            函数指针的两个参数，待排序的两个元素的地址
//#include<stdio.h>
//int main()
//{
//	//数组名是首元素地址
//	//1.sizeof(数组名)-数组名表示整个数组
//    //2.&数组名-数组名表示整个数组
//	//3.数组名这里表示首元素地址，a+0还是首元素地址，地址大小还是4个字节
//    
//	int a[] = { 1,2,3,4 };
//	printf("%d\n",sizeof(a));//  16   sizeof(数组名）-计算的是数组总大小-单位字节
//	printf("%d\n",sizeof(a+0));//  4/8
//	printf("%d\n",sizeof(*a));//4   数组名表示首元素地址，*a就是首元素，sizeof（*a)就是4
//	printf("%d\n",sizeof(a+1));// 4/8  数组名这里表示首元素地址，a+1是第二个元素的地址，地址的大小就是4/8个字节 
//	printf("%d\n", sizeof(a[1]));  //4  第二个元素的大小
//	printf("%d\n",sizeof(&a));//  4/8  &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));//  16  &a是数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	printf("%d\n", sizeof(&a+1));//  4/8 &a取出的是整个数组，数组地址的大小也是4/8个字节，&a+1跳过整个数组但还是地址4/8
//	printf("%d\n", sizeof(&a[0]));//  4/8
////	printf("%d\n",sizeof(&a[0]+1));//4/8
////	//printf("%d\n", );
////}
//#include<stdio.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//  6 sizeof计算的是数组大小，6*1
//	printf("%d\n", sizeof(arr+0));// 4/8  arr表示首元素地址，arr+0还是首元素的地址，地址的大小是4/8字节
//	printf("%d\n", sizeof(*arr)); // 1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4  //&arr 虽然是数组的地址，但还是地址，地址的大小是4/8
//	printf("%d\n", sizeof(&arr+1));//4 &arr取出的是整个地址，&arr+1是跳过整个数组，地址大小是4/8
//	printf("%d\n", sizeof(&arr[0]+1));//4  第二个元素地址大小也是4/8个字节
//	//printf("%d\n", sizeof());
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值  直到找到\0为止
//	printf("%d\n", strlen(arr+0));//随机值  知道找到\0为止
//    //printf("%d\n", strlen(*arr));// *arr解引用是首元素值97，非法访问
//	//printf("%d\n", strlen(arr+[1]));//98
//	printf("%d\n", strlen(&arr));//随机值  从a开始找\0直到找到\0为止
//	printf("%d\n", strlen(&arr+1));//随机值-6 从a+1开始找\0直到找到\0为止
//	printf("%d\n", strlen(&arr[0]+1));//随机值 从b 开始找\0直到找到\0为止
//}
#include<math.h>
#include<stdio.h>

int main()
{
	double a, b;
	double i = 7;
	a = pow(20, 22);
	printf("%lf\n", a);
	b = fmod(a, i)+6;
	printf("%lf\n",b);

}























































