#ifndef GRAPHICS_SDL3_POSITIONCOLORVERTEX_HPP
#define GRAPHICS_SDL3_POSITIONCOLORVERTEX_HPP
#include <SDL3/SDL_stdinc.h>
typedef struct PositionColorVertex
{
	float x, y, z;
	Uint8 r, g, b, a;
} PositionColorVertex;

struct PositionTextureVertex
{
	float x, y, z;
	float u, v;
};
#endif //GRAPHICS_SDL3_POSITIONCOLORVERTEX_HPP