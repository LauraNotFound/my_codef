#include<bits/stdc++.h>
using namespace std;
int main(){
	string cad; cin>>cad;
	int accountant=0;
	for(int i=0; i<cad.length(); i++){
		if(cad[i]=='H' || cad[i]=='Q' || cad[i]=='9') accountant++;
	}
	if(accountant!=0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
