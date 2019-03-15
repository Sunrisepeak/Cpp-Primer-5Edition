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
	for(auto &c : v)
	{
		for(decltype(c.size()) i = 0; i < c.size(); i++)
			c[i] = toupper(c[i]);
		cout << c;
		putchar('\n');
	}
	return 0;
}