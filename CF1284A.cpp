#include <iostream>
using namespace std;
int main(){
	int N, S;
	cin >> N >> S ;
	string* s = new string[S];
	string* n = new string[N];
	for(int i=0;i<N;++i){
		cin >> n[i];
	}
	for(int i=0;i<S;++i){
		cin >> s[i];
	}
	int q, y;
	cin >> q ;
	while(q--){
		cin >> y;
		--y;
		cout << n[y%N] << s[y%S] << endl; 
	}


	
	return 0;
}
