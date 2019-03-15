 #include<iostream>
 int main()
 {
	 int x1, x2;
	 std::cout<<"please two integer:";
	 std::cin>> x1 >> x2;
	 if(x1 > x2)
	 {
		 x1 = x1 + x2;
		 x2 = x1 - x2;
		 x1 = x1 - x2;
	 }
	 while(x1 <= x2) std::cout<<x1++<<std::endl;
	 return 0;
 }