#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, number;
    int* _number = &number;
    *_number = 0;
    string operation;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>operation;
        if(operation[1] == '+'){
            *_number=*_number+1;
        } 
        else if(operation[1] == '-'){
            *_number=*_number-1;
        } 
    }
    cout<<*_number;
    return 0;
}