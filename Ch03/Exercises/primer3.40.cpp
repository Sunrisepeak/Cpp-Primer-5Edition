#include<iostream>
#include<string>
#include<cstring>
int main()
{
    const char s1[] = "Hello World, my name is s1.", s2[] = "hello, whose is this cap.";
    char result[100];
    strcpy(result, s1);
    strcat(result, " ");
    strcat(result, s2);
    std::cout << result<< std::endl;
    return 0;
}
