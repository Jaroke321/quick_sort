#ifndef QUICK_SORT_H_INCLUDED
#define QUICK_SORT_H_INCLUDED



#endif // QUICK_SORT_H_INCLUDED

#include <iostream>
#include <vector>
//define functions

std::vector<int> quick_sort(std::vector<int> arr);

void print_list(std::vector<int> arr);


std::vector<int> quick_sort(std::vector<int> arr){

    //base case
    if(arr.size() < 2){
        return arr;
    }
    //recursive case
    else{
        int pivot = arr[0];

        std::vector<int> lesser;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < pivot){
                lesser.push_back(arr[i]);
            }
        }
        std::vector<int> great;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > pivot){
                great.push_back(arr[i]);
            }
        }

        std::vector<int> new_lesser = quick_sort(lesser);
        std::vector<int> new_greater = quick_sort(great);
        std::vector<int> final;
        for(int i = 0; i < new_lesser.size(); i++){
            final.push_back(new_lesser[i]);
        }
        final.push_back(pivot);
        for(int i = 0; i < new_greater.size(); i++){
            final.push_back(new_greater[i]);
        }
        return final;
    }

}

void print_list(std::vector<int> arr){

    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << "\n";
    }

}
