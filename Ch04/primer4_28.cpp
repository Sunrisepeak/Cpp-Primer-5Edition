#include <iostream>

using std::cout;
using std::endl;

int main() {
    char a;
    short b;
    int c;
    long d;
    long long e;
    char *pa = &a;
    int *pc = &c;
    long &rd = d;
    cout << "size(a): " << sizeof(a) << endl
	 << "size(b): " << sizeof(b) << endl
	 << "size(c): " << sizeof(c) << endl
	 << "size(d): " << sizeof(d) << endl
	 << "size(e): " << sizeof e  << endl
	 << "size(pa): " << sizeof pa << endl
	 << "size(pc): " << sizeof pc << endl
	 << "size(rd): " << sizeof rd << endl;
    return 0;
}
