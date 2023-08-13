#include<iostream>
using namespace std;
int main(){
	int cases;
	cin>>cases;
	for(int t = 1; t <= cases; t++){
		printf("Case %i \n", t);
		int k,n;
		cin>>k; /*number of the discussions*/
		cin>>n; /*number of the members*/
		char opinion[n];
		int agree = 0;
		int desagree = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= k; j++){
				cin>>opinion[j];
				if(opinion[j] == '+'){
					agree ++;
				}
				if(opinion[j] == '-'){
					desagree++;
				}
			}
			printf("\n");
		}
		if(agree == desagree){
			printf("%i \n", n+1);
		}
		else if(agree > desagree){
			printf("%i\n", agree);
		}
		else{
			printf("%i\n", desagree);
		}
	}
	return 0;
}
