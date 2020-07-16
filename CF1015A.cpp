#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int* data = new int[m+1];
	for(int i=0;i<m+1;++i){
		data[i]=0;
	}
	for(int i=0;i<n;++i){
		int from , to;
		cin >> from >> to;
		for(int j=from;j<=to;++j){
			data[j]=1;
		}
	}
	vector<int> ans;
	for(int i=1;i<=m;++i){
		if(data[i]==0){
			ans.push_back(i);
		}

	}
	cout<<ans.size()<<endl;
	for(unsigned int i=0;i<ans.size();++i){
		if(i==0){
			cout<<ans[i];
		}
		else
			cout << " " << ans[i];
	
	}
	cout << endl;

	return 0;
}

