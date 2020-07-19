#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int s;
		cin >> s;
		int sol=0;
		string data;
		cin >> data;
		while(true){
		        char aux = -1;
			string n="";
			for(int i=0;i<s;++i){
				char val = data[i];
				if(aux != -1){
					if(aux == 'A'&&val=='P'){
						val = 'A';
						
					}
				}
				n = n+val;
				aux = data[i];
			}
			if(data == n)
				break;
			else 
				sol++;
			data = n;
		}
		cout << sol << endl;
	}
	return 0;
}

