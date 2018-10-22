#include<iostream>
using namespace std;
int main()
{
	const int i = 42;
	auto j = i;				//int
	j++;							//......test
	const auto &k = j;		//常量引用 j 不是常量
	auto *p = &i;			//指向常量的指针
	p = &j;							//......test
	const auto j2 = i;		//int常量
//	j2 = 4;							//j2是常量不能赋值......error
	const auto &k2 = i;		//常量引用
	cout << "i:" << i << "\n"
		 << "j:" << j << "\n"
		 << "k:" << k << "\n"
		 << "*p:" << *p << "\n"
		 << "j2:" << j2 << "\n"
		 << "k2:" << k2 << endl;
	return 0;
}