#include<iostream>
//using namespace std;
void print(int currVal, int cnt)
{
	std::cout << currVal << " occurs "
						<< cnt << " times " << std::endl;
}
int main()
{
	//currVal是我们正在统计的数；我们将读入的新值存入val
	int currVal = 0, val = 0;
	//读取第一个数，并确保确实有数据可以处理
	if(std::cin >> currVal)
	{
		int cnt = 1;		//保存我们正在处理的当前值的个数
		while(std::cin >> val)	//读取剩余的数
		{
		//	std::cout<<"this is debug!"<<std::endl;
			if(val == currVal)	//如果值相同
				++cnt;			//将cnt加1
			else				//否则，打印前一个值的个数
			{
				print(currVal, cnt);
				currVal = val;	//记住新值
				cnt = 1;		//重置计数器
			} 
		}
		//打印文件中最后一个值的个数
		print(currVal, cnt);
	}
	return 0;
}