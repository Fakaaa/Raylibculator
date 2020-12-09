#include "Aplication/program.h"
void main() {
	Program* app = new Program();
	if (app != NULL) {
		app->runApp();
		delete app;
		app = NULL;
	}
}