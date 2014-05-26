#pragma once
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include "io\printer.h"
#include "common\StringUtils.h"
using namespace std;
using std::string;
using std::vector;
using std::ifstream;
using std::map;
using std::pair;

enum DIRECTION{ UP, DOWN, LEFT, RIGHT, BAD };
string dirStr(DIRECTION dir){
	switch (dir){
	case UP: return "UP";
	case DOWN: return "DOWN";
	case LEFT: return "LEFT";
	case RIGHT: return "RIGHT";
	default: return "BAD";
	}
}
DIRECTION sDir(string s){
	if ("UP" == s){
		return UP;
	}
	else if ("DOWN" == s){
		return DOWN;
	}
	else if ("LEFT" == s){
		return LEFT;
	}
	else if ("RIGHT" == s){
		return RIGHT;
	}
	else{
		return BAD;
	}
}

int cint(char c){ return (int)c - '0'; }
int dint(double d){ return (int)d; }