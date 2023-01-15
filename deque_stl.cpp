#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

// Given a set of arrays of size N and an integer K, 
// you have to find the maximum integer for each and 
// every contiguous subarray of size K for each of 
// the given arrays.


void printKMax(int arr[], int n, int k){
    //init
    std::deque<int> deq(k);
    for(int i=0;i<k;i++){
        while((!deq.empty())&&(arr[i]>=arr[deq.back()])){
            deq.pop_back();
        }
        deq.push_back(i);
    }
    //begin
    for(int i=k;i<n;i++){
        std::cout << arr[deq.front()] << ' ';
        while((!deq.empty())&&(deq.front()<=i-k)){
            deq.pop_front();
        }
        while((!deq.empty())&&(arr[i]>=arr[deq.back()])){
            deq.pop_back();
        }
        deq.push_back(i);
    }
    std::cout << arr[deq.front()] << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}