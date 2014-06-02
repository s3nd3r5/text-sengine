#include "common\includes.h"
#define DEBUG 'd'
class Params{
public: 
	Params(int argc, char* argv[]){
		for (int argn = 2; argn < argc; argn++){
			char in = *argv[argn];
			switch (in){
				case DEBUG: params[in] = true; break;
			}
		}
	}

	bool getParam(char c){
		return params[c];
	}

private:
	map<char, bool> params;
};