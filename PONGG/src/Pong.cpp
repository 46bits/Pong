#include "Pong.h"
#include <raylib.h>

Paddle::Paddle(int x, int y, int paddlenumber)
{
    this->x = x;
    this->y = y;
    this->paddlenumber = paddlenumber;
    speed = 1;
    score = 0;
    width = 20;
    height = 100;
    colors = { 255, 0, 0, 255 };
}

void Paddle::update()
{
    //Moves the padle up and down
    if (paddlenumber == 1)
    {
        if (IsKeyDown(KEY_W) && y > 0) y -= speed;
        if (IsKeyDown(KEY_S) && y < GetScreenHeight() - height) y += speed;
    }

    if (paddlenumber == 2)
    {
        if (IsKeyDown(KEY_UP) && y > 0) y -= speed;
        if (IsKeyDown(KEY_DOWN) && y < GetScreenHeight() - height) y += speed;
    }

    //Clamps the paddle to the screen
    if (y < 0) y= 0 ;
    if (y > GetScreenHeight() - height) y = GetScreenHeight() - height;

}
void Paddle::draw()
{
    DrawRectangle(x, y, width, height, colors);
}

void Paddle::reset(int x, int y)
{
    this->x = x;
    this->y = y;
}