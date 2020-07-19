#include <iostream> 
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int* index = new int[101];
	bool* v = new bool[101];
	for(int i=0;i<101;++i){
		v[i]=false;
		index[i]=-1;
	}
	int diff = 0;
	for(int i=0;i<n;++i){
		int x;
		cin >> x;
		if(!v[x]){
			v[x] = true;
			index[x] = i;
			diff++;
		}
	}
	if(diff >= k){
		cout << "YES" << endl;
		int d = 0;
		for(int i=1;i<101;++i){
			if(v[i]){
				if(d==0)
					cout << index[i]+1 ;
				else 
					cout << " " << index[i]+1;
				d++;
				if(d==k)
					break;
			}
		}
		cout << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
