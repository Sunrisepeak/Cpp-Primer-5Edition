#include<iostream>
#include<vector>
#include<iterator>		//begin(), end()
int main()
{
	int a[10];
	std::vector<int> v1{1, 2, 3, 4, 5, 6};
	for(decltype(v1.size()) i = 0; i < v1.size(); i++)
	{
		a[i] = v1[i];
	}
	for(auto it = std::begin(a); it != a + v1.size(); it++)
		std::cout << *it << " ";
	putchar('\n');
    return 0;
}
