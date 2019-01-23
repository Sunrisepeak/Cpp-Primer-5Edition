#include<iostream>
#include<vector>
#include<string>
using std::vector; 
using std::cin; 
using std::cout;
//print values of vector<int> type by iterator
void print_v_int(vector<int> v)
{
	for(auto it = v.begin(); it != v.end(); ++it)	//by begin() and end()
		cout << *it << " ";
	putchar('\n');
}
//print values of vector<string> type by iterator
void print_v_string(vector<std::string> v)
{
	for(auto it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	putchar('\n');
}
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<std::string> v6{10};
	vector<std::string> v7{10, "hi"};
	//print v1~v7's content by call function with it relative.
	print_v_int(v1);
	print_v_int(v2);
	print_v_int(v3);
	print_v_int(v4);
	print_v_int(v5);
	print_v_string(v6);
	print_v_string(v7);
	return 0;
}
