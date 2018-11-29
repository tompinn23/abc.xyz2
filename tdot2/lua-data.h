#pragma once

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

typedef struct tp_Lua {
	lua_State* L;
	char[512] path;
} tp_lua;
