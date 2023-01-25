#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Query { 
  public:      
    int array_index;
    int elem_index;
    Query(int a_i, int e_i) {
        array_index=a_i;
        elem_index=e_i;
    }
};
/*
Consider an n-element array, a, where each index i in the array contains a reference to an array of ki integers
(where the value of ki varies from array to array).

Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j 
denotes an index in the array located at a[i]. For each query, find and print the value of element j in the 
array at location a[i] on a new line.
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a;
    for(int i=0;i<n;i++){
        //get lines
        int k;
        vector<int> temp_vector;
        cin >> k;
        a.push_back(temp_vector);
        for(int j=0;j<k;j++){
            int temp;
            cin >> temp;
            a[i].push_back(temp);
        }
    }
    
    //get queries
    int array_index,elem_index;
    vector<Query> query_array;
    for(int i=0;i<q;i++){
        cin >> array_index;
        cin >> elem_index;
        Query queryObj(array_index,elem_index);
        query_array.push_back(queryObj);
    }
    
    //return results
    vector<Query>::iterator ptr; // Declaring iterator to a vector
    for(ptr=query_array.begin(); ptr!=query_array.end();ptr++){
        cout << a[(*ptr).array_index][(*ptr).elem_index] << endl;

    }
    
    return 0;
}
