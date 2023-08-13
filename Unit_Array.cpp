#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	for(int i=0; i<t; i++){
		int n; cin>>n;
		int post=0, negt=0;
		for(int j=0; j<n; j++){
			int a; cin>>a;
			if(a==1) post++;
			else negt++;
		}
		
		if(negt<=post){
			if(negt%2 == 0){
				cout<<0<<endl;
			}
			else cout<<1<<endl;
		}
		if(post<negt){
			if(post==0){
				if(negt % 2 != 0){
					int h = (n+1)/2;
				if(h % 2 == 0) cout<<h+1<<endl;
				else cout<<h<<endl;
				}
				else if(negt==2) cout<<negt<<endl;
				else cout<<n/2<<endl;
			}
			else if(n%2 !=0) cout<<((n+1)/2)-post<<endl;
			else if(n%2 ==0) cout<<(n/2)-post<<endl;
		}
	}
	return 0;
}
