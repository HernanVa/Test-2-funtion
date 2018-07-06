#include <map>
namespace eliminar
{
	void quitarValor(std::map<char, int> temp_map)
	{
		temp_map.erase('1');						//Borrado del contenido de la tabla
		temp_map.erase('2');
		temp_map.erase('3');
		temp_map.erase('4');
		temp_map.erase('5');
	}
}
