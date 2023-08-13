#include<iostream>
#include<string>
using namespace std;
#include<iostream>
#include<string>
using namespace std;
int main(){
	string suma; cin>>suma;
	char numbers[100], k=0;
	for(int i=0; i<suma.length(); i++){
		if(i%2==0){
			numbers[k]=suma[i];
			k++;
		}
	}
	char vector[suma.length()+1], t=0;
	for(int i=0; i<k; i++){
		for(int j=0; j<k; j++){
			if(numbers[j]=='1'){
				vector[t] = numbers[j];
				t++;
				vector[t] = '+';
				t++;
				numbers[j]=0;
			}
		}
		for(int j=0; j<k; j++){
			if(numbers[j]=='2'){
				vector[t] = numbers[j];
				t++;
				vector[t] = '+';
				t++;
				numbers[j]=0;
			}
		}
		for(int j=0; j<k; j++){
			if(numbers[j]=='3'){
				vector[t] = numbers[j];
				t++;
				vector[t] = '+';
				t++;
				numbers[j]=0;
			}
		}
	}
	for(int m=0; m<suma.length(); m++) cout<<vector[m];
	return 0;
}
