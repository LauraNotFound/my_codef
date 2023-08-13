#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int max[n];
	int inside;
	int* _inside = &inside;
	*_inside = 0;
	for(int i=0; i<n; i++){
		int a, b; cin>>a>>b;
		*_inside = *_inside + b - a;
		max[i]=*_inside;
	}
	int higher;
	int* _higher = &higher;
	*_higher = 0;
	for(int j=0; j<n; j++){
		if(*_higher<max[j]){
			*_higher=max[j];
		}
	}
	cout<<*_higher;
	return 0;
}
