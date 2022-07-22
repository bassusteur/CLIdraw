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
         if(frame==30){frame=0;}
         if(frames==10){state = halt(state);}
         displaycl(frame);
         display(size, frame, frames, n);
     }
     while(state == false)
     {
         state = process(n,state);
     }
    }
}