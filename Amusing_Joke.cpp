#include<iostream>
#include<string>
using namespace std;
int sum_letters(int a, string name){
	int cont=0;
	for(int j=0; j<name.length(); j++){
		if(a==(int)name[j]) cont++;
	}
	return cont;
}

int main(){
	string name1, name2, names; cin>> name1>>name2>>names;
	int accountant1=0, accountant2=0, accountant3=0, accountant=0;
	for(int i=65; i<91; i++){
		accountant1 += sum_letters(i,name1);
		accountant2 += sum_letters(i,name2);
		accountant3 += sum_letters(i,names);
		if((accountant1+accountant2)!=accountant3) accountant++;
	}
	if(accountant!=0) cout<<"NO";
	else cout<<"YES";
	return 0;
}
