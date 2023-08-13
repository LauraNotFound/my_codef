#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec; //Creación de vector stl
    int n; 
    cin>>n;
    //llenando el vector
    for(int i=0; i<n; i++){
        int val; cin>>val;//guardando el valor a agregar al vector
        vec.push_back(val);//llenando el vector
    }
    int num; cin>>num;
    //iterador del elemento que buscamos
    vector<int>::iterator it = find(vec.begin(), vec.end(), num);
    //position del elemento encontrado
    int k = distance(vec.begin(), it);
    cout<<k+1;
    return 0;
}