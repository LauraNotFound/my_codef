#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		string cadena; cin>>cadena;
		for(int k= 97; k<123; k++){
			int cont=0;
			for(int j=0; j<cadena.size(); j++){
				if(int(cadena[j])==k){
					cont++;	
				}
			}
			if(cont!=0){
				cout<<(char)k<<":"<<cont<<" ";
			}
		}
		cout<<endl;	
	}
	return 0;
}
