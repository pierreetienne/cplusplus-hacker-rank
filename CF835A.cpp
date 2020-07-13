#include <iostream>
using namespace std;
int main(){
	int s, v1,v2 , t1, t2;
	cin >> s >> v1 >> v2 >>t1>>t2;
	int x = (s*v1)+(2*t1);
	int y = (s*v2)+(2*t2);
	if(x==y){
		cout << "Friendship";
	}else if(x < y){
		cout << "First";
	}else
		cout << "Second";
	cout << endl;
	return 0;
}
