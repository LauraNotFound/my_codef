#include<iostream>
#include<string>
using namespace std;
int main(){
	string name; cin>> name;
	int be=0;
	for(int i=97; i<=122; i++){
		int cont=0;
		for(int j=0; j<name.length(); j++){
			if((int)name[j]==i) cont++;	
		}
		if(cont!=0) be++;	
	}
	if((be%2)==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	return 0;
}
