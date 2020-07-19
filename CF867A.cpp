#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string v;
	cin >> v;
	int count = 0;
        n=0;
	for(int i=1;i<v.size();++i){
		if(v[i-1]=='F' && v[i]=='S')
			count++;
		if(v[i-1] != v[i]){
			n++;
		}
	}
	int other = n - count ;
	if(other > count )
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
