#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");
outtextxy(23, 23, "Welcome to C Graphics");
line(20, 32, 215, 32);

getch();       // Wait for a key press
closegraph();

    return 0;
}