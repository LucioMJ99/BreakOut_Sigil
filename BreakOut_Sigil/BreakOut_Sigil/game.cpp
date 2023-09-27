#include "game.h"

#include "sl.h"

#include "pad.h"
#include "brick.h"
#include "ball.h"
#include "player.h"

bool winner;
bool loser;
bool paused;
bool returnToMenu;
bool closeProgram;

const int screenWidth = 800;
const int screenHeight = 800;

float barWidth;
float barHeight;
float barX;
float barY;

void init(Player& player, Paddle& pad)
{
	winner = false;
	paused = false;
	returnToMenu = false;
	player.score = 0;
	player.lives = 3;
	initPad(pad, {barX, barY }, {barWidth, barHeight});
}

void draw(Paddle& pad)
{
	drawPad(pad);
}

void runGame()
{
	Paddle pad;
	
	slWindow(screenWidth, screenHeight, "Simple SIGIL Example", false);

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		slSetBackColor(0.0, 0.0, 0.0);

		slSetForeColor(1, 0, 0, 1);
		
		draw(pad);

		slRender();
	}

	slClose();
}