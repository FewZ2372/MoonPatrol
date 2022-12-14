#pragma once
#include <raylib.h>

struct Car
{
	Rectangle rec;
	Vector2 speed;
	Vector2 startingPoint;
	bool isJumping;
	bool canCollide;
	int lives;
	float maxJump;
};
extern Car car;

void initializeCar();
void playerInput();
void playerMovement();
