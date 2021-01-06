//#########################
//Pekka Kana 2
//Copyright (c) 2003 Janne Kivilahti
//#########################
#pragma once

#include "engine/PRender.hpp"

#include <SDL.h>

class PSdl : public PRender::Renderer {

public:

    void clear_screen() override;
    void set_screen(PRender::FRECT screen_dst) override;
    int  set_shader(int mode) override;
    int  set_vsync(bool set) override;
    void update(void* buffer8, int alpha) override;

    PSdl(int width, int height, void* window);
    ~PSdl();

private:

    SDL_Window* curr_window;
    SDL_Renderer* renderer;
    //SDL_Texture* texture;
    //SDL_Surface* surface;
    SDL_PixelFormat *format;
    SDL_Palette* palette;

    SDL_Rect screen_dest;

};