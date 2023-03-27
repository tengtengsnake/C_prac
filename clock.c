#include <stdio.h>
#include "raylib.h"
#include <math.h>
#include <time.h>
void drawHourHand(int cx,int cy,int radius,int h,int m,int s)
{
    Vector2 startV,endV; // 宣告兩個結構變數
    double theta = (h*60*60+m*60+s)*2*PI/(60*60*12); // 總共多少秒 -> 刻度指到哪
    double phi = PI/2-theta;

    startV.x = cx; startV.y = cy;
    endV.x = 0.70*radius*cos(phi)+cx;
    endV.y = -0.70*radius*sin(phi)+cy;
    DrawLineEx(startV,endV,10,BLACK);
}
void drawMinuteHand(int cx,int cy,int radius,int h,int m,int s)
{
    Vector2 startV,endV;
    double theta = (h*60*60+m*60+s)*2*PI/(60*60); // 多少秒
    double phi = PI/2-theta;

    startV.x = cx; startV.y = cy;
    endV.x = 0.80*radius*cos(phi)+cx;
    endV.y = -0.80*radius*sin(phi)+cy;
    DrawLineEx(startV,endV,5,RED);
}
void drawSecondHand(int cx,int cy,int radius,int h,int m,int s)
{
    Vector2 startV,endV;
    double theta = (h*60*60+m*60+s)*2*PI/(60); // 多少秒 (一圈有12*60*60秒) ->算時針轉幾圈(轉了幾度了)
    double phi = PI/2-theta;

    startV.x = cx; startV.y = cy;
    endV.x = 0.90*radius*cos(phi)+cx;
    endV.y = -0.90*radius*sin(phi)+cy;
    DrawLineEx(startV,endV,2,PINK);
}
void drawClockFace(int cx,int cy,int radius,struct tm *tt)
{
    DrawCircle(cx,cy,radius,WHITE);
    DrawCircle(cx,cy,radius/25,BLACK);
    DrawCircleLines(cx,cy,radius,BLACK);
    for(int i=0;i<60;i++)
    {
        double theta = i*2*PI/60;
        Vector2 endV,startV;
        endV.x = radius*cos(theta)+cx;
        endV.y = radius*sin(theta)+cy;
        if (i%15==0)
        {
            startV.x = 0.85*radius*cos(theta)+cx;
            startV.y = 0.85*radius*sin(theta)+cy;
            DrawLineEx(startV,endV,1,PURPLE);
        }else if (i%5==0){
            startV.x = 0.9*radius*cos(theta)+cx;
            startV.y = 0.9*radius*sin(theta)+cy;
            DrawLineEx(startV,endV,1,BLUE);
        }
        // internal circle 
        startV.x = 0.95*radius*cos(theta)+cx;
        startV.y = 0.95*radius*sin(theta)+cy;
        DrawLineEx(startV,endV,1,BLUE); // 1是thickness,conversion from drawline to drawlineex
    }

    
    drawHourHand(cx,cy,radius,tt->tm_hour,tt->tm_min,tt->tm_sec);
    drawMinuteHand(cx,cy,radius,tt->tm_hour,tt->tm_min,tt->tm_sec);
    drawSecondHand(cx,cy,radius,tt->tm_hour,tt->tm_min,tt->tm_sec);
}
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    const int clockRadius = 200;
    const int x = screenWidth/2;
    const int y = screenHeight/2;

    const int fontSize = 40;

    InitWindow(screenWidth, screenHeight, "analog clock example");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        // 得到時間
        time_t t = time(NULL); // 取得現在時間,time_t 就是一個數字
        struct tm *tt = localtime(&t);
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            drawClockFace(screenWidth/2,screenHeight/2,clockRadius,tt); 
            //DrawText(timestr, x, y, fontSize, BLUE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
