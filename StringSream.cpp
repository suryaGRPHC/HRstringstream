#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<int> Fun_SS(string str) {
    stringstream ss;
    int string_int;
    vector<int> num;
    
    ss << str;             
    while(!ss.eof()){  
        int i;
        char ch;
        ss >> i >> ch;      
        num.push_back(i);  
    }

    return num;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = Fun_SS(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
