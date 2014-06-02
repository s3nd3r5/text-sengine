#include "common/includes.h"
#include "io/Params.h"
#include "game/Game.h"


int main(int argc, char* argv[]){
	if (argc < 2){
		printError("Unable to start game. No game File Found");
		return 255;
	}
	Params* params = new Params(argc, argv);
	setDebug(params->getParam(DEBUG));
	printd("You are playing... ");
	printdn(argv[1]);
	ResourceLoader* loader = new ResourceLoader();
	Game* game = new Game(argv[1],loader);

	delete params;
	delete loader;
	delete game;
	return 1;
}