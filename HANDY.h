/*
DESARROLLADO POR: PinkDev1 (www.github.com/PinkDev1)
LICENCIA: Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

/**LIBRERIAS**/
#include <iostream>


/**PROTOTIPOS**/
using namespace std;


/**PROTOTIPOS DE FUNCION**/
bool esPar(int);
bool esImpar(int);
bool esMultiploDe(int,int);
int factorial(int,bool);


/**DECLARACIONES DE FUNCIONES**/
bool esPar(int numEvaluado){
	if(numEvaluado==0){
		return true;
	} else {
		
		if( numEvaluado % 2 != 0 ){
			
			return false;
		}else {
		
			return true;		
		}	
	}
}


bool esImpar(int numEvaluado){
	
	if(numEvaluado==0){
		
		return false;
	} else{
		
		if( numEvaluado % 2 != 0 ){
				
			return true;
		} else {
			
			return false;		
		}
	}
}


bool esMultiploDe(int base, int objetivo){
	
	int aux=0;
	if(base==objetivo){
		return true;
	}else if(objetivo==0){
		return true;
	}else if(base==0){
		return false;
	} else if(objetivo>0){
		
		while(true){
			aux+=base;
			if(aux>objetivo){
				return false;
			} else if(aux==objetivo){
				return true;
			}
		}
	} else if(objetivo<0){
		
		while(true){
			aux-=base;
			if(aux<objetivo){
				return false;
			} else if(aux==objetivo){
				return true;
			}
		}
		
	}
	
}


bool esPrimo(int input){
	int aux=0;
	
	if(input!=0){
		//Si es positivo...
		if(input>0){
			//Dividir por todos los numeros entre n y 0
			for(int i=1;i<=input;i++){
				if( (input%i)==0 ){
					//Contar la cantidad de divisiones con resto 0
					aux++;	
				}
			}	
		} else {  //Si es negativo
			//Dividir por todos los numeros entre n y 0
			for(int i=-1;i>=input;i--){
				if( (input%i)==0 ){
					//Contar la cantidad de divisiones con resto 0
					aux++;	
				}
			}
		}
		
		//Si solo tiene 2 divisores..
		if(aux==2){
			return true;
		} else {
			return false;
		}
		
	} else return true;  //Si es igual a 0
	
}



//Funcion para calcular el factorial de un numero
int factorial(int numero, bool modoGrafico){
	
	int resultado=numero;
	if(modoGrafico==true){
		
		cout<<numero<<"! = ";
		
		if(numero==0){
			cout<<"0"<<endl;
			return 0;
		} else if(numero==1){
			cout<<"1"<<endl;
			return 1;
		} else if(numero==-1){
			cout<<"-1"<<endl;
			return -1;
		} else {
			cout<<numero<<"*";
		}
		
		//SI numero es positivo...
		if(numero>1){
			
			//Rotar por todos los numeros desde numero hasta 0
			for(int i=1;i<numero;i++){
				
				//Graficar bonito
				if(i+1==numero){  //Si es el ultimo numero...
					//Mostrar sin un * extra
					cout<<i<<" = ";
				} else {  //SI NO es el ultimo numero...
					//Mostrar con un *
					cout<<i<<"*";
				}
				
				//Calcular el factorial
				resultado*=i;
			}	
		} else{  //SI el numero NO es positivo...
			
			//Rotar por todos los numeros desde numero hasta 0
			for(int i=-1;i>numero;i--){
				
				if(i+1==numero){  //SI es el ultimo numero...
					cout<<i<<" = ";
				} else {  //SI NO es el ultimo numero...
					cout<<i<<"*";
				}
				
				//Calcular el factorial
				resultado*=i;
			}
		}  //FIN IF de verificacion si num es positivo o no
		cout<<resultado<<endl;  //MOSTRAR el resultado
		
	} else {  //Modo NO grafico...
	
		if(numero==0) return 0;
		
		//SI numero es positivo...
		if(numero>1){
			//Rotar por todos los numeros desde numero hasta 0
			for(int i=1;i<numero;i++){
				
				//Calcular el factorial
				resultado*=i;
			}	
		} else {  //SI el numero NO es positivo...
			
			//Rotar por todos los numeros desde numero hasta 0
			for(int i=-1;i>numero;i--){
				
				//Calcular el factorial
				resultado*=i;
			}
		}
		
	}
		
	return resultado;
}
