#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> numbers;
    cin>>n;
    for(int i=0; i<n; i++){
        numbers.push_back(i);
    }
    int m;
    cin>>m;
    auto it = find(numbers.begin(), numbers.end(),m);
    if(it != numbers.end()){
        int k = it - numbers.begin();
        cout<<n-k;
    }
    return 0;
}