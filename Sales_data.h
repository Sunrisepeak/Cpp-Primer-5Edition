#ifndef SALES_DATA_H
#define SALES_DATA_H		//定义预处理变量
#include<string>
struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif