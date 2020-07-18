#include <iostream>
#include <algorithm>
using namespace std;
int max(int a, int b){
	if(a>=b)
		return a;
	return b;
}
int min(int a, int b){
	if(a<=b)
		return a;
	return b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x , y , z;
		cin >> x >> y >> z;
		int* m = new int[3];
		m[0] = x;
		m[1] = y;
		m[2] = z;
		sort(m,m+3);
		if(m[0]==m[1] && m[1]==m[2]){
			cout << "YES" << endl;
			cout << m[0] << " " << m[0] << " " <<m[2] << endl;
		}else if(m[0]==m[1] && m[0] > m[2]){
			cout << "YES" << endl;
			cout << max(1,m[2]-1) << " " << m[0] << " " <<m[2] << endl;
		}else if(m[1]==m[2] && m[1] > m[0]){
			cout << "YES" << endl;
			cout <<  max(1,m[0] -1 )<< " " << m[0] << " " <<m[2] << endl;
		}else if(m[0]==m[2] && m[0] > m[1]){
			cout << "YES" << endl;
			cout << max(1,m[1]-1) << " " << m[0] << " " <<m[1] << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
	return 0;
}
