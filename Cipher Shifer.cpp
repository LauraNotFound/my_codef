#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	for(int i=0; i<t; i++){
		int n; cin>>n;
		char s[n];
		char a[n];
		
		for(int j=0; j<n; j++){
			cin>>s[j];
		}
		int k=0, j=0;
		a[k]=s[1];
		for(int i=1; i<n-1; i++){
			if(s[i]==s[k]){
				i++;
				k++;
				a[k]=s[i];
			}
		}
		int tam=k;
		for(int l=0; l<tam; l++){
			cout<<a[tam];
		}
	}
	return 0;
}
