//
// Created by xulzee on 2018/8/18.
//

#include "sort.h"
#include "Utils.h"


void bubble_sort(std::vector<int> &array){
    if(array.empty() || array.size() < 2)
        return;
    for(auto end = array.end(); end > array.begin(); --end){
        for(auto i = array.begin(); i < end - 1; ++i){
            if(*i > *(i+1)) {
                swap_int(*i, *(i+1));
                print_vector_array(array);
            }
        }
    }
}

void bubble_sort_reverse(std::vector<int> &array){
    if(array.empty() || array.size() < 2)
        return;
    for(auto end = array.end(); end > array.begin(); --end){
        for(auto i = array.begin(); i < end - 1; ++i){
            if(*i < *(i+1)) {
                swap_int(*i, *(i+1));
                print_vector_array(array);
            }
        }
    }
}
