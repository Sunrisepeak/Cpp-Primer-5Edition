#include<iostream>
#include<vector>
int main()
{
	std::vector<int> v{1,2,3,4,5,6};
	int a[10] = {10};
	for(decltype(v.size()) i = 0; i < v.size(); i++)
	{
		a[i] = v[i];
	}
	for(int i = 0; i < 10; i++)
		std::cout << a[i] << std::endl;
	return 0;
}
