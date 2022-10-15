#include <iostream>

using namespace std;

void calcular_costo(float costo_dia, int edad, int dias, int enfermedad) {
	float costo_total;
	float costo_adicional = 0;
	float subtotal;
	costo_total = costo_dia * dias;
	subtotal = costo_total;
	if(edad >= 12 && edad <=22) {
		costo_adicional = (costo_total/100) * 10; //Se obtiene el 10% del costo total
		costo_total = costo_total + costo_adicional;
	}
		
	cout<<"\nEdad del paciente: "<<edad<<endl;
	cout<<"Tipo de enfermedad que padece: "<<enfermedad<<endl; 
	cout<<"Dia(s) que permanecio en consulta: "<<dias<<endl;
	cout<<"Subtotal: $"<<subtotal<<endl;
	cout<<"Costo adicional: $"<<costo_adicional<<endl;
	cout<<"Total: $"<<costo_total<<endl;
	
}

int main() {
	
	//Definir tipo y nombre de las variables
	string nombre;
	int edad;
	int enfermedad;
	int dias;
	float costo_dia;
	
	// Solicitud de datos
	cout<<"Programa del hospital";
	cout<<"\nEdad del paciente: ";
	cin>> edad;
	
	cout<<"Ingrese los dias que permanecio en consulta: "; 
	cin>> dias;
	
	if(dias < 0) {
		cout<<"Numero de dias invalido.";
		return 0;
	}
	
	if (edad <= 0 || edad >= 120) {
		cout<<"Edad no permitida";
		return 0;
	}
	
	cout<<"Indique el tipo de enfermadad del paciente: "; 
	cin>> enfermedad;
	
	switch(enfermedad) {
		case 1:
			costo_dia = 25;
			calcular_costo(costo_dia, edad, dias, enfermedad);
			break;
		
		case 2:
			costo_dia = 16;
			calcular_costo(costo_dia, edad, dias, enfermedad);
			break;
			
		case 3:
			costo_dia = 20;
			calcular_costo(costo_dia, edad, dias, enfermedad);
			break;
			
		case 4:
			costo_dia = 32;
			calcular_costo(costo_dia, edad, dias, enfermedad);
			break;
		
		default:
			cout<<"Tipo de enfermadad inexistente";
			break;
		
	}
	
	return 0;
}


