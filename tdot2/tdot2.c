// tdot2.cpp : Defines the entry point for the application.
//

#include "tdot2.h"
#include "log.h"
#include "engine.h"
#include "file.h"

int main(int argc, char** argv)
{
	init_filesystem(argv[0], "data");
	engine* eng = create_engine(120, 80, "terminal.png");

	while (1);
	return 0;
}
