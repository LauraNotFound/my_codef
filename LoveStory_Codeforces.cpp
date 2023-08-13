#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int j=0; j<t; j++){
		char s[10];
		char cf[10] = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
		int cont = 0;
		for(int i=0; i<10; i++){
			cin>>s[i];
			if(cf[i] != s[i]){
				cont += 1;
			}
		}
		cout<<cont<<endl;
	}
	return 0;
}
