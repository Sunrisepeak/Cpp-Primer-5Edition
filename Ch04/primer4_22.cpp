#include<iostream>
#include<vector>
int main()
{
	std::vector<int> v;
	v = {23, 78, 34, 92, 66};
	for(int value : v)
		std::cout << value << ( value >= 90 ? " high pass\n" :
									value > 75 ? " pass\n": 
											value > 60 ? " low pass\n": " fail\n"
								);
	return 0;
}