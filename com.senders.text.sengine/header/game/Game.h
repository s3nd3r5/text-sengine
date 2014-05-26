#pragma once
#include "common\includes.h"
#include "common\Properties.h"
#include "io\ResourceLoader.h"
#include "game\API.h"


class Game{
public:
	Game(string gameFile, ResourceLoader* loader){
		Properties* p = loader->createProperties(gameFile);
		TITLE = p->getString(API.TITLE);
		startingLevel = p->getString(API.STARTING_LEVEL);
		_globalProperties = loader->createProperties(p->getString(API.GLOBAL_DEFS));
		delete p;
	}
	~Game(){
		
	}


private:
	string TITLE;
	string startingLevel;
	Properties* _globalProperties;
	map<string, string> levels;
};