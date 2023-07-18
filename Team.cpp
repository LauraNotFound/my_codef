#include<iostream>
using namespace std;
int main(){
    int suma, n, problems_resolved=0, decision[3];
    cin>>n;
    for(int i=0; i<n; i++){
        suma=0;
        for(int j=0; j<3; j++){
            cin>>decision[j];
            if(decision[j]==1) suma++;
        }
       if(suma>=2) problems_resolved++; 
    }
    cout<<problems_resolved;
    return 0;
}