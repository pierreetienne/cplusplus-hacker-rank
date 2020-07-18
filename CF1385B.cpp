#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int s;
		cin >> s;
		int* sol = new int[s];
		int index = 0;
		bool* nums = new bool[s];
		for(int i=0;i<s;++i)
			nums[i] = false;
		for(int i=0;i<2*s;++i){
			int val;
			cin >> val;
			if(!nums[val-1]){
				sol[index]=val;
				index++;
				nums[val-1]=true;
			}
		}
		for(int i=0;i<s;++i){
			if(i==0){
				cout << sol[i];
			}else
				cout << " " << sol[i];
		}
		cout << endl;


	}
	return 0;
}

