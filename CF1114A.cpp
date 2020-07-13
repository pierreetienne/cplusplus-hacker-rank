#include <iostream>
using namespace std;
int main(){
	int x,y,z;
	int a,b,c;
	cin >> x >>y >>z;
	cin >>a >>b >>c;
	string res = "NO";
	if(a>=x){
                a-=x;	
		int v = a+b;
		if(v>=y){
			v-=y;
			v+=c;
			if(v>=z)
				res = "YES";
		}
	}
	cout<<res<<endl;

	return 0;
}
