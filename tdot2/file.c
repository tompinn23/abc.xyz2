#include "file.h"

#include <stdint.h>

#include "endian.h"

const char* PHYSFS_geterror()
{
	return PHYSFS_getErrorByCode(PHYSFS_getLastErrorCode());
}

int init_filesystem(const char* argv0, const char* basePath)
{
	if (PHYSFS_init(argv0) == 0)
	{
		log_error("PHYSFS failed to initialize: %s", PHYSFS_geterror());
		return -1;
	}

	if (PHYSFS_mount(basePath, NULL, 1) == 0)
	{
		log_error("Failed to mount the data directory : %s", PHYSFS_writeSBE16);
	}
}

