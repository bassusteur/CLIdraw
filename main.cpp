#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

void displaycl(int time) 
{
    for(int x; x<time; x++){}
    system("cls");
}

void ant(int a, int t, int frame, int i)
{
    if(a==1 && i==5 && frame > 1)
        {cout<<" "<<".";}
    else if(a==2 && i==5 && frame > 2)
        {cout<<" "<<".";}
    else if(a==3 && i==5 && frame > 3)
        {cout<<" "<<".";}
    else if(a==4 && i==5 && frame > 4)
        {cout<<" "<<".";}
    else
        {cout<<" "<<" ";}
}

int display(int size, int frame)
{
    int i = size;
    int x = 0;
    int a = 0;
    int t = 5;
    for(a; a<size; a++){
     if(i==size)
     {
        i = 0;
        cout<<"\n";
        for(i; i<size; i++)
        {   
            x=x+1;
            ant(a,t,frame,i);
        }
     }
    }
    return x;
}

int main()
{
    int size = 10;
    int frame=0;
    int x;

    while(true){
        frame++;

        display(size, frame);
        displaycl(100000);
    }
}