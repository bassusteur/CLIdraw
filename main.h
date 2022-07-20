#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

bool halt(bool state) {state = false;return state;}
bool resume(bool state) {state = true;return state;}

void delay(int time) {for(int x; x<time; x++){}}

void displaycl(int frame) 
{
    system("cls");
}

void move(int XSIZE, int YSIZE, int frame, int x, int y, int f, const char* s)
{
    if(XSIZE==x && YSIZE==y && frame == f) 
    {printf(s);}
}

int display(int size, int frame, int frames, string n)
{
    int XSIZE = 0;
    int pixels = 0;
    for(XSIZE; XSIZE<8; XSIZE++){
        cout<<"\n";
        for(int YSIZE = 0; YSIZE<size; YSIZE++)
        {
            pixels=pixels+1;
            printf(" ");
            for(int i=0; i<30; i++){ 
             move(XSIZE, YSIZE, frame, 0, (size/2), i,"HELLO");
             move(XSIZE, YSIZE, frame, 2, ((size/2)), i,"WORLD");
            }
        }
    }
    return pixels;
}