#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	string s;
 	cin >> n;
	cin >> s;
	vector<int> ans;
	int cont = 0;
	for(int i=0;i<n;++i){
		if(s[i] =='B'){
			cont++;
		}else{
			if(cont > 0)
				ans.push_back(cont);
			cont = 0;
		}
	}
	if(cont >0){
		ans.push_back(cont);
	}
	cout << ans.size() << endl;
	for(unsigned int i=0;i<ans.size();++i){
		if(i==0)
			cout << ans[i] ;
		else 
			cout << " " << ans[i];
	}
	cout << endl;
	return 0;
}
