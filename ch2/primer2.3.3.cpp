#include<iostream>
using namespace std;
int main()
{
	int i = 4;
	int *p = &i;	   // p == &i
	int **p1 = &p;	   //*p1 == p
	int ***p2 = &p1;   //*p2 == p1
	cout << &i << endl
		 << i <<endl << endl
		 << p <<endl	
		 << *p <<endl << endl
		 << p1 <<endl
		 << *p1 <<endl
		 << **p1 <<endl	<< endl
		 << p2 <<endl
		 << *p2 <<endl
		 << **p2 << endl
		 << ***p2 <<endl;
	return 0;
}
/*

*
*/
