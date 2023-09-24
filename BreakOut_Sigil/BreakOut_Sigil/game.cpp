#include "sl.h"
#include "game.h"
#include "pad.h"

bool winner;
bool loser;
bool returnToMenu;
bool closeProgram;

const int screenWidth = 800;
const int screenHeight = 800;

int barWidth = 150;  // Ancho de la barra
int barHeight = 20;  // Altura de la barra
int barX = (screenWidth - barWidth) / 1.68;  // Centrar la barra horizontalmente
int barY = screenHeight - barHeight - 700; // Colocar la barra cerca de la parte inferior sin tocar el borde

void init()
{

}

void draw()
{

}

void runGame()
{
	
	slWindow(screenWidth, screenHeight, "Simple SIGIL Example", false);

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		slSetBackColor(0.0, 0.0, 0.0);

		slSetForeColor(1, 0, 0, 1);
		slRectangleFill(barX, barY, barWidth, barHeight);

		slRender();
	}

	slClose();
}