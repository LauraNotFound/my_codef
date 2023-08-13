#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	
	for(int i=0; i<t; i++){
		int n; cin>>n;
		int l[100], may;
		int* _may = &may;
		*_may=0;
		for(int j=0; j<n; j++){
			cin>>l[j];
			if(*_may<=l[j]) *_may=l[j];
		}
		int k=0, contadores[100];
		for(int i=0; i<=*_may; i++){
			int cant=0;
			for(int j=0; j<n; j++){
				if(i==l[j]) cant++;
			}
			if(cant!=0){
				contadores[k]=cant;
				k++;	
			}
		}
		int s=0;
		if(k==*_may+1){
			for(int i=0; i<*_may-1; i++){
				if(contadores[i+1]<=contadores[i]) s++;
			}
			if(s==*_may-1)cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
