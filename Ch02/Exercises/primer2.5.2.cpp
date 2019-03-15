#include<iostream>
using namespace std;
int main()
{
	auto i = 3;			//这里i会被定义为整型
	auto j = 3.23;		//这里i会被定义为浮点型
	auto k = i + j;		//由于初始化表达式运算的结果是浮点型这里k也是浮点型

//	auto a = 1, b = 2.2;		//error
	auto c = 1, d = 2;	
	//查看i，j，k类型的字节大小
	cout << "i:" << sizeof(i) << "\n"
		 << "j:" << sizeof(j) << "\n"
		 << "k:" << sizeof(k) << "\n"
		 << "c:" << c << "--sizeof:"<< sizeof(c) << "\n"
		 << "d:" << d << "--sizeof:"<< sizeof(d) << endl;
	return 0;
}