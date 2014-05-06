#pragma once
#include "common\includes.h"
class Properties{
private:
	map<string, int> integer_properties;
	map<string, double> double_properties;
	map<string,bool> bool_properties;
	map<string, string> string_properties;
public:
	Properties(){}
	~Properties(){}
	void setProperty(string key, int value){ integer_properties[key] = value; }
	void setProperty(string key, string value){ string_properties[key] = value; }
	void setProperty(string key, bool value){ bool_properties[key] = value; }
	void setProperty(string key, double value){ double_properties[key] = value; }

	int getInt(string key){ return integer_properties.at(key); }
	double getDouble(string key){ return double_properties.at(key); }
	bool getBool(string key){ return bool_properties.at(key); }
	string getString(string key){ return string_properties.at(key); }
};