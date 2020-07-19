#include <iostream> 
#include <cmath>
using namespace std;
int main(){
	long long n , k ;
	cin >> n >> k;
	long long res = n/k;
	if(res%2!=0)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
