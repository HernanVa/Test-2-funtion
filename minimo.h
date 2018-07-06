#include <map>
namespace minimo
{
	int busquedaMinimo(std::map<char, int> temp_map)
	{	
		int menor=0;
		for (std::map<char,int>::iterator it=temp_map.begin(); it!=temp_map.end(); ++it)	//Busqueda del Menor valor de LivesContracts
		{
			for (std::map<char,int>::iterator iter=temp_map.begin(); iter!=temp_map.end(); ++iter)
	  		{
	  			if(it->second > iter->second)
	  			{
	  				menor = iter->second;
				}
			} 
		}
		return menor;	
	}	
}

