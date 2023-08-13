#include<bits/stdc++.h>
using namespace std; 
int main(){
    string numero;
    cin>>numero;
    int tam = numero.size();
    std::string num = std::to_string(tam);
    cout<<num<<endl;
    bool lucky_num=true;
    for(int i=0; i<num.size(); i++){
        if(num[i]!='4' || num[i]!='7'){
            lucky_num=false;
        }
    }
    if(lucky_num==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
