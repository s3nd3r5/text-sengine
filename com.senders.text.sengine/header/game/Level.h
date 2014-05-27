#pragma once
#include "common/includes.h"
#include "io/ResourceLoader.h"
#include "common/Map.h"
#include "common/Properties.h"
#include "game/API.h"	

class Level{
	public:
		Level(string levelFile, ResourceLoader* loader){
			properties = loader->createProperties(levelFile);
			map = loader->makeMap(properties->getString(API.MAP));
		}
		~Level(){

		}
	private:
		Properties* properties;
		MAP* map;

};