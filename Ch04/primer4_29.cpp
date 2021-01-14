#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int x[10]; int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl; // 10 * 4 / 4
    cout << sizeof(p) / sizeof(*p) << endl; // 8 / 4 
    return 0;
}
