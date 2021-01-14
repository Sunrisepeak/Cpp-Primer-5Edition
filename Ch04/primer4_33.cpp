#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int x = 0, y = 0;
    auto z = (true ? ++x, ++y : --x, --y);	// ((true ? ++x, ++y : --x), --y) not execute --x.
    cout << x << " " << y << " " << z << endl;	// 0 0 1 --> ans: 1 0 0
    return 0;
}
