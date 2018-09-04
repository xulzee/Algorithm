#include <iostream>
#include "Utils.h"
#include "sort.h"
#include <vector>
#include<algorithm>


bool compare(int a,int b)
{
    return a>b;
}

int main() {
    std::vector<int> array{0, 1, 2, 3, 4, 5};
    print_vector_array(array);
    //bubble_sort_reverse(array);
    //print_vector_array(array);
    std::sort(array.begin(), array.end(), std::greater<int>());
    print_vector_array(array);
    return 0;
}