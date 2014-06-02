#include "common\includes.h"
#include "common\Point.h"

typedef vector<vector<string>> MAP;

class Map{
private:
	 MAP* _map;
public:
	Map(MAP* _map){
		this->_map = _map;
	}
	~Map(){}
	/* 
		Note: This is POINT on a MAP not in the 2-Dimensional Array
	*/
	string getAtPoint(Point* p){
		return getAtPoint(p->getX(), p->getY());
	}
	/* 
		Note: This is POINT on a MAP not in the 2-Dimensional Array
	*/
	string getAtPoint(int x, int y){
		return _map->at(y).at(x);
	}
};