#include <iostream>
#include <string>

using namespace std;

int main() {
    string ans, currStr, input;
    int ansCnt = 0, currCnt = 0;
    cin >> currStr;
    currCnt = 1; 
    while (cin >> input) {
	 if (input == currStr) {
	     currCnt++;
	 } else {
	     if (currCnt > ansCnt) {
		ansCnt = currCnt;
		ans = currStr;
	     }
	     currStr = input;
	     currCnt = 1;
	 }
    }
    cout << ans << endl;
    return 0;
}
