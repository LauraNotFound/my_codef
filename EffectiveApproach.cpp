#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, numbers[100000], compare[100000], left=0, right=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>numbers[i];
    }
    cin>>m;
    for(int j=0; j<m; j++){
        cin>>compare[j];
        //int k=0, l=n-1;
        left = find(numbers[0], numbers[n],compare[j])+left;
        /*while(compare[j] != numbers[k]){
            k++;
            left++;
        }
        while(compare[j] != numbers[l]){
            l--;
            right++;
        }*/
        right = n-find(numbers[0], numbers[n],compare[j])-1+right;
    }
    cout<<left<<endl;
    cout<<right<<endl;
    return 0;
}