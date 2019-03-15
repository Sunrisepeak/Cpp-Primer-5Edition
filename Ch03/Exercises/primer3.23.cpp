#include<iostream>
#include<vector>
#include<random>
#include<ctime>
using std::vector;
using std::cout;
/*achievement function of random_number generator by c++11 provide r_engine
 *set range of random number by min and max
 *set array's values(vector<unsigned type) quantity by 'n' variable
 */
std::vector<unsigned> random_generator(const unsigned min, const unsigned max,unsigned n)
{
//	static std::default_random_engine generator(time(NULL));
	static std::default_random_engine generator;
	generator.seed(time(0));
	static std::uniform_int_distribution<unsigned> range(min, max);

	std::vector<unsigned> random_varray;
	while(n--)
	{
		random_varray.push_back(range(generator));
	}
	return random_varray;
}
int main()
{
	vector<unsigned> arr = random_generator(0, 20, 10);
	for(auto &out : arr)
		cout << out << " ";
	putchar('\n');
//	for(auto &i : arr)	//use range-for and change list values can cometure iusse
//		i = 2*i;
	for(auto it = arr.begin(); it != arr.end(); it++)	//by iterator arithmetic
		(*it) *= 2;
	for(auto &out : arr)
		cout << out << " ";
	putchar('\n');
	return 0; 
}
