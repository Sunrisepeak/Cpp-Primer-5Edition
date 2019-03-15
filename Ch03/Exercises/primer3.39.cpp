#include<iostream>
#include<string>
#include<cstring>
int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    const char *cs1 = s1.c_str(), *cs2 = s2.c_str();
    if(s1 > s2)
        std::cout << "this string style(max=)" << s1 << std::endl;
    else
        std::cout << "this string style(max=)" << s2 << std::endl;
    
    std::cout << "c style is following.." << std::endl;
    if(strcmp(cs1, cs2) > 0)
        std::cout << cs1 << std::endl;
    else
        std::cout << cs2 << std::endl;
    return 0;
}
