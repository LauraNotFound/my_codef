#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	string cdf="codeforces";
	int dif[t];
	for(int i=0; i<t; i++){
		string word; cin>>word;
		int cont=0;
		for(int j=0; j<word.length(); j++){
			if(word[j]!=cdf[j])  cont++;
		}
		dif[i]=cont;
	}
	return 0;
}
