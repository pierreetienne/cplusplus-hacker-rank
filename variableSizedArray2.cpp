#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main(){

	int n, q;
	scanf("%d %d", &n, &q);
	int** lines = new int*[n];
	for(int i=0;i<n;++i){
		int size;
		scanf("%d",&size);
		lines[i] = new int[size];
		for(int j=0;j<size;++j){
			int value;
			scanf("%d",&value);
			lines[i][j]=value;
		}
	}
	for(int i=0;i<q;++i){
		int x,y;
		scanf("%d %d",&x, &y);
		printf("%d\n",lines[x][y]);
	}

	return 0;
}
