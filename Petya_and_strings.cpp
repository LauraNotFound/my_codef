#include<iostream>
#include<string>
using namespace std;
int main(){
	string word1; cin>>word1;
	string word2; cin>>word2;
	int location, accountant = 0;
	int* _location = &location;
	for(int i=0; i<word1.length(); i++){
		if((int)tolower(word1[i]) != (int)tolower(word2[i])){
			*_location = i;
			accountant ++;
		}
	}
	if(accountant == 0) cout<<0;
	else if((int)tolower(word1[location]) < (int)tolower(word2[location])) 
		cout<< -1 <<endl; 
	else if((int)tolower(word1[location]) > (int)tolower(word2[location]))
	cout<< 1 <<endl;
	return 0;
}