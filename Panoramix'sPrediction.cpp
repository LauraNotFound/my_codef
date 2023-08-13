#include<bits/stdc++.h>
using namespace std;

int numPrimo(int num){
	int val;
	int cont=0;
	for(int j=1; j<=num; j++){
		if(num%j==0){
			cont++;	
		}	
	}
	if(cont==2){
		val = 1;
	}
	return val;
}

int main(){
	int n; cin>>n;
	int m; cin>>m;
	int contador=0;
	for(int i=n; i<=m; i++){
		if(numPrimo(i)==1){
			contador++;	
		}	
	}
	if(contador==2){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;	
}
