#include "main.h"

int main()
{
    string n;
    while(true){
     bool state = true;
     int size = 50;
     int frame = -1;
     int frames = 0;
     while(state == true)
     {
        frames++;
        frame++;
        if(frame==30){state = halt(state);frame=0;}
        displaycl(frame);
        display(size, frame, frames, n);
     }
     while(state == false)
     {
        printf("\n> ");
        cin>>n;
        if(n=="exit"){exit(0);}
        state = resume(state);
     }
    }
}