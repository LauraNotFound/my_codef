#include<iostream>
using namespace std;
int main(){
	int n, l, r, cont_l = 0, cont_d = 0;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>l>>r;
		if(l==0){
		cont_l++;		
		}
		if(r==0){
			cont_d++;
		}
	}
	if(cont_l>n/2){
		cont_l = n - cont_l; 
	}
	if(cont_d>n/2) {
		cont_d = n - cont_d;
	}
	cout<<cont_l + cont_d;
	return 0;
}
