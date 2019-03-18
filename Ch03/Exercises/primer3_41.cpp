#include<iostream>
#include<vector>
#include<iterator>	//inc~ begin() and end()
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	//example 1 init to 1-6 by array
	std::vector<int> v1(std::begin(a), std::end(a));
	for(int value : v1)
		std::cout << value << " ";
	putchar('\n');

	//example 2 chose a few elem that is belong array_a: 2 - 4
	std::vector<int> v2(a+1, a+4);
	for(int value : v2)
		std::cout << value << " ";
	putchar('\n');
    return 0;
}
