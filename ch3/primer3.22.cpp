#include<iostream>
#include<vector>
#include<string>
using std::cin; using std::cout;
int main()
{
	std::vector<std::string> v;
	std::string word;
	while(cin >> word)
		v.push_back(word);
	if(!v.empty())
	{
		auto &c = v[0];
		for(decltype(v[0].size()) i = 0; i < v[0].size(); i++)
		//	v[0][i] = toupper(v[0][i]);		//access variable_method1
			c[i] = toupper(c[i]);
	}
	cout << v[0];
	putchar('\n');
	return 0;
}
