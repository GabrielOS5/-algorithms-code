#include <iostream>

using namespace std;

int main() {
	//Titulo del programa
	cout<<"Areas de figuras geometricas"<<endl;
	cout<<"----------------------------"<<endl;
	//Definir variables
	bool bandera = true;
	int opcion;
	float base;
	float altura;
	float resultado;
	//Proceso
	do {
		cout<<"Seleccione la figura: "<<endl;
		cout<<"1 Triangulo "<<endl;
		cout<<"2 Rectangulo"<<endl;
		cout<<"3 Cuadrado"<<endl;
		cout<<"4 Circulo"<<endl;
		cout<<"5 Salir"<<endl;
		cin>>opcion;
		
		switch(opcion) {
		case 1:
			cout<<"-----------------------------------"<<endl;
			cout<<"Ingrese el valor de la base: ";
			cin>>base;
			cout<<"Ingrese el valor de la altura: ";
			cin>>altura;
			resultado = (base*altura)/2;
			cout<<"El area del triangulo es: "<<resultado<<" cm2"<<endl;
			cout<<"-----------------------------------"<<endl;
			resultado = 0;
			break;
		
		case 2:
			cout<<"-----------------------------------"<<endl;
			cout<<"Ingrese el valor de la base: ";
			cin>>base;
			cout<<"Ingrese el valor de la altura: ";
			cin>>altura;
			resultado = (base*altura);
			cout<<"El area del rectangulo es: "<<resultado<<" cm2"<<endl;
			cout<<"-----------------------------------"<<endl;
			resultado = 0;
			break;
			
		case 3:
			cout<<"-----------------------------------"<<endl;
			cout<<"Ingrese el valor del lado: ";
			cin>>base;
			resultado = (base*base);
			cout<<"El area del cuadrado es: "<<resultado<<" cm2"<<endl;
			cout<<"-----------------------------------"<<endl;
			resultado = 0;
			break;
			
		case 4:
			cout<<"-----------------------------------"<<endl;
			cout<<"Ingrese el valor del radio: ";
			cin>>base;
			resultado = (base*base)*3.1416;
			cout<<"El area del circulo es: "<<resultado<<" cm2"<<endl;
			cout<<"-----------------------------------"<<endl;
			resultado = 0;
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
	
	
	return 0;
}
