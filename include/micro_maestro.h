#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>

#define MAESTRO_ACC 0
#define MAESTRO_SPEED 0
 
int init_maestro();
int maestroSetTarget(int fd, unsigned char channel, unsigned short target);
int maestroGetPosition(int fd, unsigned char channel);
void close_maestro(int fd);
void maestroSetSpeed(int fd, int speed);

