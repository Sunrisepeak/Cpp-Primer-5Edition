#include<stdio.h>
int main()
{
	double _ = 2.2;
	double &b = _;
	/*c++ primer 5 47p 不能定义指向引用的指针*/
	double *p = &b;
	printf("%.1f\n",*p);
	return 0;
}