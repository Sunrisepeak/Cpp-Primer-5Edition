#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item book, flag;
	if(std::cin >> flag)
	{
		int count = 1;
		while(std::cin >> book)
		{
			if(flag.isbn == book.isbn)
				count++;
			else
			{
				std::cout << flag.isbn << " is " << count << std::endl;
				flag = book;
				count = 1;
			}
		}
		std::cout << flag.isbn << " is " << count << std::endl;
	}
	return 0;
}
