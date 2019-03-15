 #include<iostream>
 int main()
 {
	 int n = 50, s = 0;
	 while(n<=100) s += n++;
	 std::cout<<s;
	 return 0;
 }