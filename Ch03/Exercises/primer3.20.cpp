#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> store;
	int input;
	while(cin >> input)
		store.push_back(input);
	for(decltype(store.size()) i = 0; i <= store.size()/2; i++)
		cout << store[i] << " + "<< store[store.size() - i - 1] 
			 << " = " << store[i] + store[store.size() - i - 1] << endl;
	return 0;
}
