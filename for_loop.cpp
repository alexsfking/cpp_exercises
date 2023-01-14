#include <iostream>
#include <cstdio>
using namespace std;

void even(int q){
    if(q%2==0){
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}

void output(int j){
    const string englishNumbers[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(j<10){
        cout << englishNumbers[j] << endl;
    } else {
        even(j);
    }
}

int main() {
    // Complete the code.
    int a,b;
    bool flag_a,flag_b=false;
    cin >> a >> b;
    for(int i=a;i<b+1;i++){
        output(i);
    }
    
    return 0;
}
