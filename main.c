#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

COORD coord = {0, 0};
//snake game

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int length;
int bend_no;
int len;
char key;
void record();
void load();
int life;
void Delay(long double);

void Bend();


int main (){



}



void gotoxy(int x,int y){
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void load()
{
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("loading...");
    gotoxy(36,15);
    for(r=1; r<=20; r++)
    {
        //to display the character slowly
        for(q=0; q<=100000000; q++); 
        printf("%c",177);
    }
    getch();
}



void down(){
    int i;
    //for(i = 0; i<=(head.y-)){}
}

// {void Bend()
// {
//     int i,j,diff;
//     for(i=bend_no; i>=0&&len<length; i--)
//     {
//         if(bend[i].x==bend[i-1].x)
//         {
//             diff=bend[i].y-bend[i-1].y;
//             if(diff<0)
//                 for(j=1; j<=(-diff); j++)
//                 {
//                     body[len].x=bend[i].x;
//                     body[len].y=bend[i].y+j;
//                     GotoXY(body[len].x,body[len].y);
//                     printf("*");
//                     len++;
//                     if(len==length)
//                         break;
//                 }
//             else if(diff>0)
//                 for(j=1; j<=diff; j++)
//                 {
//                     /*GotoXY(bend[i].x,(bend[i].y-j));
//                     printf("*");*/
//                     body[len].x=bend[i].x;
//                     body[len].y=bend[i].y-j;
//                     GotoXY(body[len].x,body[len].y);
//                     printf("*");
//                     len++;
//                     if(len==length)
//                         break;
//                 }
//         }
//         else if(bend[i].y==bend[i-1].y)
//         {
//             diff=bend[i].x-bend[i-1].x;
//             if(diff<0)
//                 for(j=1; j<=(-diff)&&len<length; j++)
//                 {
//                     /*GotoXY((bend[i].x+j),bend[i].y);
//                     printf("*");*/
//                     body[len].x=bend[i].x+j;
//                     body[len].y=bend[i].y;
//                     GotoXY(body[len].x,body[len].y);
//                     printf("*");
//                     len++;
//                     if(len==length)
//                         break;
//                 }
//             else if(diff>0)
//                 for(j=1; j<=diff&&len<length; j++)
//                 {
//                     /*GotoXY((bend[i].x-j),bend[i].y);
//                     printf("*");*/
//                     body[len].x=bend[i].x-j;
//                     body[len].y=bend[i].y;
//                     GotoXY(body[len].x,body[len].y);
//                     printf("*");
//                     len++;
//                     if(len==length)
//                         break;
//                 }
//         }
//     }
// }}

void Move(){

}
void Food(){

}

int score(){

}



void delay(long double k){
    
}