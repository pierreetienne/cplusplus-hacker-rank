#include <iostream>
using namespace std;
int max(int a, int b){
	if(a>b)
		return a;
	return b;
}

int main(){
	int y, b , r;
	cin >> y >> b >> r;
	int sol = 0;
	int N = r;
	int M = r-1;
	int Q = r-2;
	
	if(M<=b && Q<=y){
		sol = max( N+M+Q,sol);
	}

	N=b+1;
	M=b;
	Q=b-1;
	if(N<=r&&Q<=y){
		sol = max(N+M+Q,sol);
	}
	N=y+2;
	M=y+1;
	Q=y;
	if(N<=r&&M<=b){
		sol = max(N+M+Q,sol);
	}
		
	
	cout << sol << endl;
	return 0;
}
