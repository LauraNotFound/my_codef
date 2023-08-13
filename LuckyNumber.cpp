#include<bits/stdc++.h>
using namespace std; 
int main(){
    string numero;
    cin>>numero;
    int cant_luckyNum=0;
    for(int i=0; i<numero.size(); i++){
        if((numero[i]=='4') || (numero[i]=='7')){
            cant_luckyNum++;
        }
    }
    string num = to_string(cant_luckyNum);
    int cont=0;
    for(int i=0; i<num.size(); i++){
        if((num[i]!='4') && (num[i]!='7')){
            cont++;
        }
    }
    if(cont==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
