#include<iostream>
#include<vector>
using std::vector;
int main()
{
	vector<int> t1(10);
	vector<int> t2(10, -1);
	vector<int> t3{1,1,1,1,1,1,1,1,1,1};
	
	vector<vector<int>> s{t1, t2, t3};
	//print t1~t3
	for(auto p : s)
		for(auto outp : p)
			std::cout << outp << std::endl;
	return 0;
}
