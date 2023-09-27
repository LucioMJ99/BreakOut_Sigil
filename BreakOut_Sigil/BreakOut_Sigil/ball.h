#pragma once
#include "sl.h"

#include "vector2.h"

struct Ball
{
	const Vector2 initialSpeed = { 360.0f, 340.0f };
	const float initialRadius = 20;

	Vector2 ballPosition;
	Vector2 ballSpeed;
	float ballRadius;
};

void initBall(Ball& Ball);
void drawBall(Ball& Ball);