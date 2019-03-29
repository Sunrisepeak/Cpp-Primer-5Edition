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
	//print 1
	for(int (&q)[3] : ai){	//note: q's type should is "int (&q)[arr_len]",
		for(int value : q)	//because of line can change ptr_type to it in line.
			cout << value << " ";
		putchar('\n');
	}
	cout << endl;
	
	//print 2
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			cout << ai[i][j] << " ";
		putchar('\n');
	}
	cout << endl;

	//print3
	for(int (*p)[3] = begin(ai); p != end(ai); p++)
	{
		for(int *it = std::begin(*p); it != std::end(*p); it++)
			cout << *it << " ";
		putchar('\n');
	}
	cout << endl;
	return 0;
}
