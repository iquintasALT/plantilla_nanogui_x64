#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

//He probado sin incluir nanogui y funciona bien. Cuando añado las clases de Nanogui a Visual Studio salen errores.
//He puesto _CRT_SECURE_NO_WARNINGS en Propiedades de configuracion -> C++ -> Preprocesador -> Definiciones de preprocesador para evitar algunos errores.

//main de c para que no de problemas sdl
int main(int x, char** args) {
    //esto solamente es para comprobar que sdl, sdl_ttf y sdl_image funcionan
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    TTF_Init();
    int initted = IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);
    
	return 0;
}