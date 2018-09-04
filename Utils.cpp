//
// Created by xulzee on 2018/8/18.
//

#include "Utils.h"
#include <iostream>


void swap_int(int& i, int& j){
    if(i == j)
        return;
    i = i ^ j;
    j = i ^ j;
    i = i ^ j;
}

void swap_array(int* array, int i, int j) {
    if(i == j)
        return;
    array[i] = array[i] ^ array[j];
    array[j] = array[i] ^ array[j];
    array[i] = array[i] ^ array[j];
}

void print_array(const int* array){
    for(int i=0; i < sizeof(array); i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void print_vector_array(std::vector<int> &array){
    for(auto i : array){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
