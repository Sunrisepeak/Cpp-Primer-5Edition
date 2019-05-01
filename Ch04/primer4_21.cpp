#include<iostream>
#include<vector>
int main()
{
	std::vector<int> v;
	v = {1,2,3,4,5,6,7};
	for(auto &value : v)
		value % 2 == 1 ? value *= 2 : value;
	for(auto it = v.begin(); it != v.end(); it++)
		printf("%d ", *it);
	return 0;
}