#include <stdio.h>
#include <string.h>

typedef int (*pfunc)(int,int);
typedef void(*prtfunA)(void);
typedef void(*prtfunB)(int);

void fun_a(void)
{
	printf("这是a函数\n");
}

void fun_b(int b)
{
	printf("这是b函数，输入的数字是：%d\n",b);
}

void usefuna(prtfunA p)
{
	p();
}

void usefunb(prtfunB p,int n)
{
	p(n);
}

int add(int a,int b)
{
	return a+b;
}

char *func(char *str1,char *str2)
{
	if(strlen(str1)>strlen(str2))
	{
		return str1;
	}
	else
	{
		return str2;
	}
}

int main(void)
{
	char *str1="C Language";
	char *str2="C is very great!";
	char *str3=NULL;
    int value=0;
	str3= func(str1,str2);
	pfunc  add_0=add;
	value=(add_0)(3,3);
	printf("long string=%s\n",str3);
	printf("value=%d\n",value);

	usefuna(fun_a);
	usefunb(fun_b,5);
	printf("测试这是新添加的一行\n")；//
	return 1;
}
