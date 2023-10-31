#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void cmouse(){
    int fd, bytes;
    unsigned char data[3];
    const char *mouse = "/dev/input/mice";

    // opens mouse
    fd = open(mouse, O_RDWR);

    // if mice can not opened, prints en error text
    if(fd == -1)
    {
        printf("ERROR Opening %s\n", mouse);
    }

    signed char x, y;
    int relativeX, relativeY=0;

    while(1)
    {
        // reads mouse
        bytes = read(fd, data, sizeof(data));

        if(bytes > 0)
        {
            x = data[1];
            y = data[2];
            relativeX = relativeX+ x;
            relativeY = relativeY + y;

            printf("X=%d, Y=%d \n", relativeX, relativeY) ;
        }
    }

}

int main(int argc, char** argv){
    cmouse();
}