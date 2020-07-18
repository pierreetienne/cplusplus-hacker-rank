#include <iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		string a,b,c;
		cin >>a >> b >> c;
		int diff=0;
		for(unsigned int i=0;i<a.size();++i){
			if(a[i]!=b[i])
				diff++;
		}
		if(diff==0){
			cout << "YES" << endl;
		}else{
			unsigned int count =0;
			for(unsigned int i=0;i<a.size();++i){
				if(a[i]!=b[i]){
					if(c[i]!=b[i]){
						count+=2;
					}else{
						count++;
					}
				}
			}
			cout << " diff " << count << endl;
			if(count > a.size()){
				cout << "NO" << endl;
			}else{
				cout << "YES" << endl;
			}

		}

	}
	return 0;
}
