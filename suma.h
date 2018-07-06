#include <map>
namespace suma
{
	int sumatoria(std::map<char, int> temp_map)
	{
		int aux=0;
		for (std::map<char,int>::iterator it=temp_map.begin(); it!=temp_map.end(); ++it){  //Entrega la suma total de LivesConstracts
			aux = aux + it->second;
		}
		return aux;	
	}
}
