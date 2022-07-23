#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	//有副作用的代码
//	int b = a + 1;
//	int b = ++a;
//	return 0;
//}

//有副作用的宏
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))

//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//--> int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//#define TEST(x,y) printf("test\n")
//int main()
//{
//	TEST();
//	TEST();
//	TEST();
//
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}

//移除宏定义
//#define MAX 100
//
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX
//	return 0;
//}

//(有)条件编译
//写法1
//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//写法2
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
////#if 0
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//#define DEBUG 0

//int main()
//{
////#if defined(DEBUG)
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//
//#ifndef DEBUG
//	printf("haha\n");
//#endif
//	return 0;
//}

//笔试题:模拟实现宏offsetof
#include <stddef.h>

struct S
{
	char c1;
	int a;
	char c2;
};

#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));

	return 0;
}
