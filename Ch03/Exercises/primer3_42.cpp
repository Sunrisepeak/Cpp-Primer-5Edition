#include<iostream>
#include<vector>
<<<<<<< HEAD
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
=======
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
>>>>>>> a5b35a78d6b95f4fddbb995d17b14e29d51a84f5
}
