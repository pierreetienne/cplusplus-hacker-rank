#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main(){

	int n, q;
	scanf("%d %d", &n, &q);
	vector<vector<int>> lines;
	for(int i=0;i<n;++i){
		int size;
		scanf("%d",&size);
		vector<int>info;
		for(int j=0;j<size;++j){
			int value;
			scanf("%d",&value);
			info.push_back(value);
		}
		lines.push_back(info);
	}
	for(int i=0;i<q;++i){
		int x,y;
		scanf("%d %d",&x, &y);
		printf("%d\n",lines[x][y]);
	}

	return 0;
}
