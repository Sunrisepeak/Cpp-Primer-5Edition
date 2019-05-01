#include<iostream>
#include<string>
using std::string;
#include<vector>
using std::vector;
int main()
{
	vector<string>::iterator iter;
	*iter++;
//	(*iter)++;	error: no 'operator++(int)' declared for postfix '++'
//	*iter.empty();	error: 'std::vector<std::basic_string<char> >::iterator' 
					//has no member named 'empty'
	(*iter).empty();
	
//	++*iter;	error: no match for 'operator++' (operand type is 'std::basic_string<char>
	iter++->empty();
	return 0;
}