/* 取地址运算和使用指针访问变量 */
#include <stdio.h>

int main(void)
{
	int a=3,*p;						/* 定义整型常量a和整型指针p */

	p=&a;							/* 把变量a的地址赋给指针p，即p指向a */
	printf("a=%d,*p=%d\n",a,*p);	/* 输出变量a的值和指针p所指向变量的值 */
	*p=10;							/* 对指针p所指向的变量赋值，相当于对变量a赋值 */
	printf("a=%d,*p=%d\n",a,*p);
	printf("enter a:");
	scanf("%d",&a);
	printf("a=%d,*p=%d\n",a,*p);
	(*p)++;							/* 将指针所指向的变量加1 */
	printf("a=%d,*p=%d\n",a,*p);

	return 0;
}