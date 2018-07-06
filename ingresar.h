#include <map>
namespace ingresar
{
	void insertarValor(std::map<char, int> temp_map)
	{
		temp_map.insert(std::pair<char, int>('1', 10)); //Ingresa un valor en la tabla
		temp_map.insert(std::pair<char, int>('2', 20)); 
		temp_map.insert(std::pair<char, int>('3', 30)); 
		temp_map.insert(std::pair<char, int>('4', 40)); 
		temp_map.insert(std::pair<char, int>('5', 50)); 
	}
}
