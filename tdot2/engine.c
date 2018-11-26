#include "engine.h"

#include "stdint.h"

#include "SDL.h"

#include "log.h"


struct _engine {
	int width;
	int height;
	SDL_Texture* font;
	SDL_Rect* fontClips;
	size_t szFontClips;
	SDL_Window* win;
	SDL_Renderer* renderer;
	int renderW;
	int renderH;
};

struct _engine* create_engine(const int width, const int height, const char* font)
{
	struct _engine* eng = malloc(sizeof(struct _engine));
	eng->width = width;
	eng->height = height;
	if (SDL_Init(0) < 0)
	{
		log_error("Failed to initialize SDL %s", SDL_GetError());
		return NULL;
	}

}