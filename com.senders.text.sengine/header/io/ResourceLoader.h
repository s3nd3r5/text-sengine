#pragma once
#include "common\includes.h"
#include "common\Properties.h"
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
				
				//Check if we use it?
				if(isComment(LINE) || isBlank(LINE)) continue;
				
				//Clean string
				LINE = removeComment(LINE);
				
				//Break apart
				vector<string> inner = tokenize(LINE,SPACE);
				
				//Push into map
				_map->push_back(inner);
			}
		}

		//close the stream
		stream.close();

		//return our map object
		return _map;
	}

	Properties* createProperties(string path){
		Properties* props = new Properties();
		ifstream stream;
		stream.open(path);
		string LINE;
		int x = 0;
		if (stream.is_open()){
			while (!stream.eof()){
				getline(stream, LINE);
				if (isComment(LINE) || isBlank(LINE)) continue;
				LINE = removeComment(LINE);
				
				vector<string> inner = tokenize(LINE, SPACE);
				
				string value = inner.at(1);
				string key = inner.at(0);
				
				if (is_number(value)){ props->setProperty(key, atoi(value.c_str())); }
				else if (value == "true"){ props->setProperty(key, true); }
				else if (value == "false"){ props->setProperty(key, false); }
				else props->setProperty(key, value);
			}
		}

		return props;
	}


	string removeComment(string line){
		if(line.find(COMMENT) != -1) return lsplit(line,COMMENT);
		return line;
		
	}
	bool isComment(string str){
		return trim(str).find(COMMENT) == 0;
	}

};
