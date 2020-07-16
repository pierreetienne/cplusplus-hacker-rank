#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	getline(cin, s);
	int count = 0;
	int max = 0;
	for(unsigned int i=0;i<s.size();++i){
		if(s[i] <= 'Z' && s[i] >='A')
			count++;
		if(s[i]==' '){
			count = 0;
		}
		if(max < count)
			max = count;
	}
	cout << max << endl;
	return 0;
}
