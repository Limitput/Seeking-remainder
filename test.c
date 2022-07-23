#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int m = 0;
//	printf("请输入一个数");
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YSE\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}
//以上为上一个项目
int main()
{
	int a = 0;
//a为要输入的值
	scanf("%d", & a);
	if (a % 2 == 0)
		printf("%d\n", a);
	else
		printf("no");

	return 0;
}
