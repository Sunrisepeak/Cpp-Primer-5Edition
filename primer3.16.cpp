#include<iostream>
#include<vector>
#include<string>
using std::vector; using std::cin; using std::cout;
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<std::string> v6{10};
	vector<std::string> v7{10, "hi"};
	for(decltype(v1.size()) i = 0; i < 10; i++)
	{
		if(!v1.empty() && v1.size() - 1 >= i)
		{
			cout << "v1[" << i << "] = " << v1[i];
			putchar('\n');
		}
		if(!v2.empty() && v2.size() - 1 >= i)
		{
			cout << "v2[" << i << "] = " << v2[i];
			putchar('\n');
		}
		if(!v3.empty() && v3.size() - 1 >= i)
		{
			cout << "v3[" << i << "] = " << v3[i];
			putchar('\n');
		}
		if(!v4.empty() && v4.size() - 1 >= i)
		{
			cout << "v4[" << i << "] = " << v4[i];
			putchar('\n');
		}
		if(!v5.empty() && v5.size() - 1 >= i)
		{
			cout << "v5[" << i << "] = " << v5[i];
			putchar('\n');
		}
		if(!v6.empty() && v6.size() - 1 >= i)
		{
			cout << "v6[" << i << "] = " << v6[i];
			putchar('\n');
		}
		if(!v7.empty() && v7.size() - 1 >= i)
		{
			cout << "v7[" << i << "] = " << v7[i];
			putchar('\n');
		}
	}
	return 0;
}