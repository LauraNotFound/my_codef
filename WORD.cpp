/*#include <bits/stdc++.h>
using namespace std;
void lowercase(char p[]){
	sr(p);
	cout<<p<<endl;
}

int main(){
	//char word = "CASA";
	char word[100];
	int cont1 = 0, cont2 = 0;
	cin.getline(word,100,'\n');
	/*for(int i=0; i<=100; i++){
		if(((int)word[i]>64) && ((int)word[i]<98)){
			cont1++;
		}
	}
	
	lowercase(word);
	cout<<(int)word[1]<<endl;
	return 0;
}*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1,3,2};
    int _arr[3];
    for(int i=0;i<6;i++){
    	next_permutation(arr,arr+3);//using in-built function of C++
    	for(int i=0;i<3;i++){
    		_arr[i]=arr[i];
		}
		for(int i=0;i<3;i++){
    		cout<<_arr[i]<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}

