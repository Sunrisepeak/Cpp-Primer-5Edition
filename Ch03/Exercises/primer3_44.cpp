#include<iostream>
#include<iterator>
using namespace std;
//defined alias of type
using int_array1 = int[3];		// method1 c++11
typedef int int_array2[3];		// method2
int main()
{
	int ai[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	//print1
	for(int_array1 : ai){
		for(int value : int_array1)
			cout << value << " ";
		putchar('\n');
	}
	cout << endl;
	//print2
	for(int_array2 *p = begin(ai); p != end(ai); p++)
	{
		for(int *it = begin(*p); it != end(*p); it++)
			cout << *it << " ";
		putchar('\n');
	}
	return 0;
}
