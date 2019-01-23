#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item book1, book2;
	std::cin >> book2;			//类的初始化格式一样再相加
	while(std::cin >> book1){
		book2 += book1;			//if不先格式化book2，用系统的默认值相加book1 输出没有编号
	}
	std::cout << book2 << std::endl;
	return 0;
}