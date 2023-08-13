#include<bits/stdc++.h>
using namespece std;
int main(){
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin>>v[i];
	int m; cin>>m;
	for(int i=0; i<m; i++){
		int xi, yi; cin>>xi>>yi;
		int pos = xi-1;
		if(pos-1 >= 0) v[pos -1] += (yi-1);
		if(pos+1 <= n-1) v[pos+1] += (v[pos]-yi);
		v[pos] = 0; 
	}
	for(int i=0; i<n; i++) cout<<v[i]<<endl;
	return 0;
}
