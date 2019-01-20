//test 尾指针问题 和迭代器问题
#include<iostream>
#include<vector>
using namespace std;
typedef int* int_tailptr; 
int main()
{
	vector<int> v(10, 1);
	int a[10] = {0};
	int_tailptr a_t = &a[10], v_t = &v[0];
	auto vv = v.end();
//	if(vv)		//迭代器成员不能打印,和访问其值，但下面迭代器成员可以与同类型
				//进行比较运算
//		cout << "尾后迭代器和尾后指针相等：" << v_t << endl;
	for(auto it = v.begin(); it != v.end(); it++,v_t++)
	{
		//迭代器仅仅是类似与指针类型(不是指针或是特殊的指针)
		cout << &(*it) << ": " << *it << endl;		//不能直接访问迭代器it 通过&(*it)访问
		cout << v_t << ": " << *v_t << endl;
		cout <<"---------------------------\n";
	}
//	cout << "&v[0]:" << v;	//迭代器不可打印
	cout << "&v[0]:" << (&v[10] - 1)<< "-- "<<*((&v[10] - 1));	//先访问其有地址内存中的值，再&<后的加减1是对应类型的字节>
	return 0;
}
