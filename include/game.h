#pragma once

#include "window.h"
#include "particlesystem.h"
#include <SFML/Graphics.hpp>

//Particle -> ParticleSystem

class Game
{
public:
    Game();
    virtual ~Game() = default;

    void Run();
    void HandleInput();
    void Update(const float dt);
    void Render();


private:
    Window main_window_;

    ParticleSystem particles_;
};
