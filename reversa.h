#include <map>
#include <iostream>
namespace reversa
{
	void darVuelta(std::map<char, int> temp_map)
	{
		std::map<char,int>::reverse_iterator rit;	 //funcion reversa
		for (rit=temp_map.rbegin(); rit!=temp_map.rend(); ++rit)
		{
			std::cout <<rit->first << " -> " << rit->second << '\n';  //imprime el resultado
		}
	}
	
}
