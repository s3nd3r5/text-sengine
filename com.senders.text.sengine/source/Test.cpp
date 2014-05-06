#include "common\includes.h"
#include "common\Map.h"
#include "io\ResourceLoader.h";
int main(){
	ResourceLoader* loader = new ResourceLoader();
	MAP* _map = loader->makeMap("level1/level1.MAP");
	Map* map = new Map(_map);
	return 0;
}