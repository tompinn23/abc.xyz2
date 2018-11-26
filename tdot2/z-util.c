#include "z-util.h"
#include "log.h"

#include <stdlib.h>

void quit(const char* str, int code)
{
	log_info("Quitting with error code: %d because %s", code, str);
	exit(code);
}