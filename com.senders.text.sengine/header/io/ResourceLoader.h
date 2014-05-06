#pragma once
#include "common\includes.h"
#include "common\Map.h"
class ResourceLoader{
public:
	ResourceLoader(){}
	~ResourceLoader(){}
	MAP* makeMap(string path){
		MAP* _map = new MAP();
		ifstream stream;
		stream.open(path);
		string LINE;
		int x = 0;
		if (stream.is_open()){
			while (!stream.eof()){
				vector<string> inner;
				getline(stream, LINE);
				//0 1 e1 0 5 t31 0
				LINE = trim(LINE)+SPACE;
				while (isNotBlank(LINE)){
					string item = lsplit(LINE,SPACE);
					inner.push_back(item);
					LINE = rsplit(LINE,SPACE);
				}
				_map->push_back(inner);
			}
		}
		stream.close();
		return _map;
	}

};