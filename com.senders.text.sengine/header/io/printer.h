#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;
bool DEBUG = false;

void setDebug(bool d){
	DEBUG = d;
}


void printError(char* message){
	cout << "[ERROR] " << message << endl;
}

void printn(char* message){ cout << message << endl; }

void print(char * message){ cout << message; }

void printd(char * message){ if (DEBUG == true){ print(message); } }
void printdn(char* message){ if (DEBUG == true){ printn(message); } }