#include<iostream>
#include<vector>
using std::vector;
using std::cout;
int main()
{
	vector<int> ivec;
//	ivec[0] = 42;	//segmentation fault
	ivec.push_back(42);	//use push_back function to vector element of add
	cout << ivec[0];
	return 0;
}
