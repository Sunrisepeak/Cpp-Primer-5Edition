#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct T {
    char mem[10];
};

unsigned char f();

int main() {
    int x = 1, y = 2;
    T *p;
    cout << "(sizeof x) < y): " << sizeof x + y << endl
	 << "sizeof(p->mem[1]): "  << sizeof p -> mem[1] << endl
	 << "sizeof(f()): "  << sizeof f() << endl;
    return 0;
}
