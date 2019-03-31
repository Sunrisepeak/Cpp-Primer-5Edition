#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<iterator>
using namespace std;
int main()
{
	int ai[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	//print1
	for(auto &p : ai){
		for(int value : p)
			cout << value << " ";
		putchar('\n');
	}
	cout << endl;
	//print2
	for(auto p = begin(ai); p != end(ai); p++)
	{
		for(int *it = begin(*p); it != end(*p); it++)
			cout << *it << " ";
		putchar('\n');
	}
	return 0;
}
