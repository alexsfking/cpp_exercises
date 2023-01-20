#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, 
you are provided with 1 integer, which denotes a position in the vector. The value at this 
position in the vector needs to be erased. The next query consists of 2 integers denoting a range 
of the positions in the vector. The elements which fall under that range should be removed. The 
second query is performed on the updated vector which we get after performing the first query.
*/

int main() {
    int n;
    int temp;
    std::vector<int> v;
    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> temp;
        v.push_back(temp);
    }
     
    int q1, q2_start, q2_end;
    std::cin >> q1;
    q1=q1-1; //incorrect index for c++
    std::cin >> q2_start >> q2_end;
    q2_start=q2_start-1; //incorrect index for c++
    q2_end=q2_end-1; //incorrect index for c++
    v.erase(v.begin()+q1);
    v.erase(v.begin()+q2_start,v.begin()+q2_end);
    
    std:cout << v.size() << endl;
    for(std::vector<int>::const_iterator i=v.begin();i!=v.end();++i){
        std::cout << *i << ' ';
    }
    
    return 0;
}
