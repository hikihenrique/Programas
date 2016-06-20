#include <sys/ioctl.h>
#include <linux/cdrom.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cd Desktop/Programas/C");
    system("./eject");
    return 0;
}