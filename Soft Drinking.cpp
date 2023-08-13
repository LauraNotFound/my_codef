/*A. Soft Drinking
3 4 5 10 8 100 3 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int b=(k*l)/(n*nl), f=(c*d)/n, s=p/(np*n);
	if((b<=f) && (b<=s)) cout<<b;
	else if((f<=b) && (f<=s)) cout<<f;
	else  if((s<=f) && (s<=b)) cout<<s;
	return 0;
}
