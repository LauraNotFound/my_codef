#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int num[n];
	int may, ubmay, min, ubmin, mov;
	int* _may= &may;
	int* _ubmay= &ubmay;
	int* _min= &min;
	int* _ubmin= &ubmin;
	for(int i=1; i<=n; i++){
		cin>>num[i];
	}
	*_min=num[1];
	for(int j=1; j<=n; j++){
		if(*_min>=num[j]){
			*_min=num[j];
			*_ubmin=j;
		}
	}
	*_may=num[n];
	for(int j=n; j>=1; j--){
		if(*_may<=num[j]){
			*_may=num[j];
			*_ubmay=j;
		}
	}
	if(*_ubmay>*_ubmin){
		mov=n+(*_ubmay)-(*_ubmin)-2;
	}
	else{
		mov=n-(*_ubmin)+(*_ubmay)-1;
	}
	cout<<mov;
	return 0;
}
