#include<iostream>
using namespace std;
int main(){
	int n, cont = 0; cin>>n;
	int points[1000];
	for(int i=1; i<=n; i++){
		cin>>points[i];
	}
	for(int k=1; k<=n; k++){
		int cont_d = 0, cont_u = 0;
		for(int j=1; j<k; j++){
			if(points[k]<points[j]){
				cont_d++;
			}
			if(points[k]>points[j]){
				cont_u++;
			}
		}
		if((cont_d==k-1) || (cont_u==k-1)){
			cont++;
		}
	}
	cout<<cont-1;
	return 0;
}
