//dasher.cpp
/*
* Written By: Jordan Oliver
* Date Created: 1/3/24
*  This is a C++ side-scrolling game using the RayLib library.
*  This project will have a win condition, animations, imported assets, and a losing condition.
*  This project was taken from the GameDev.tv course.
* Link: github.com/JRoFlo/project2_dasher/
*/
#include "raylib.h"
//using namespace std;

int main()
{
    //Window Dimensions
    const int window_width{1280}; //Creating a variable that is not meant to be changed ever using const keyword
    const int window_height{720};

    //Character Variables
    const int character_width{50};
    const int character_height{80};
    int pos_y{window_height - character_height};
    int velocity{0}; //Our base velocity

    //Initialize Window
    InitWindow(window_width, window_height, "Jordan's Dapper Dasher");

    //Target FPS
    SetTargetFPS(60);
    
    //While Loop Game Logic
    while(!WindowShouldClose()) //aka WindowShouldClose() == false OR WindowShouldClose() != true
    {
        //Start Drawing
        BeginDrawing();
        ClearBackground(WHITE);

        //Jump Button
        if(IsKeyPressed(KEY_SPACE))
        {
            velocity -= 10; //Subtracting y values go up
        }
        pos_y += velocity;

        DrawRectangle(window_width/2, pos_y, character_width, character_height, BLUE);

        //Stop Drawing
        EndDrawing();
    }
    CloseWindow();
}


/*
* Program Notes:
*   - Velocity: Change in position over time (example: 10 m/s)
*       - Sign of Velocity determines which direction the character is moving
*
*/