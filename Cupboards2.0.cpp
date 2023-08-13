/*Programa que calcula el tiempo mínimo en el que se cambian de posición las puertas de un armario, 
considerando que cada uno tiene dos puertas, de tal modo que en un lado todas las puertas tengan la 
misma posición. Ejemplo, todas las puertas de la derecha pueden estar abiertas y todas las de la 
izquierda, cerradas. Tenemos en cuenta que la posición de las puertas están representadas por 0 y 1. 
El tiempo que tarda en cambiar de posición es de un segundo.*/
#include<iostream>
using namespace std;
int main(){
	int n,	l[100], r[100]; /* n: # armarios, l: posición puerta izquierda, r: posición puerta derecha (ENTRADA)*/
	int cont_l = 0, cont_d = 0; //acumuladores (PROCESO)
	int total; //(SALIDA)
	
	cout<<"Ingresar el n"<<char(163)<<"mero de armarios que tiene la cocina: ";
	cin>>n;
	cout<<"Se le solicitar"<<char(160)<<" la posici"<<char(162)<<"n de las dos puertas de cada armario."<<endl;
	cout<<"(0: cerrado || 1: abierto)\n"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Armario "<<i+1<<": ";
		cin>>l[i]>>r[i];
	}
	
	for(int j=0; j<n; j++){
		if(l[j]==0){
			cont_l++;//Si la puerta izquierda está cerrada		
		}
		if(r[j]==0){
			cont_d++;//si la puerta derecha está cerrada
		}
	}
	
	/*Encontrar la posición que se repite el menor número de veces en cada lado*/
	if(cont_l>n/2){
		cont_l = n - cont_l; 
	}
	
	if(cont_d>n/2) {
		cont_d = n - cont_d;
	}
	
	//Total de cambios de posición
	total=cont_l + cont_d;
	
	cout<<"\nEn "<<total<<"s tendremos las puertas de un mismo lado en la misma posici"<<char(162)<<"n."<<endl;
	return 0;
}
