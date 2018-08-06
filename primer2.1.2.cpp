#include<iostream>
int main()
{
	unsigned  u = 10, u1 = 10, u2 = 42;
	int i = -42;
	
	std::cout << (unsigned)i << std::endl;
	std::cout<< u + i << std::endl;
	std::cout << u1 - u2 << std::endl;
	return 0;
}