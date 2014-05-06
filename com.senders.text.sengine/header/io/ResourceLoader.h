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
				getline(stream, LINE);
				//0 1 e1 0 5 t31 0
				if(isComment(LINE) || isBlank(LINE)) continue;
				LINE = removeComment(LINE);
				vector<string> inner = splitOnDeliminator(LINE,SPACE);
				_map->push_back(inner);
			}
		}
		stream.close();
		return _map;
	}
	
	string removeComment(string line){
		if(line.find(COMMENT) != -1) return lsplit(line,COMMENT);
		return line;
		
	}
	bool isComment(string str){
		return trim(str).find(COMMENT) == 0;
	}

};
