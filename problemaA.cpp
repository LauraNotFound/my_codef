#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int array[n];
	for(int i=0; i<n; i++){
		cin>>array[n];
	}
	int fact=1;
	for(int k=1; k<=n; k++){
		fact = fact*k;
	}
	int a=0;
	int _array[n];

	next_permutation(array,array+n);//using in-built function of C++
	for(int i=0;i<3;i++){
		_array[i]=array[i];
	}
	int j=0, suma=0;
	bool valor = true;
	while(valor){
		if(array[j]+_array[j]<=array[j+1]+_array[j+1]){
			suma += array[j]+_array[j];
			valor=true;
		}
		else{
			valor=false;
		}
	}
	return 0;
}
