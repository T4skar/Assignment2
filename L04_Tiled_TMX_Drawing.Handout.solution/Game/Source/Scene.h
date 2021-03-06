#ifndef __SCENE_H__
#define __SCENE_H__

#include "Module.h"

struct SDL_Texture;

class Scene : public Module
{
public:

	Scene();

	// Destructor
	virtual ~Scene();

	// Called before render is available
	bool Awake();

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();
	bool dWin = false;
	bool dLose = false;
	SDL_Texture* lose = nullptr;
	SDL_Texture* Win = nullptr;
	// Called before quitting
	bool CleanUp();
	SDL_Texture* fondo = nullptr;
private:
	SDL_Texture* img;
};

#endif // __SCENE_H__