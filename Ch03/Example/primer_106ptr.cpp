//test βָ������ �͵���������
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
//	if(vv)		//��������Ա���ܴ�ӡ,�ͷ�����ֵ���������������Ա������ͬ����
				//���бȽ�����
//		cout << "β���������β��ָ����ȣ�" << v_t << endl;
	for(auto it = v.begin(); it != v.end(); it++,v_t++)
	{
		//������������������ָ������(����ָ����������ָ��)
		cout << &(*it) << ": " << *it << endl;		//����ֱ�ӷ��ʵ�����it ͨ��&(*it)����
		cout << v_t << ": " << *v_t << endl;
		cout <<"---------------------------\n";
	}
//	cout << "&v[0]:" << v;	//���������ɴ�ӡ
	cout << "&v[0]:" << (&v[10] - 1)<< "-- "<<*((&v[10] - 1));	//�ȷ������е�ַ�ڴ��е�ֵ����&<��ļӼ�1�Ƕ�Ӧ���͵��ֽ�>
	return 0;
}
