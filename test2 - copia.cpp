#include <iostream>
#include <map>
#include <string>
#include "minimo.h"
#include "maximo.h"
#include "reversa.h"
#include "ingresar.h"
#include "eliminar.h"
#include "suma.h"

using namespace std;
using namespace minimo;
using namespace maximo;
using namespace reversa;
using namespace eliminar;
using namespace ingresar;
using namespace suma;

int main ()
{
	std::map<char,int> trading;
	int menor=0, mayor=0,aux=0;					//Declaracion de variables
	
	trading['1'] = 32;							//Valores de la tabla
	trading['2'] = 22;
	trading['3'] = 12;
	trading['4'] = 42;
	trading['5'] = 27;

	menor = busquedaMinimo(trading);			//Llamado a la funcion para buscar el valor minimo
	cout << "El menor es: " << menor << endl;
	
	mayor = busquedaMaximo(trading);			//Llamado a la funcion para buscar el valor maixmo
	cout << "El mayor es: " << mayor << endl;
	cout<<"\n"<<endl;
	
	darVuelta(trading);							//Llamado a la funcion para invertir la iteracion

	quitarValor(trading);						//Llamado a la funcion para eliminar el contenido de trading
	cout << "\n Contenido borrado \n" <<endl;
	
	insertarValor(trading); 					//Llamado a la funcion para ingresar valores a Trading
	cout << "\n Contenido ingresado \n" <<endl;	
	
/*	for (std::map<char,int>::iterator it=trading.begin(); it!=trading.end(); ++it){  //Impresion del contenido actual de la tabla
		std::cout << it->first << " => " << it->second << '\n';
	}*/
	
	aux = sumatoria(trading);					//Llamado a la funcion que suma los valores de Trading
	cout << "\n La suma de Lives Constracts es: " << aux << endl;
}





