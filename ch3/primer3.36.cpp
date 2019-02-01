#include<iostream>
#include<vector>
int main()
{
    std::cout << "---------------arr compare of ptr_values----------------" << std::endl;
    int arr1[10]{0}, arr2[10]{0};
    int *p1 = arr1, *p2 = arr2;
    for(; p1 != &arr1[10] && p2 != &arr2[10]; p1++, p2++)
    //this is ptr of arr_end element for judgement condition
        if(p1 != p2)
            std::cout << "it's not equal that arr1 and arr2 compare comsquence"
                      << std::endl
                      << *p1 << " " << *p2 << "---values\n"
                      << p1 << " " << p2 << "---ptr\n";
        else 
            std::cout << "match success_arr of values" << std::endl;

    std::cout << "---------------vector compare of object--------------" << std::endl;
    std::vector<int> v1(0),v2(0);
    if(v1 == v2)
        std::cout << "vector object match success about their object" 
                  << std::endl;
    else
        std::cout << "this failure." << std::endl;
    return 0;
}
