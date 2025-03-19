<<<<<<< HEAD
#include <iostream>
using namespace std;

main(){
	//array = arreglo de matriz... se usan para almacenar varios valores en una sola variable
/*	int notas[4]; //esto es equivalente a poner int nota1, nota2, nota3, nota4 y etc...
	//la posicion del arreglo siempre debe iniciar en cero (0, 1, 2, 3)
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;
	
	for(int i=0; i<4;i++){
		cout<<i<<": "<<notas[i]<<endl;
	}
	
	for(int i : notas){
		cout<<i<<endl;
	}
	
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
*/
/*
	int notas[4];
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;
	for(int i=0; i<=3; i++){
		cout<<i<<": "<<notas[i]<<endl;
	}
*/
/*

	int tam=0, suma=0, promedio=0;
	int notas[tam];
	cout<<"cuantas notas desea ingresar?: ";
	cin>>tam;	
	for(int i=0; i<tam; i++){
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>notas[i];
	}
	
	for(int i=0; i<tam; i++){
		suma += notas[i];
		
	}
	promedio = suma / tam;
	cout<<"el promedio es: "<<promedio<<endl;
*/
/*
	int tam=0, suma=0, promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese Nota "<<tam<<" : ";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota? (s/n)";
		cin>>res;
	}while(res=='s'||res=='S');	
	
	for (int i=0; i<tam; i++){
		suma += notas[i];
	}
	promedio = suma / tam;
	cout<<"el promedio es: "<<promedio<<endl;
*/
//Realizar un arreglo de char, es equivalente a realizar un string
	
	//ARREGLOS BIDIMENCIONALES
	int fil=0, col=0;
	cout<<"ingrese filas: ";
	cin>>fil;
	cout<<"ingrese columnas: ";
	cin>>col;
	int matriz[fil][col];
	cout<<" ------------Ingresar----------"<<endl;
	for(int i=0; i<fil; i++){
		for(int ii=0; ii<col; ii++){
			cout<<i<<","<<ii<<": ";
			cin>>matriz[i][ii];
		}
		cout<<"_______________________"<<endl;
	}
	cout<<" ------------Mostrar----------"<<endl;
	for(int i=0; i<fil; i++){
		for(int ii=0; ii<col; ii++){
			cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
		}
}
	system("pause");
}
=======
#include <iostream>
using namespace std;

main(){
	//array = arreglo de matriz... se usan para almacenar varios valores en una sola variable
/*	int notas[4]; //esto es equivalente a poner int nota1, nota2, nota3, nota4 y etc...
	//la posicion del arreglo siempre debe iniciar en cero (0, 1, 2, 3)
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;
	
	for(int i=0; i<4;i++){
		cout<<i<<": "<<notas[i]<<endl;
	}
	
	for(int i : notas){
		cout<<i<<endl;
	}
	
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
*/
/*
	int notas[4];
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;
	for(int i=0; i<=3; i++){
		cout<<i<<": "<<notas[i]<<endl;
	}
*/
/*

	int tam=0, suma=0, promedio=0;
	int notas[tam];
	cout<<"cuantas notas desea ingresar?: ";
	cin>>tam;	
	for(int i=0; i<tam; i++){
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>notas[i];
	}
	
	for(int i=0; i<tam; i++){
		suma += notas[i];
		
	}
	promedio = suma / tam;
	cout<<"el promedio es: "<<promedio<<endl;
*/
/*
	int tam=0, suma=0, promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese Nota "<<tam<<" : ";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota? (s/n)";
		cin>>res;
	}while(res=='s'||res=='S');	
	
	for (int i=0; i<tam; i++){
		suma += notas[i];
	}
	promedio = suma / tam;
	cout<<"el promedio es: "<<promedio<<endl;
*/
//Realizar un arreglo de char, es equivalente a realizar un string
	
	//ARREGLOS BIDIMENCIONALES
	int fil=0, col=0;
	cout<<"ingrese filas: ";
	cin>>fil;
	cout<<"ingrese columnas: ";
	cin>>col;
	int matriz[fil][col];
	cout<<" ------------Ingresar----------"<<endl;
	for(int i=0; i<fil; i++){
		for(int ii=0; ii<col; ii++){
			cout<<i<<","<<ii<<": ";
			cin>>matriz[i][ii];
		}
		cout<<"_______________________"<<endl;
	}
	cout<<" ------------Mostrar----------"<<endl;
	for(int i=0; i<fil; i++){
		for(int ii=0; ii<col; ii++){
			cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
		}
}
	system("pause");
}
>>>>>>> 43a1e6431f1627bbe67edc20da87ea7f600a13f2
