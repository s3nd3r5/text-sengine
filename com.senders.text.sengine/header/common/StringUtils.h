#pragma once
#include <string>
using namespace std;
using std::string;
static const string EMPTY = "";
static const char SPACE = ' ';
static const char COMMENT = ';';
static string ltrim(string str){
	if (EMPTY == str) return EMPTY;
	int end_of_spaces = -1;
	for (int i = 0; i < str.length(); i++){
		char c = str[i];
		if (isspace(c)){
			end_of_spaces++;
		}
		else{
			break;
		}
	}
	if (end_of_spaces < 0) return str;
	else if (end_of_spaces + 1 >= str.length()) return EMPTY;
	return str.substr(end_of_spaces + 1);
}

static string rtrim(string str){
	if (EMPTY == str) return EMPTY;
	int end_of_spaces = str.length();
	for (int i = str.length()-1; i >= 0; i--){
		char c = str[i];
		if (isspace(c)){
			end_of_spaces--;
		}
		else{
			break;
		}
	}
	if (0 > end_of_spaces) return str;
	else if (end_of_spaces == 0) return EMPTY;
	return str.substr(0,end_of_spaces);
}
static string trim(string str){
	return ltrim(rtrim(str));
}
static string lsplit(string line, char deliminator){
	int index = line.find(deliminator);
	if (index <= 0) return EMPTY;
	return line.substr(0, index);
}
static string rsplit(string line, char deliminator){
	int index = line.find(deliminator);
	if (index +1 == line.length()) return EMPTY;
	return line.substr(index + 1);
}

static bool isBlank(string str){
	return EMPTY == trim(str);
}

static bool isNotBlank(string str){
	return !isBlank(str);
}

static vector<string> tokenize(string str, char deliminator){
	str = trim(str);
	int index = str.find(deliminator);
	vector<string> tokens;
	while (index != -1){
		string token = lsplit(str, deliminator);
		tokens.push_back(token);
		str = trim(str.substr(index + 1));
		index = str.find(deliminator);
	}
	if (str.length() > 0) tokens.push_back(str);
	return tokens;
}

static bool is_number(string str){
	for (int i = 0; i < str.length(); i++){
		if (!isdigit(str[i])) return false;
	}
	return true;
}