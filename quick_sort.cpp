//implementation of the quick sort algorithm in C++
//This file only contains the calling of the quickosrt function
//All sorting functions can be found in the quick_sort.h file

#include "quick_sort.h"
#include <iostream>

int main (){

    //create list that will eventually be sorted by quick_sort
    std::vector<int> test_list;
    test_list.push_back(5);
    test_list.push_back(10);
    test_list.push_back(4);
    test_list.push_back(2);
    test_list.push_back(7);
    test_list.push_back(20);
    test_list.push_back(1);

    //create vector to store the sorted vector in
    std::vector<int> sorted_list;
    sorted_list = quick_sort(test_list);

    //print sorted list
    print_list(sorted_list);

    return 0;
}
