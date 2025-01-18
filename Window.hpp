#ifndef WINDOW_HPP
#define WINDOW_HPP
#include <SDL3/SDL_video.h>
class Window {
public:
	SDL_Window* sdlWindow;
	void Init();
	void Close() const;
	int width{ 800 };
	int height{ 800 };
};
#endif //WINDOW_HPP