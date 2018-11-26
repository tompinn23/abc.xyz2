#pragma once

#include "physfs.h"

#include "log.h"
#include "file.h"

typedef struct __tp_file tp_file;


const char* PHYSFS_geterror();
int init_filesystem(const char* argv0, const char* basePath);

