//函数指针33
// ( *( void (*) () ) 0 ) ()
//void（*）（）--函数指针类型
//0强制类型转换成：void（*）（） 函数指针类型-0就是一个函数的地址
//  (  void(*)  ()  )0  把  0 强制转换为一个地址
//调用0地址处的参数为无参  返回类型为void的函数
//《c陷阱和缺陷》



//void(*signal(int,void(*)(int)))(int);


//void(  *signal  ( int,     void(*)(int)   )  )  (int); 

//        名字       整形      函数指针类型

// void(*                          )(int)
//       返回类型也是一个函数指针

//pfun_t signal(int,pfun_t)
//typedef void(*pfun_t)
//两句合起来表达上面一个意思
//signal是一个函数声明
//siganl函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型是一个指针，该函数指针指向的函数的参数是int，返回类型是void 

///typedef void(*)(int)   pfun_t;
//typedef void(* pfun_t )(int) 

//名字必须和*靠近

//typedef  unsigned int uint;
// 把这个类型   unsigned int  从新起名字叫  uint


//函数指针数组
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址--函数指针的数组
//	int (*pa)(int, int) = Add;//sub,mul,div
//	//int (*  parr[4]  )
//	//int(*)(int,int)   函数指针数组
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//
//}
//char* my_strcpy(char* dest, const char* src)
////写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
//
//
////写一个函数指针数组pfARR，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const*);
//
//
//char(*pf)(char*, const char*);
//char (*pfArr[4])(char*, const char*);



//转移表


//计算器
//void menu()
//{
//	printf("*********************\n");
//	printf("*********************\n");
//	printf("****1.add   2.sub****\n");
//	printf("****3.mul   4.di*****\n");
//	printf("****5.Xor   0.exit***\n");
//	printf("*********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//
//		if (input >= 1 && input <= 5)
//		{	
//			printf("请输入两个操作数：>");
//		    scanf_s("%d %d", &x, &y);
//		    int ret = pfArr[input](x, y);
//		    printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//
//			printf("退出\n");
//
//		}
//		else
//		{
//			printf("选择错误");
//		}
//	
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	int x = 0; 
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		printf("请输入两个操作数：>");
//		scanf_s("%d %d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x,y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x,y));
//			break;
//		case 4:
//			printf("%d\n", Div(x,y));
//			break;
//		case 0:
//			printf("退出");
//			break;
//		defult:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}
//
//
//回调函数
//回调函数就是一个通过函数指针调用的函数 
//
//void menu()
//{
//	printf("*********************\n");
//	printf("*********************\n");
//	printf("****1.add   2.sub****\n");
//	printf("****3.mul   4.di*****\n");
//	printf("****5.Xor   0.exit***\n");
//	printf("*********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void Calc(int(*pf)(int ,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf_s(" %d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出");
//			break;
//		defult:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}


//指向函数指针数组的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*pfArr[4])(int, int);
//	int  (*(*ppfArr)[4])(int ,int )= &pfArr;
	//int  (*  (  *ppfArr  )[4]  )(int, int) = &pfArr;
	//              指针
	// int (*      )(int,int)
	//ppfArr 是一个数组指针，指针指向的数组有4个元素
	 //指向的数组的每个元素的类型是一个函数指针int(*)(int,int) 





//回调函数
void print(char* str)
{
	printf("hehe:%s", str);

}
void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}



























































