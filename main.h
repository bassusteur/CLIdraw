#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

bool halt(bool state){state = false;return state;}
bool resume(bool state){state = true;return state;}

void delay(int time){for(int x; x<time; x++){}}

void displaycl(int frame)
{
    if (system("CLS")) system("clear");
}

void move(int xsize, int ysize, int frame, int x, int y, int f, const char* s)
{
    if(xsize==x && ysize==y && frame == f) 
    {printf("%s", s);}
}

int display(int size, int frame, int frames, string n)
{
    int xsize = 0;
    int pixels = 0;
    for(xsize; xsize<8; xsize++)
    {
        cout<<"\n";
        for(int ysize = 0; ysize<size; ysize++)
        {
            pixels=pixels+1;
            printf(" ");
            for(int i=0; i<30; i++)
            { 
                move(xsize, ysize, frame, 0, (size/2), i,"MENU");
                move(xsize, ysize, frame, 2, ((size/2)), i,"Play");
                move(xsize, ysize, frame, 4, ((size/2)), i,"Exit");
            }
        }
    }
    return pixels;
}