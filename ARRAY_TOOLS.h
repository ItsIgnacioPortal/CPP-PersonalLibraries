/**LIBRERIAS**/
#include <iostream>

/**PROTOTIPOS**/
using namespace std;

/**PROTOTIPOS DE FUNCION**/
void llenarIntArreglo(int *,int,int);
void mostrarIntArreglo(int *,int,int);

/**DECLARACIONES DE FUNCIONES**/

//Llena un arreglo de numeros enteros con otros numeros enteros
void llenarIntArreglo(int *arreglo,int tamanio,int vaciarCon){
	
	for(int i=0;i<tamanio;i++){
		
		arreglo[i] = vaciarCon;
		
	}
	
}


//Muestra un arreglo de enteros
void mostrarIntArreglo(int *arreglo,int tamanio){
	
	for(int i=0;i<tamanio;i++){
		
		cout<<"["<<arreglo[i]<<"]";
		
	}
	cout<<endl;
	
}
