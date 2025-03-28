#include <iostream>
using namespace std;
//metodos y funciones = ejecutan una porcion de codigo n cantidad de veces segun se mande a llamar
//metodo no retorna un valor
//funcion retorna un tipo de dato determinado

/*
//funcion de suma y resta
int resta(int num1, int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}
int suma(int num1, int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
//metodo y envio de parametros por valor
void suma(int &num1, int &num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}

main(){
	int a = 10, b = 20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	system("pause");
}
*/

//estructuras struct (agrupa varias variables relacionadas en un mismo lugar)
//objetos que contienen varias variables de distintos tipos

struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
	
}; 
main(){
/*
	Estudiante estudiante;
	for (int i=0; i<4; i++){
		cout<<"____________________"<<endl;
		cout<<"Ingrese codigo: ";
		cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin, estudiante.nombre[i]);
	cout<<"Ingrese Nota: ";
	cin>>estudiante.nota[i];
	}
	
	for (int i=0; i<4; i++){
		cout<<"____________________"<<endl;
		cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
		cout<<"Nota: "<<estudiante.nota[i]<<endl;	
	}
*/	
	Estudiante estudiante;
	
	int fila = 0, columna = 0;
	cout<<"Cuantos estudiantes agregara?: ";
	cin>>fila;	
	
	cout<<"Cuantas notas por estudiante agregara?: ";
	cin>>columna;
	
	
	system("pause");
}

