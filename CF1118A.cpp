#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, a,b;
		cin >> n>>a>>b;
		long long r = (n/2)*min(2*a,b)+(n%2)*a;
		cout << r << endl;
	}
	return 0;
}
