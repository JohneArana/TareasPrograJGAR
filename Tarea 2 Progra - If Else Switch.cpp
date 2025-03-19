<<<<<<< HEAD
#include <iostream>
using namespace std;
main(){
	//MAS ABAJO ESTA EL CODIGO PRINCIPAL
	
	/*
	//numero es positivo(>0) o negativo(<0)
	int num = 0;
	cout<<"ingrese el numero: ";
	cin>>num;
	if(num>0){
		//entra si la condicion es verdadera
		cout<<"Positivo"<<endl;
	}else{
			if(num==0){
				cout<<"Neutro"<<endl;
				}else{
					cout<<"Negativo"<<endl;
			}
	
	
	}
	*/
	/*
	//tambien funciona con palabras
	string pais = "";
	cout<<"ingrese el pais: ";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de: "<<pais<<" mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}
	
	*/
	/*
	//determinar si un numero es par o impar
	int num=0;
	cout<<"ingrese numero: ";
	cin>>num;
	
	if((num%2)==0){
		cout<<"su numero es par"<<endl;
	}else{
		cout<<"su numero es impar"<<endl;
	}
	*/
	
	//condiciones con operadores logicos 
	//ingles (español) programacion
	//and (y) &&
	//or (o) ||
	
	/*
	char lapiz, lapicero, cuaderno;
	cout<<"Trae su lapiz? (s/n)";
	cin>>lapiz;
	cout<<"Trae su lapicero? (s/n)";
	cin>>lapicero;
	cout<<"Trae su cuaderno? (s/n)";
	cin>>cuaderno;
	*/
	
	//ambas deben ser verdadero, lapiz y lapicero
	/*
	if(lapiz=='s' && lapicero=='s'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"nimodo, no ingresa"<<endl;
	}
	*/
	
	//una puede ser falsa, lapiz o lapicero
	/*
	if(lapiz=='s' || lapicero=='s'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"nimodo, no ingresa"<<endl;
	}
	*/
	
	//en el caso de una tercer variable, combinando ambas (y , o)lapiz o lapicero pero obligatoriamente un cuaderno
	/*
	if((lapiz=='s' || lapicero=='s') && cuaderno == 's'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"nimodo, no ingresa"<<endl;
	}
	*/
	
	
	//funciona pero no es eficiente estar haciendo if´s
	/*
	int codigo=0;
	cout<<"ingrese el codigo de area: ";
	cin>>codigo;
	if(codigo==502){
		cout<<"usted es de Guatemala"<<endl;
	}
	if(codigo==503){
		cout<<"usted es de El Salvador"<<endl;
	}
	if(codigo==504){
		cout<<"usted es de Honduras"<<endl;
	}
	if(codigo==505){
		cout<<"usted es de Nicaragua"<<endl;
	}
	*/
	
	/*
	int codigo=0;
	cout<<"ingrese el codigo de area: ";
	cin>>codigo;
	switch(codigo){
		case 501 : cout<<"Belice"<<endl;
			break;
		case 502 : cout<<"Guatemala"<<endl;
			break;
		case 503 : cout<<"El Salvador"<<endl;
			break;
		case 504 : cout<<"Honduras"<<endl;
			break;
		case 505 : cout<<"Nicaragua"<<endl;
			break;
		case 506 : cout<<"Costa Rica"<<endl;
			break;
		case 507 : cout<<"Panama"<<endl;
			break;
		default :
			cout<<"este codigo no es de centroamerica"<<endl;
	}
	*/
	
	// variable = (condition) ? expressionTrue : expressionFalse;
	int n1=0, n2=0, n3=0, promedio=0;
	cout<<"ingrese nota 1: ";
	cin>>n1;
	cout<<"ingrese nota 2: ";
	cin>>n2;
	cout<<"ingrese nota 3: ";
	cin>>n3;
	promedio = (n1+n2+n3) / 3;
	
	/* HACER ESTO PERO CON UN IF CORTO
	if(promedio >=61){
		cout<<"aprobado"<<endl;
	}else{
		cout<<"reprobado"<<endl;
	}
	*/
	
	string mensaje="";
	mensaje = promedio>=61 ? "APROBADO" : "REPROBADO";
	cout<<"Su promedio es de: "<<promedio<< ", Por lo tanto el estudiante ha: "<<mensaje<<endl;
	
	if(promedio >= 0 && promedio <61){
		cout<<"Usted no ha ganado el curso"<<endl;
	}
	if(promedio >= 61 && promedio <89){
		cout<<"Bien hecho, usted ha ganado el curso"<<endl;
	}
	if(promedio >= 90){
		cout<<"Felicidades, usted se ha exonerado de sus privados"<<endl;
	}
	
	
	
	system("pause");
}

















/* Seleccion: if, if...else, switch
repeticion: while, do...while, for*/
=======
#include <iostream>
using namespace std;
main(){
	//MAS ABAJO ESTA EL CODIGO PRINCIPAL
	
	/*
	//numero es positivo(>0) o negativo(<0)
	int num = 0;
	cout<<"ingrese el numero: ";
	cin>>num;
	if(num>0){
		//entra si la condicion es verdadera
		cout<<"Positivo"<<endl;
	}else{
			if(num==0){
				cout<<"Neutro"<<endl;
				}else{
					cout<<"Negativo"<<endl;
			}
	
	
	}
	*/
	/*
	//tambien funciona con palabras
	string pais = "";
	cout<<"ingrese el pais: ";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de: "<<pais<<" mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}
	
	*/
	/*
	//determinar si un numero es par o impar
	int num=0;
	cout<<"ingrese numero: ";
	cin>>num;
	
	if((num%2)==0){
		cout<<"su numero es par"<<endl;
	}else{
		cout<<"su numero es impar"<<endl;
	}
	*/
	
	//condiciones con operadores logicos 
	//ingles (español) programacion
	//and (y) &&
	//or (o) ||
	
	/*
	char lapiz, lapicero, cuaderno;
	cout<<"Trae su lapiz? (s/n)";
	cin>>lapiz;
	cout<<"Trae su lapicero? (s/n)";
	cin>>lapicero;
	cout<<"Trae su cuaderno? (s/n)";
	cin>>cuaderno;
	*/
	
	//ambas deben ser verdadero, lapiz y lapicero
	/*
	if(lapiz=='s' && lapicero=='s'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"nimodo, no ingresa"<<endl;
	}
	*/
	
	//una puede ser falsa, lapiz o lapicero
	/*
	if(lapiz=='s' || lapicero=='s'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"nimodo, no ingresa"<<endl;
	}
	*/
	
	//en el caso de una tercer variable, combinando ambas (y , o)lapiz o lapicero pero obligatoriamente un cuaderno
	/*
	if((lapiz=='s' || lapicero=='s') && cuaderno == 's'){
		cout<<"ingresa"<<endl;
		
	}else{
		cout<<"nimodo, no ingresa"<<endl;
	}
	*/
	
	
	//funciona pero no es eficiente estar haciendo if´s
	/*
	int codigo=0;
	cout<<"ingrese el codigo de area: ";
	cin>>codigo;
	if(codigo==502){
		cout<<"usted es de Guatemala"<<endl;
	}
	if(codigo==503){
		cout<<"usted es de El Salvador"<<endl;
	}
	if(codigo==504){
		cout<<"usted es de Honduras"<<endl;
	}
	if(codigo==505){
		cout<<"usted es de Nicaragua"<<endl;
	}
	*/
	
	/*
	int codigo=0;
	cout<<"ingrese el codigo de area: ";
	cin>>codigo;
	switch(codigo){
		case 501 : cout<<"Belice"<<endl;
			break;
		case 502 : cout<<"Guatemala"<<endl;
			break;
		case 503 : cout<<"El Salvador"<<endl;
			break;
		case 504 : cout<<"Honduras"<<endl;
			break;
		case 505 : cout<<"Nicaragua"<<endl;
			break;
		case 506 : cout<<"Costa Rica"<<endl;
			break;
		case 507 : cout<<"Panama"<<endl;
			break;
		default :
			cout<<"este codigo no es de centroamerica"<<endl;
	}
	*/
	
	// variable = (condition) ? expressionTrue : expressionFalse;
	int n1=0, n2=0, n3=0, promedio=0;
	cout<<"ingrese nota 1: ";
	cin>>n1;
	cout<<"ingrese nota 2: ";
	cin>>n2;
	cout<<"ingrese nota 3: ";
	cin>>n3;
	promedio = (n1+n2+n3) / 3;
	
	/* HACER ESTO PERO CON UN IF CORTO
	if(promedio >=61){
		cout<<"aprobado"<<endl;
	}else{
		cout<<"reprobado"<<endl;
	}
	*/
	
	string mensaje="";
	mensaje = promedio>=61 ? "APROBADO" : "REPROBADO";
	cout<<"Su promedio es de: "<<promedio<< ", Por lo tanto el estudiante ha: "<<mensaje<<endl;
	
	if(promedio >= 0 && promedio <61){
		cout<<"Usted no ha ganado el curso"<<endl;
	}
	if(promedio >= 61 && promedio <89){
		cout<<"Bien hecho, usted ha ganado el curso"<<endl;
	}
	if(promedio >= 90){
		cout<<"Felicidades, usted se ha exonerado de sus privados"<<endl;
	}
	
	
	
	system("pause");
}

















/* Seleccion: if, if...else, switch
repeticion: while, do...while, for*/
>>>>>>> 43a1e6431f1627bbe67edc20da87ea7f600a13f2
