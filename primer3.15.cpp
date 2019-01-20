#include<iostream>
#include<vector>
#include<string>
using std::vector; using std::cin; using std::cout;
int main()
{
	std::string n;
	vector<decltype(n)> v;
	while(cin >> n)
		v.push_back(n);
	if(!v.empty())
		for(auto c : v)
			cout << c << " ";
	putchar('\n');
	return 0;
}