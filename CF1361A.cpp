#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		if(n%2==0)
			cout<<(n/2)<<endl;
		else
			cout<<(n+1)/2<<endl;
	}
	return 0;
}
