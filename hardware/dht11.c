#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "dht11.h"

int dht11_get_data(unsigned char *humi, unsigned char *temp)
{
    int fd;
    unsigned char data[4];
    fd = open("/dev/100ask_dht11", O_RDWR);
    if (fd == -1)
    {
        printf("====failed to open device dht11!====\n");
        close(fd);
        return -1;
    }
    if (read(fd, data, 4) == 4)
    {
        printf("get humidity : %d.%d \n", data[0], data[1]);
        printf("get temperature : %d.%d \n", data[2], data[3]);
        printf("----------------------------------------------------------\n");
        (*humi) = data[0];
        (*temp) = data[2];
        (*temp) += data[3] > 4 ? 1 : 0;
    }
    else
    {
        printf("get humidity/temperature: -1\n");
        close(fd);
        return -1;
    }
    close(fd);
    return 0;
}
