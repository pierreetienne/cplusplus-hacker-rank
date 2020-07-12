#include <iostream>
#include <cstdio>
#include <vector>
#include <sstream>

using namespace std;


vector<int> parseInts(string str){
	stringstream ss(str);
	vector<int> res;
	int val;
	while(ss>>val){
		res.push_back(val);
		char ch;
		ss>>ch;
	}
	return res;
}


int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(unsigned int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
	    
    return 0;
}
