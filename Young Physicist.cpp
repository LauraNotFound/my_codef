#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int xt = 0, yt = 0, zt = 0;
	for(int i = 1; i <= n; i++){
		int x, y,z;
		cin>>x; cin>>y; cin>>z;
		xt += x;
		yt += y;
		zt += z;
	}
	if ( xt == 0 && yt == 0 && zt == 0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
