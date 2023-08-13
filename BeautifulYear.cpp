#include<iostream>
using namespace std;
int main(){
	int aaa;
	cin>>aaa;
	int anio;
	int* _anio = &anio;
	*_anio = aaa+1;;
	int numb;
	int digito1, digito2, digito3, digito4;
	do{
		int ab = *_anio;
		digito1 = ab%10;
		ab = (ab - digito1)/10;
		digito2 = ab%10;
		ab = (ab - digito2)/10;
		digito3 = ab%10;
		ab = (ab - digito3)/10;
		digito4 = ab;
		
		*_anio += 1;
	}while(digito1==digito2 || digito1==digito3 || digito1==digito4 || digito2 == digito3 || digito2==digito4 || digito3==digito4);
	numb = *_anio;
	cout<<numb-1<<endl;
	return 0;
}
