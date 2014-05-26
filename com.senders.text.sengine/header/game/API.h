#pragma once

#include <string>
using namespace std;
using std::string;
struct API{
	//General Defs
	const string TITLE = "TITLE";
	const string STARTING_LEVEL = "STARTING_LEVEL";
	const string GLOBAL_DEFS = "GLOBAL_DEFS";
	
	//Map Defs
	const string WIDTH = "WIDTH";
	const string HEIGHT = "HEIGHT";
	const string OPEN = "OPEN";
	const string WALL = "WALL";
	const string START = "START";
	const string END = "END";

	//Map Display
	const string DISPLAY_WALL = "DISPLAY_WALL";
	const string DISPLAY_FOG = "DISPLAY_FOG";
	const string DISPLAY_TREASURE = "DISPLAY_TREASURE";
	
	//Character Display
	const string CHARACTER_LEFT = "CHARACTER_LEFT";
	const string CHARACTER_RIGHT = "CHARACTER_RIGHT";
	const string CHARACTER_UP = "CHARACTER_UP";
	const string CHARACTER_DOWN = "CHARACTER_DOWN";
} API;