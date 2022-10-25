#include <iostream>

using namespace std;


int calcular_costo_total(float precio) {
	//Definir variables
	int minutos;
	float costo;
	//Proceso
	cout<<"Ingrese los minutos que hablo: ";
	cin>>minutos;
	
	if(minutos < 0) {
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"  Ingrese numeros positivos"<<endl;
		cout<<"-----------------------------------------------------"<<endl;
		return 0;
	}
	
	costo = (minutos * precio);
	
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Precio a pagar por la llamada: $"<<costo<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	
	return 1;
	
}
int main () {
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"   Costo de llamadas telefonicas internacionales"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	
	//Definir variables
	int clave;
	float precio;
	//Proceso
	
	cout<<"  Clave   |         Zona	       |  Precio por minuto"<<endl;
	cout<<"    1     |  America del norte  |         $2"<<endl;
	cout<<"    2     |  America central    |         $2.2"<<endl;
	cout<<"    3     |  America del sur    |  		 $4.5"<<endl;
	cout<<"    4     |  Europa             |         $3.5"<<endl;
	cout<<"    5     |  Asia               | 		 $6"<<endl;
	cout<<"    6     |  Africa  		   |  		 $6"<<endl;
	cout<<"    7     |  Oceania			   |  		 $5"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Ingrese la clave: ";
	cin>>clave;
	
	switch(clave) {
		case 1:
			precio = 2;
			calcular_costo_total(precio);
			break;
		case 2:
			precio = 2.2;
			calcular_costo_total(precio);
			break;
		case 3:
			precio = 4.5;
			calcular_costo_total(precio);
			break;
		case 4:
			precio = 3.5;
			calcular_costo_total(precio);
			break;
		case 5:
			precio = 6;
			calcular_costo_total(precio);
			break;
		case 6:
			precio = 6;
			calcular_costo_total(precio);
			break;
		case 7:
			precio = 5;
			calcular_costo_total(precio);
			break;
		default:
			cout<<"-----------------------------------------------------"<<endl;
			cout<<"    Clave invalida"<<endl;
			cout<<"-----------------------------------------------------"<<endl;
	}
	return 0;
		
}
