#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
You are given N integers.
Store the N integers in a vector. Vectors are sequence containers representing 
arrays that can change in size. Sort the N integers and print the sorted order.
*/

int main() {
    int n;
    std::vector<int> v;
    int temp;
    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> temp;
        v.push_back(temp);
    }
    std::sort(v.begin(), v.end());
    for(std::vector<int>::const_iterator i=v.begin(); i!=v.end();++i){
        std::cout << *i << ' ';
    }
    std::cout << '\n';
    return 0;
}
