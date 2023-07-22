#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c, val;
    cin>>n;
    for(int i=0; i<n; i++){
    	val=0;
       cin>>a>>b>>c;
       if((a+b>=10) || (a+c>=10) || (b+c>=10)){
       		val++;
	   }
       if(val != 0){
            cout<<"YES"<<endl;
        }
        if(val == 0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
