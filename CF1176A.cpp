#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n ;
		int count = 0;
		long long last = -1;
		bool ws = true;
		while(n>1){
			if(n%2==0){
				n/=2;
			}else if(n%3==0){
				n=(2*n)/3;
			}else if(n%5==0){
				n=(4*n)/5;
			}
			if(last == n){
				ws = false;
				break;
			}

			last = n;
			count++;
		}
		if(ws)
			cout << count << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
