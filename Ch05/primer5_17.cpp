#include <iostream>
#include <vector>

using namespace std;

bool isPrefix(const vector<int> &v1, const vector<int> &v2) {
    int minSize = v1.size() > v2.size() ? v2.size() : v1.size();
    for (int i = 0; i < minSize; i++) {
	if (v2[i] != v1[i])
	    return false;	    
    }
    return true;

}

int main() {
    vector<int> v[2];
    int vNums = 2;
    while (vNums--) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    int temp;
	    cin >> temp;
	    v[vNums].push_back(temp);
	}
    }
    cout << isPrefix(v[0], v[1]) << endl;
    return 0;
}
/*

4 0 1 1 2
7 0 1 1 2 3 5 8

*/
