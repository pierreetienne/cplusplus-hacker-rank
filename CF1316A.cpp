#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >>n >> m;
		int* data = new int[n];
		for(int i=0;i<n;++i){
			cin >> data[i];
		}
		for(int i=1;i<n;++i){
			if(data[i]>0){
				if(data[0] < m){
					int falta = m - data[0];
					if(falta >0){
						int p = data[i] - falta;
						if(p >= 0){
							data[0] += falta;
							data[i] -= falta;
						}
						else if(data[i] >0){
							data[0] += data[i];
							data[i] = 0;
						}
						
					}
				}
			}
		}
		cout << data[0] << endl;
	}
	return 0;
}
