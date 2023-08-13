#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	for(int i=0; i<t; i++){
		int n; cin>>n;
		vector<int> arr(n);
		for(int j=0; j<n; j++){
			cin>>arr[j];
		}
		int suma=0;
		sort(arr.begin(), arr.end());
		for(int j=0; j<n/2; j++){
			suma = suma + arr[n-1-j] - arr[j];
		}
		cout<<suma<<endl;
	}
	return 0;
}
