#ifdef __unix__                    /* __unix__ is usually defined by compilers targeting Unix systems */
    #define OS_Windows 0
    #include <iostream>
    #include <stdlib.h>
    #include <unistd.h>
    #include <Windows>
#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
    #define OS_Windows 1
    #include <iostream>
    #include <stdlib.h>
    #include <unistd.h>
#endif

using namespace std;

bool halt(bool state){state = false;return state;}
bool resume(bool state){state = true;return state;}

void delay(int time){for(int x; x<time; x++){}}

void displaycl(int frame)
{
    if(!OS_Windows)
     system("clear");
     delay(100000000);
    else
    system("cls");
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