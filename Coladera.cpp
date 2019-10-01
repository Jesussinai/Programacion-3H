#include<iostream>

using namespace std;
void llenar(int tan,int arreglo[]);
void coladera(int arreglo[]);
void mostrar(int a, int ta);

int main(){
	int Arreglo[0];
	
	llenar(1000,arreglo);
	coladera(arreglo);
	mostrar();
}

void llenar(int tam,intarreglo[])
{
	int Arreglo[tan + 1] = { 0, 0};

 	for ( int i = 1; i <= tan; i++ ){
	 		Arreglo[i] = 1;
	}
}


void coladera(int tam)
{
 for ( int i = 2; i <= tam; i++ )
 	for ( int j = 2; j <= (tam)/i; j++ )
 		Arreglo[j*i] = 0;	
}


void mostrar(){

}
