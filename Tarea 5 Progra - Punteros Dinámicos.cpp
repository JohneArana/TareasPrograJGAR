#include <iostream>
using namespace std;

main(){
/*
	int edad, *p_edad;
	p_edad =& edad;
	cout<<"Ingrese la edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Es mayor de edad "<<endl;
	}else{
		cout<<"Es menor de edad"<<endl;
	}
*/
//punteros con asignacion de memoria dinamica
//new = reservar un espacio en memoria
//delete [] = liberar la memoria
/*
	int total = 0,*p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor?(s/n)";
		cin>>res;
}while (res=='s' || res=='S');
	
cout<<"----------Mostrar notas----------"<<endl;
for(int i=0; i<total; i++){
	cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
	p_notas++;
}
delete[] p_notas;
*/
	int fil = 0, col=0, **pm_notas;
	cout<<"Ingrese la cantidad de estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de notas por estudiante: ";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0; i<fil; i++){
		pm_notas[i] = new int[col];
	}
	
	for (int i=0; i<fil; i++){
		cout<<"_________Estudiante__________"<<i<<endl;
		for (int ii=0; ii<col; ii++){
			cout<<"Nota: "<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"___________________"<<endl;
	}
	cout<<"__________Mostrar notas________"<<endl;
	for (int i=0; i<fil; i++){
		for (int ii=0; ii<col; ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
	cout<<"_____________________"<<endl;
	}
	for(int i=0; i<fil; i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;



	system("pause");
}
