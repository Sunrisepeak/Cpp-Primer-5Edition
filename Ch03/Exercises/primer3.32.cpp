#include<iostream>
#include<vector>
int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)      
        arr[i] = i;
    std::vector<int> varr;
    for(auto i : arr)
        varr.push_back(i);
    for(auto i : varr)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}   
