#include<iostream>
using namespace std;
int main(){
	int s[4];
	for(int i=0; i<4; i++){
		cin>>s[i];
	}
	int cont=0;
	
	for(int i=0; i<4; i++){
		for(int j=i+1; j<4; j++){
			if(s[i]==s[j]){
				cont++;
			}
		}
		if(cont==3){
			break;
		}
		if(((s[0]!=s[1]) || (s[2]!=s[3])) && (cont==2)){
			break;
		}
	}
	cout<<cont;
	return 0;
}
