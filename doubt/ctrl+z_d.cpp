#include<iostream>
int main()
{
	char book;
	while(std::cin >> book)	
	{
		std::cout << book << std::endl;
	}
	return 0;
}
/*对于crtl+z和ctrl+d结束输入的不同情况解释
* 1.在输入其他数据后面加，int型会当结束符号，字符串会当字符读取
* 2.非int型直接输入 ctrl+z 可以直接识别是结束符，ctrl+d会当字符读取，
*   当输入第二个ctrl+d时才能结束（也就是执行第一个输入？）
* 3.测试环境dos+cl
*/