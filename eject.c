#include <sys/ioctl.h>
#include <linux/cdrom.h>
#include <fcntl.h>

int main()
{
    int fd = open("/dev/sr0", O_RDONLY|O_NONBLOCK);
    ioctl(fd, CDROMEJECT, 0);
}