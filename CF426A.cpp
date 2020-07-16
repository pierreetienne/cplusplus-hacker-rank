#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n , s;
	cin >> n >> s;
	int* data = new int[n];
	for(int i=0;i<n;++i){
		int v;
		cin >> v;
		data[i]=v;
	}
	sort(data, data+n);

	int sum = 0;
	for(int i=0;i<n-1;++i){
		sum+=data[i];
	}
	if(sum<=s){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

		


	return 0;
}
