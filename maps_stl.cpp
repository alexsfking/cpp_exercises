#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
//using namespace std;

/*
Maps are a part of the C++ STL.Maps are associative containers that store elements formed by a
combination of a key value and a mapped value, following a specific order. The commonly used 
member functions of maps are:

    Map Template:
        std::map <key_type, data_type>
    Declaration:
        map<string,int>m; //Creates a map m where key_type is of type string and data_type is 
        of type int.
    Size:
        int length=m.size(); //Gives the size of the map.
    Insert:
        m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key
        is "hello" and the value associated with it is 9.
    Erasing an element:
        m.erase(val); //Erases the pair from the map where the key_type is val.
    Finding an element:
        map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if
        it is found otherwise returns m.end().
        Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key 
        value then itr==m.end().
    Accessing the value stored in the key:
        To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the 
        iterator using the find function and then by itr->second we can access the value.
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    std::cin >> q;
    int q_type,marks;
    std::string name;
    std::map<std::string,int> m;
    int temp;
    
    for(int i=0;i<q;i++){
        std::cin >> q_type >> name;
        if(q_type==1){
            std::cin >> marks;
            if(m.count(name)){
                m.at(name)+=marks;
            } else {
                m.insert(std::make_pair(name,marks)); 
            }
        } else if(q_type==2){
            m.erase(name);
        } else {
            if(m.find(name)!=m.end()){
                std::cout << m[name] << std::endl;
            } else {
                std::cout << '0' << std::endl;
            }
        }
    }
    return 0;
}
