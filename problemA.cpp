#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	for(int i=0; i<n; i++){//casos
		int m; cin>>m;
		int array[m];
		for(int i=0; i<m; i++){//array del caso i
			cin>>array[i];
		}
		
		int fact=1;//para la cantidad de permutaciones
		for(int k=1; k<=m; k++){
			fact = fact*k;
		}
		
		//Hallar las permutaciones del array del caso i
		int _arr[m];
		for(int i=0;i<fact;i++){
	    	next_permutation(array,array+m);//using in-built function of C++
	    	for(int i=0;i<m;i++){//guardando el vector permutado
	    		_arr[i]=array[i];
			}
			
			int j=0;
			bool valor = true;
			while(valor==true && j<m-1){//evaluando si el vector cumple la condición
				if(array[j]+_arr[j]<=array[j+1]+_arr[j+1]){
					valor=true;
					j++;
				}
				else{
					valor=false;
				}
			}
			if(valor==true){//si cumple se imprime
				for(int i=0;i<m;i++){
		    		cout<<_arr[i]<<" ";
				}
				cout<<"\n"<<endl;
			}
		}
	}
	cout<<endl;
	return 0;
}
