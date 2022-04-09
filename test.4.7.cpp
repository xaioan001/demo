 #include <stdio.h>
//int main()
//{
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));*/
	//int a = 0x11223344;
	//int*pa=&a;
	//int b = 0x55667788;
	//int* pb = &b;
	//pb = 0;
	////char*pc = &a;
	//printf("%p\n", pa);
	//printf("%p\n", pb);
	////printf("%p\n", pc);
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(double));*/
	//指针类型决定了：指针走一步走多远（指针的步长
	/*int* p; p + 1-- > 4
		char* p;p+1-->1*/
	//int arr[10] = { 0 };
	//int*p=arr;//数组名-收元素地址
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	  *(p + i) = 1;
	//}
	//野指针
	//局部变量不初始化，默认是随机值
	//指针越界



//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//}
//指针减指针得到的是中间元素个数必须是同一个数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '0');
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen--求字符串长度
//	//递归--模拟实现了strlen-计数器的方式1，
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素的地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//&arr-&数组名-数组名不是首元素地址--数组表示整个数组-&数组名 
//	//取出的是整个数组的地址
//    //sizeof（arr)表示计算整个数组大小
//	printf("%p\n", arr+1);//地址-首元素的地址
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	printf("%p\n", *(arr));//地址-首元素的地址
//	printf("%p\n", *(&arr[0]));
//	printf("%p\n", *(&arr));
//
//}
//指针数组---数组--存放指针的数组
//数组指针---指针
// int    arr[10]
// int*   arr[10]---指针数组
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
		
	}
	return 0;

}

