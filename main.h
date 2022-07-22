#ifdef __unix__                    /* __unix__ is usually defined by compilers targeting Unix systems */
    #define OS_Windows 0
    #include <iostream>
    #include <stdlib.h>
    #include <unistd.h>
#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
    #define OS_Windows 1
    #include <iostream>
    #include <stdlib.h>
    #include <unistd.h>
    #include <windows.h>
#endif

using namespace std;

bool halt(bool state){state = false;return state;}
bool resume(bool state){state = true;return state;}

void delay(int time){for(int x; x<time; x++){}}

void displaycl(int frame)
{
    if(!OS_Windows)
    {
        delay(50000000);
        system("clear");
    }
    else
    {
        system("cls");
    }
}

void move(int xsize, int ysize, int frame, int x, int y, int f, const char* s)
{
    if(xsize==x && ysize==y && frame == f) 
    {printf("%s", s);}
}

bool process(string n, bool state)
{
    printf("\n> ");
    cin>>n;
    if(n=="exit"|n=="Exit"|n=="EXIT")
    {
        exit(0);
    }
    else if(n=="resume"|n=="Resume"|n=="RESUME")
    {
        state = resume(state);
    }
    else
    {
        system("clear");
        printf("unknown input");
    }
    return state;
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