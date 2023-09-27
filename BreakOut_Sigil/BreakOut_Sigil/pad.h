#pragma once
#include "sl.h"

#include "vector2.h"

struct Paddle
{
    float speed = 160.0f; 
    Vector2 position;
    Vector2 size;
};

void initPad(Paddle& pad, Vector2 position, Vector2 size);

void drawPad(Paddle& pad);

void checkInputPad(Paddle& Pad);


