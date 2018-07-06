#include <map>
//#include <iostream>
namespace maximo
{
	int busquedaMaximo(std::map<char, int> temp_map)
	{	
	//	std::cout << "hola max";
		int mayor=0;
		for (std::map<char,int>::iterator it=temp_map.begin(); it!=temp_map.end(); ++it) //Busqueda del Mayor valor de LivesContracts
		{
			for (std::map<char,int>::iterator iter=temp_map.begin(); iter!=temp_map.end(); ++iter)
	  		{
	  			if(it->second < iter->second)
	  			{
					mayor = iter->second;
				}
			}
		}
		return mayor;	
	}	
}
