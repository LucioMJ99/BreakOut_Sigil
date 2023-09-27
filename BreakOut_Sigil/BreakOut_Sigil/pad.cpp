#include "pad.h"

#include "sl.h"

#include "game.h"

static const int sgl_get_screen_width();

void initPad(Paddle& pad, Vector2 position, Vector2 size)
{
    pad.position = position;
    pad.size = size;
}

void drawPad(Paddle& pad)
{
    const int screenWidth = 800;
    const int screenHeight = 800;
    float barWidth = 150;  // Ancho de la barra
    float barHeight = 20;  // Altura de la barra
    float barX = (screenWidth - barWidth) / 1.68;  // Centrar la barra horizontalmente
    float barY = screenHeight - barHeight - 700; // Colocar la barra cerca de la parte inferior sin tocar el borde
    slRectangleFill(barX, barY, barWidth, barHeight);
}

void checkInputPad(Paddle& paddle)
{
    // Obtén el ancho de la pantalla
    const int screenWidth = sgl_get_screen_width();

    // Verifica si la tecla "A" está presionada para mover la paleta hacia la izquierda
    if (slGetKey(SL_KEY_A))
    {
        if (paddle.position.x >= 0) {
            paddle.position.x -= paddle.speed * slGetDeltaTime();
            if (paddle.position.x <= 0)
                paddle.position.x = 0;
        }
    }

    // Verifica si la tecla "B" está presionada para mover la paleta hacia la derecha
    if (slGetKey(SGL_KEY_D)) 
    {
        if (paddle.position.x + paddle.size.x <= screenWidth) {
            paddle.position.x += paddle.speed * slGetDeltaTime();
            if (paddle.position.x + paddle.size.x >= screenWidth)
                paddle.position.x = screenWidth - paddle.size.x;
        }
    }
}