#include<iostream>
using namespace std;
int main(){
	int n[5][5], a, b;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			cin>>n[i][j];
			if(n[i][j] == 1){
				a = i;
				b = j;
			}
		}
	}
	cout<<endl;
	int cont = 0;
	while(a != 2){
		if(a < 2){
			a = a + 1;
			cont = cont + 1;
		}
		else{
			a = a - 1;
			cont = cont + 1;
		}
	}
	while(b != 2){
		if(b < 2){
			b = b + 1;
			cont = cont + 1;
		}
		else{
			b = b - 1;
			cont = cont + 1;
		}
	}
	cout<<cont<<endl;
	return 0;
}
