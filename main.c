#include <stdio.h>
#include <windows.h>

COORD coord = {0, 0};
//snake game
int main (){

}

void gotoxy(int x,int y){
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void Move(){

}
void Food(){

}

int score(){

}

void delay(long double k){
    
}