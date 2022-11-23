#include <iostream>
#include<stdlib.h>

using namespace std;

int main () {
	
	// Definir variables
	double localidad_precio_uno;
	double localidad_precio_dos;
	double localidad_precio_tres;
	double localidad_precio_cuatro;
	double localidad_precio_cinco;
	
	bool bandera = true;
	int cantidad_boletos = 0;
	int localidad;
	double precio = 0;
	double precio_parcial = 0;
	double recaudacion = 0;
	int opcion;
	
	int boletos_vendidos_localidad_uno = 0;
	int boletos_vendidos_localidad_dos = 0;
	int boletos_vendidos_localidad_tres = 0;
	int boletos_vendidos_localidad_cuatro = 0;
	int boletos_vendidos_localidad_cinco = 0;
	
	// Procedimiento
	cout<<"--------------------------------------------"<<endl;
	cout<<"             Auditorio Nacional             "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Ingrese el precio de cada localidad:        "<<endl;
	
	// 2)	Lea los precios
	cout<<" Localidad: 1 Precio: $";
	cin>>localidad_precio_uno;
	cout<<" Localidad: 2 Precio: $";
	cin>>localidad_precio_dos;
	cout<<" Localidad: 3 Precio: $";
	cin>>localidad_precio_tres;
	cout<<" Localidad: 4 Precio: $";
	cin>>localidad_precio_cuatro;
	cout<<" Localidad: 5 Precio: $";
	cin>>localidad_precio_cinco;
	system("cls"); //Limpia la pantalla
	
	// 1) Imprima un menú con los precios y las localidades del auditorio
	cout<<"--------------------------------------------"<<endl;
	cout<<"             Auditorio Nacional             "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"  Localidad: 1 Precio: $"<<localidad_precio_uno<<endl;
	cout<<"  Localidad: 2 Precio: $"<<localidad_precio_dos<<endl;
	cout<<"  Localidad: 3 Precio: $"<<localidad_precio_tres<<endl;
	cout<<"  Localidad: 4 Precio: $"<<localidad_precio_cuatro<<endl;
	cout<<"  Localidad: 5 Precio: $"<<localidad_precio_cinco<<endl;
	cout<<"--------------------------------------------"<<endl;
	
	do {
		cout<<" Cantidad de boletos: ";
		cin>>cantidad_boletos; // 3)	Lea los datos de las ventas de boletos
		cout<<" Seleccione la localidad: "<<endl;
		cout<<" 1. Localidad 1 "<<endl;
		cout<<" 2. Localidad 2 "<<endl;
		cout<<" 3. Localidad 3 "<<endl;
		cout<<" 4. Localidad 4 "<<endl;
		cout<<" 5. Localidad 5 "<<endl;
		cin>>localidad;
		if(localidad < 1 || localidad > 5){
			do {
				cout<<"--------------------------------------------"<<endl;
				cout<<" Opcion incorrecta. Vuelva a intentarlo"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cin>>localidad;
			} while (localidad < 1 || localidad > 5);
		}
		
		switch(localidad) {
			case 1:
				precio = localidad_precio_uno;
				boletos_vendidos_localidad_uno = boletos_vendidos_localidad_uno + cantidad_boletos;
				break;
			case 2:
				precio = localidad_precio_dos;
				boletos_vendidos_localidad_dos = boletos_vendidos_localidad_dos + cantidad_boletos;
				break;
			case 3:
				precio = localidad_precio_tres;
				boletos_vendidos_localidad_tres = boletos_vendidos_localidad_tres + cantidad_boletos;
				break;
			case 4:
				precio = localidad_precio_cuatro;
				boletos_vendidos_localidad_cuatro = boletos_vendidos_localidad_cuatro + cantidad_boletos;
				break;
			case 5:
				precio = localidad_precio_cinco;
				boletos_vendidos_localidad_cinco = boletos_vendidos_localidad_cinco + cantidad_boletos;
				break;
		}
		precio_parcial = (precio * cantidad_boletos);
		recaudacion = recaudacion + precio_parcial;
		cout<<"--------------------------------------------"<<endl;
		// 4)	Imprima en pantalla para cada venta. La cantidad y el importe total de los boletos vendidos en esa venta.
		cout<<" Clave: "<<localidad<<endl;
		cout<<" Cantidad de boletos: "<<cantidad_boletos<<endl;
		cout<<" Precio: $"<<precio_parcial<<endl;
		cout<<"--------------------------------------------"<<endl;
		
		cout<<" Presione 1 para calcular total de boletos y recaudacion ";
		cin>>opcion;
		cout<<"--------------------------------------------"<<endl;
		if (opcion == 1) {
			bandera = false;
		}
		
	} while (bandera);
	// 5)	Calcule e imprima la cantidad de boletos vendidos de cada tipo 
	cout<<" Boletos vendidos de la localidad 1: "<<boletos_vendidos_localidad_uno<<endl;
	cout<<" Boletos vendidos de la localidad 2: "<<boletos_vendidos_localidad_dos<<endl;
	cout<<" Boletos vendidos de la localidad 3: "<<boletos_vendidos_localidad_tres<<endl;
	cout<<" Boletos vendidos de la localidad 4: "<<boletos_vendidos_localidad_cuatro<<endl;
	cout<<" Boletos vendidos de la localidad 5: "<<boletos_vendidos_localidad_cinco<<endl;
	cout<<"--------------------------------------------"<<endl;
	// 6)	Calcule e imprima la recaudación total del Auditorio Nacional para dicho concierto 
	cout<<" Recaudacion total: $"<<recaudacion<<endl;
	cout<<"--------------------------------------------"<<endl;
	
	
	return 0;
}
