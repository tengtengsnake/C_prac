#include <stdio.h>
#include <math.h>
#include <time.h>
#include "raylib.h"
void drawClockFace(int cx ,int cy,int radius) // 半徑用視窗大小來算
{
    for(int i=0;i<60;i++)
    {
        double theta = i*2*PI/60;
        Vector2 startV,endV;
        endV.x = 1.5*radius*cos(theta) + cx;
        endV.y = 1.5*radius*sin(theta) + cy;
        
        if(i%15==0)
        {
            startV.x = 0.55*radius*cos(theta) + cx;
            startV.y = 0.55*radius*sin(theta) + cy;
            DrawLineEx(startV,endV,7,BLUE);
        }else if (i%5==0){ // 分鐘刻度
            startV.x = 0.55*radius*cos(theta) + cx;
            startV.y = 0.55*radius*sin(theta) + cy;
            DrawLineEx(startV,endV,4,BLUE);
        }
        // internal circle
        startV.x = 0.55*radius*cos(theta) + cx;
        startV.y = 0.55*radius*sin(theta) + cy;
        DrawLineEx(startV,endV,1,BLUE); // vector startpos,endpos,thicknesss,color 畫線
    }
    // 自訂內圈矩型顏色
    Color RAYBROWN = {211,176,131,255}; // 透明度,滴管量色
    // draw clock 中間部分
    // 畫出內圈矩型
    Rectangle rect = {cx-195,cy-195,390,390}; // 圓角方形位址,大小為390x390
    DrawRectangleRounded(rect,0.2,0,RAYBROWN); // 矩形的圓角半徑為 0.2,越小越不圓，分為 0 段。矩形的顏色為指定的。
    // 畫一個有edge的矩型線條,蓋住多出的部分
    Rectangle rect2 = {cx-210,cy-210,420,420}; // 位址,大小為420x420
    DrawRectangleRoundedLines(rect2,0.2,0,25,RAYWHITE); // 矩形的圓角半徑為 0.2，分為 0 段。矩形線條的顏色為指定的。
}
void drawHourHand(int cx,int cy,int radius,int h,int m,int s)
{
    Vector2 startV,endV; // 宣告兩個結構變數
    double theta = (h*60*60+m*60+s)*2*PI/(60*60*12); // 總共多少秒 -> 刻度指到哪
    double phi = PI/2-theta;

    startV.x = cx;
    startV.y = cy;
    endV.x = 0.79*radius*cos(phi)+cx;
    endV.y = -0.79*radius*sin(phi)+cy;
    DrawLineEx(startV,endV,15,BLACK); 
}
void drawMinuteHand(int cx,int cy,int radius,int h,int m,int s)
{
    Vector2 startV,endV;
    double theta = (h*60*60+m*60+s)*2*PI / (60*60); // 走幾圈的分針
    double phi = PI/2-theta;

    startV.x = cx; 
    startV.y = cy;
    endV.x = 0.85*radius*cos(phi)+cx;
    endV.y = -0.85*radius*sin(phi)+cy;
    DrawLineEx(startV,endV,10,BLACK);
}   
void drawSecondHand(int cx,int cy,int radius,int h,int m,int s)
{
    Vector2 startV,endV;
    double theta = (h*60*60+m*60+s)*2*PI / (60); // 多少秒 (一圈有12*60*60秒)*2PI的弧度->變角度 ->算秒針轉幾圈(轉了幾度了)
    double phi = PI/2-theta;

    startV.x = cx;
    startV.y = cy;
    endV.x = 0.90*radius*cos(phi)+cx;
    endV.y = -0.90*radius*sin(phi)+cy;
    DrawLineEx(startV,endV,5,RED);
}
// 繪製中間紅色方塊
void iRec(int cx,int cy,int radius,int h,int m,int s)
{
    Vector2 startV,endV;
    double theta = (h*60*60+m*60+s)*2*PI / (60);
    double phi = PI/2-theta;
    
    // printf("%.2f",phi);
    Rectangle rect = { cx, cy, 20, 20 }; // 位置,大小
    Vector2 origin = { rect.width/2, rect.height/2 };
    DrawRectanglePro(rect, origin, -phi*180/PI, RED); // rec Vector2原點,float 旋轉,Color
    // 這裡phi 是一個弧度,要將弧度轉換成度數,弧度*180/PI即可,方向怪怪的乘上一個-號讓他換成順時鐘轉

}

int main(void)
{
    // Initialization
    const int screenWidth = 450;
    const int screenHeight = 450;

    InitWindow(screenWidth,screenHeight,"Test grid");

    SetTargetFPS(60);

    // main loop
    while (!WindowShouldClose())
    {
        // Update
        // 得到時間
        time_t t = time(NULL); // 取得現在時間,time_t 就是一個數字
        struct tm *tt = localtime(&t); // tt 是一個指標結構變數

        BeginDrawing();

            ClearBackground(RAYWHITE);
            drawClockFace(screenWidth / 2,screenHeight / 2 ,screenWidth/1.77); // radius
            drawHourHand(screenWidth/2,screenHeight/2,screenHeight/2,tt->tm_hour,tt->tm_min,tt->tm_sec); // x,y(位置),round rec的半徑,時間
            drawMinuteHand(screenWidth/2,screenHeight/2,screenHeight/2,tt->tm_hour,tt->tm_min,tt->tm_sec); // x,y(位置),round rec的半徑,時間
            drawSecondHand(screenWidth/2,screenHeight/2,screenHeight/2,tt->tm_hour,tt->tm_min,tt->tm_sec); // x,y(位置),round rec的半徑,時間
            iRec(screenWidth/2,screenHeight/2,screenHeight/2,tt->tm_hour,tt->tm_min,tt->tm_sec);
        EndDrawing();

    }
    CloseWindow();

    return 0;
    
}
