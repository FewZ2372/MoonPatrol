#pragma once
#include "Car.h"
#include "MainMenu.h"
#include "Obstacle.h"
#include "Parallax.h"
#include <raylib.h>

struct Game
{
};

extern int framesCounter;

void Update();
void UpdateMenu();
void Drawing(Texture2D& background, Texture2D& foreground);
void RunGame(Texture2D& background, Texture2D& foreground);
void hasCollided();
void loseCondition();
void initializeAll();
