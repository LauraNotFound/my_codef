#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, compare[100000], left=0, right=0;
    vector<int> numbers;
    cin>>n;
    for(int i=0; i<n; i++){
        numbers.push_back(i);
    }
    cin>>m;
    for(int j=0; j<m; j++){
        cin>>compare[j];
        //int k=0, l=n-1;
        auto it = find(numbers.begin(), numbers.end(),compare[j]);
        if(it != numbers.end()){
            int k = it - numbers.begin();
            left += (n-k);
            right += k;
        }
    }
    cout<<left<<endl;
    cout<<right<<endl;
    return 0;
}