#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item book;
	/*有时候会要两次ctrl+data才能结束输入（当输入类型为字符（串）时），第一次ctrl+d 和回车是输入（系统默认当字符读取了），第二个回车是对输出的ctrl+D执行*/
	while(std::cin >> book)		//ctrl+D要连续两次
	{
		std::cout << book << std::endl;
	}
	return 0;
}