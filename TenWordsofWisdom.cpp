#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    for(int i=0; i<cases; i++){
    	int cant_words, max, bestQuality;
    	int* _max = &max;
    	*_max = 0;
    	int* _bestQuality = &bestQuality;
    	*_bestQuality = 0;
    	cin>>cant_words;
    	for(int j=0; j<cant_words; j++){
    		int a,b;
    		cin>>a>>b;
    		if(a<=10){
    			if(b >= *_bestQuality){
    				*_bestQuality = b;
    				*_max = j;
				}
			}
		}
		cout<<*_max+1<<endl;
    }
    return 0;
}
