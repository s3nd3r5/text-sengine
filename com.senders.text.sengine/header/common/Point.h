#include "common\includes.h"
class Point{
public:
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
	~Point(){}
	int getX(){ return x; }
	int getY(){ return y; }
	bool is(Point* p){ return x == p->getX() && y == p->getY(); }
	string toString(){
		ostringstream  stream;
		stream << x << "," << y;
		return stream.str();
	}
private:
	int x, y;
};