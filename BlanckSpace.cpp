#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		int matriz[n];
		for(int j=0; j<n; j++){
			cin>>matriz[j];
		}
		int cont = 0;
		for(int k=n; k>=0; k--){
			if((matriz[k]==matriz[k-1] && matriz[k] == 0) || matriz[k]==0){
				cont += 1;
			}
		}
		cout<<cont/2<<endl;	
	}
	return 0;
}
