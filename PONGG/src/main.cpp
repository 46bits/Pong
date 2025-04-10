#include <raylib.h>
#include "Pong.h"

int main(){

    InitWindow(1000, 500, "Pong");
    SetTargetFPS(60);

    bool exitwindow = false;

    Paddle paddle1(50, 50, 1);
    Paddle paddle2(930, 50, 2);
    
    while(!exitwindow)
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        // Exits
        if (IsKeyPressed(KEY_ESCAPE)) exitwindow = true;


        //Moves paddles
        paddle1.update();
        paddle2.update();

        //Draws both paddles to screen
        paddle1.draw();
        paddle2.draw();

        
        
        EndDrawing();
    }
    


    CloseWindow();
    return 0;

}
