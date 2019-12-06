/*
DESARROLLADO POR: PinkDev1 (www.github.com/PinkDev1)
LICENCIA: Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

/**LIBRERIAS**/
#include <iostream>
#include <limits>


/**DECLARACIONES**/
using namespace std;


/**PROTOTIPOS DE FUNCION**/
bool getBoolNumber();
double getDoubleNumber();
float getFloatNumber();
unsigned short int getUSIntNumber();
int getIntNumber();
unsigned int getUIntNumber();

void errorESP();
void errorENG();


//Sanitases the input for BOOLs
//On failure to sanitise the input, returns FALSE.
bool getBoolNumber(){
	
	bool num=false;
	
	cout<<flush;
	cin.clear();
	
	cin>>num;
	
	if (cin.fail()) {
		//cerr<<"\n\tSorry, I cannot read that. Please try again."<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    } else {
       	return num;
    }
    
}


//Sanitases the input for FLOATs
//On failure to sanitise the input, returns NULL.
//TESTING TIP:  1.40239846e–45f  |  3.40282347e+38f
float getFloatNumber(){
	
	float num=0;
	
	cout<<flush;
	cin.clear();
	
	cin>>num;
	
	if (cin.fail()) {
        //cerr<<"\n\tSorry, I cannot read that. Please try again."<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return NULL;
    } else {
       	return num;
    }
    
}

//Sanitases the input for DOUBLEs
//On failure to sanitise the input, returns NULL.
//TESTING TIP:   4.94065645841246544e–324d   |   1.7976931348623157e+308d  
double getDoubleNumber(){
	
	double num=0;
	
	cout<<flush;
	cin.clear();
	
	cin>>num;
	
	if (cin.fail()) {
        //cerr<<"\n\tSorry, I cannot read that. Please try again."<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return NULL;
    } else {
       	return num;
    }
    
}

//Sanitases the input for UNSIGNED SHORT INTegers
//On failure to sanitise the input, returns NULL.
//TESTING TIP: Maximum posible value: 65536  |  0
unsigned short int getUSIntNumber(){
	
	unsigned short int num=1;
	
	cout<<flush;
	cin.clear();
	
	cin>>num;
	
	if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return NULL;
    } else {
       	return num;
    }
	
}


//Sanitases the input for SIGNED INTegers
//On failure to sanitise the input, returns NULL.
//TESTING TIP: Maximum posible value: 2147483647  |  -2147483648
int getIntNumber(){
	
	int num=1;
	
	cout<<flush;
	cin.clear();
	
	cin>>num;
	
	if (cin.fail()) {
        //cerr<<"\n\tSorry, I cannot read that. Please try again."<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return NULL;
    } else {
       	return num;
    }
    
}

//Sanitases the input for UNSIGNED INTegers
//On failure to sanitise the input, returns NULL.
//TESTING TIP: Maximum posible value: 4294967295  |  0
unsigned int getUIntNumber(){
	
	unsigned int num=1;
	
	cout<<flush;
	cin.clear();
	
	cin>>num;
	
	if (cin.fail()) {
        //cerr<<"\n\tSorry, I cannot read that. Please try again."<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return NULL;
    } else {
       	return num;
    }
	
}




//Simple function to use in your programs to display an error
void errorESP(){
	
	//ON ERROR:
	cout<<"\n\n\tNumero invalido!\n\n\t";
	system("pause");
	system("cls");
	
}

void errorENG(){
	
	//ON ERROR:
	cout<<"\n\n\tInvalid number!\n\n\t";
	system("pause");
	system("cls");
	
}
