#pragma once

#include <raylib.h>

class Paddle{
    public:
        Paddle(int x, int y, int paddlenumber);
        void update();
        void draw();
        void reset(int x, int y);
    private:
        int x, y;
        int width, height;
        int paddlenumber;
        int speed;
        int score;
        Color colors;
};


class Ball{};