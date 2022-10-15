#include <iostream>

using namespace std;

int main() {
	//Titulo del programa
	cout<<"Problema de financiamiento"<<endl;
	cout<<"----------------------------"<<endl;
	//Definir variables
	bool bandera = true;
	int opcion;
	long valor;
	long enganche;
	long pago;
	long interes;
	long total;
	
	//Proceso
	
	do{
		cout<<"Ingrese la opcion del vehiculo que desea cotizar: "<<endl;
		cout<<"1 Nissan "<<endl;
		cout<<"2 Mazda"<<endl;
		cout<<"3 Honda"<<endl;
		cout<<"4 Porsche"<<endl;
		cout<<"5 Salir"<<endl;
		cin>>opcion;
	
		switch(opcion) {
			case 1:
				valor = 250235;
				cout<<"----------------------------"<<endl;
				cout<<"Marca: Nissan"<<endl;
				cout<<"Valor del automovil: $"<<valor<<endl;
				enganche = (valor/100) * 35;
				cout<<"Enganche: $"<<enganche<<endl;
				pago = valor - enganche;
				interes = (pago/100) * 25;
				cout<<"Intereses a pagar: $"<<interes<<endl;
				total = pago + interes;
				cout<<"Total a pagar: $"<<total<<endl;
				cout<<"----------------------------"<<endl;
				break;
			
			case 2:
				valor = 365985;
				cout<<"----------------------------"<<endl;
				cout<<"Marca: Mazda"<<endl;
				cout<<"Valor del automovil: $"<<valor<<endl;
				enganche = (valor/100) * 35;
				cout<<"Enganche: $"<<enganche<<endl;
				pago = valor - enganche;
				interes = (pago/100) * 25;
				cout<<"Intereses a pagar: $"<<interes<<endl;
				total = pago + interes;
				cout<<"Total a pagar: $"<<total<<endl;
				cout<<"----------------------------"<<endl;
				break;
				
			case 3:
				valor = 578458;
				cout<<"----------------------------"<<endl;
				cout<<"Marca: Honda"<<endl;
				cout<<"Valor del automovil: $"<<valor<<endl;
				enganche = (valor/100) * 35;
				cout<<"Enganche: $"<<enganche<<endl;
				pago = valor - enganche;
				interes = (pago/100) * 25;
				cout<<"Intereses a pagar: $"<<interes<<endl;
				total = pago + interes;
				cout<<"Total a pagar: $"<<total<<endl;
				cout<<"----------------------------"<<endl;
				break;
				
			case 4:
				valor = 2236438;
				cout<<"----------------------------"<<endl;
				cout<<"Marca: Porsche"<<endl;
				cout<<"Valor del automovil: $"<<valor<<endl;
				enganche = (valor/100) * 35;
				cout<<"Enganche: $"<<enganche<<endl;
				pago = valor - enganche;
				interes = (pago/100) * 25;
				cout<<"Intereses a pagar: $"<<interes<<endl;
				total = pago + interes;
				cout<<"Total a pagar: $"<<total<<endl;
				cout<<"----------------------------"<<endl;
				break;
				
			case 5:
				cout<<"----------------------------"<<endl;
				cout<<"¡Hasta luego, vuelva pronto!"<<endl;
				cout<<"----------------------------"<<endl;
				bandera = false;
				break;
				
			default:
				cout<<"-----------------------------------"<<endl;
				cout<<"ERROR: Ingrese una opcion permitida"<<endl;
				cout<<"-----------------------------------"<<endl;
				break;
			
			}
	} while(bandera);
	
	
}
