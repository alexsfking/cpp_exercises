#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*
Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order. 
Here are some of the frequently used member functions of sets:

    Declaration:
        set<int>s; //Creates a set of integers.
    Size:
        int length=s.size(); //Gives the size of the set.
    Insert:
        s.insert(x); //Inserts an integer x into the set s.
    Erasing an element:
        s.erase(val); //Erases an integer val from the set s.
    Finding an element:
        set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
        Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    int q_type;
    int q_index;
    std::set<int> s;
    std::cin >> q;
    for(int i=0;i<q;i++){
        std::cin >> q_type >> q_index;
        if(q_type==1){
            s.insert(q_index);
        } else if(q_type==2){
            s.erase(q_index);
        } else {
            if(s.count(q_index)){
                std::cout << "Yes" << endl;
            } else {
                std::cout << "No" << endl;
            }
        }
    }
    return 0;
}



