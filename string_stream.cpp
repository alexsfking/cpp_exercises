#include <sstream>
#include <vector>
#include <iostream>
//using namespace std;

/*
stringstream is a stream class to operate on strings. It implements input/output operations 
on memory (string) based streams. stringstream can be helpful in different type of parsing. 
The following operators/functions are commonly used here

    Operator >> Extracts formatted data.
    Operator << Inserts formatted data.
    Method str() Gets the contents of underlying string device object.
    Method str(string) Sets the contents of underlying string device object.

Its header file is sstream.

One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").
*/

std::vector<int> parseInts(std::string str) {
	// Complete this function
    std::stringstream ss(str);
    std::vector<int> out;
    std::string temp;
    while(std::getline(ss,temp,',')){
        out.push_back(std::stoi(temp));
    }
    return out;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}
