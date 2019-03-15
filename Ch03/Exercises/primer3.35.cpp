#include<iostream>
int main()
{
    int arr[10];
    int* end = &arr[10]; // Get ptr of next in array end
    for(auto p = arr; p != end; p++)
        *p =0;
    for(auto i : arr)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
