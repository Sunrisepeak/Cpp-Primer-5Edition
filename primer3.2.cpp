#include<iostream>
#include<string>
using namespace std;
void getLineAndPrint()
{
	string line;
	//一次读取一行(包括空白字符),最后丢弃换行符<空白符>('\n')
	while(getline(cin, line))	//可读取未知数量的行，直到遇到结束符
	{
		if(line[0] == 'q')
			break;
		cout << line << endl;
	}
}
void getWordAndPrint()
{
	string word;
	/*用输入运算符读取字符串时，
	string对象会自动忽略开头的空白字符(空格符、换行符、制表符)
	并从第一个真正的字符开始读起，直到遇见下一处空白符为止,
	注意：遇到的这个空白符并不读取(如换行符,并没有被读取)*/
	while(cin >> word)			//可读取未知数量的string，直到文件末尾
	{
		if(word[0] == 'q')
			break;
		cout << word << endl;
	}
}
int main()
{
	string n;
	//提示信息
	while(1)
	{
		cout << "please choice a model:\n"
			 << "\t1:getWordAndPrint\n"
			 << "\t2:getLineAndPrint\n"
			 << "\tq:quit\n>>";
		//input info
		cin >> n;		//这行的换行符没有被读取
		getchar();		//吸收输入信息行的换行符('\n')
		if(n[0] == 'q')
			break;
		if(n[0] == '1')
			getWordAndPrint();
		else if(n[0] == '2')
			getLineAndPrint();
		else cout << "enter error!"<< endl;
	}
	cout << "exiting。。。";
	return 0;
}