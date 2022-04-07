#include <stdio.h>
//int main()
//{
//	int a[] = { 1,6,3,5,7,8,9 };
//	int* p, i, n;
//
//	p = a;
//	n = sizeof(a) / sizeof(a[0]);
//
//	printf("%p  %p  %p\n", a, a + 1, a + 2);
//	
//
//	for (i = 0; i < n; i++)
//
//		printf("%d %d %d %d\n", a[i], *(p + i), *(a + i), p[i]);
//	
//	puts("");
//	
//	p++;
//	printf("%d\n", p[1]);
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { {2,2},{1,4},{5,6} };
//	int* p, i, n;
//	
//	n = sizeof(a) / sizeof(a[0]);
//	printf("%d\n", sizeof(a) / sizeof(a[1]));
//	p = &a[0][0];
//	printf("%p  %p\n", a, a + 1);
//	printf("%p  %p\n", p, p + 1);
//	
// 	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", * (p + i));
//
//	}
//	return 0;
//}
int main()
{
	int a[3][2] = { {1,6},{2,6},{3,6} };
	int(*p)[2], i, j;
	p = a;
	printf("%p  %p\n", a, a + 1);
	printf("%p  %p\n", p, p + 1);
	  

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d,  %d,  %d,   %d", a[i][j], p[i][j], *(*(a + i) + j), *(*(p + i) + j));
		}


	}

	return 0;


}