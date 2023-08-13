/*
3
50 50 100
4
0 25 50 75
*/
#include<iostream>
#include<iomanip>
#include<ios>
using namespace std;
int main(){
	int n; cin>>n;
	float porcentaje, suma = 0;
	float* _suma = &suma;
	int p[n];
	for(int i=0; i<n; i++){
		cin>>p[i];
		*_suma = *_suma + p[i];
	}
	porcentaje = *_suma / n;
	cout << fixed<<setprecision(12)<<porcentaje;
	return 0;
}
