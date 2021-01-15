#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    do {
	string s2;
	cin >> s1 >> s2;
	cout << (s1 < s2 ? s1 : s2) << endl;
    } //while (s1 < s2);    // because of s2 range in code-block {}
    while (s1 != "quit");
    return 0;
}
