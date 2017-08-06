#include <iostream>
#include <string.h>
#include "userial.h"

int main(int argc, char* argv[])
{
    char *portname = "/dev/ttyUSB0";



    int fd = userial_set_connection(portname);

    std::cout << "argc: " << argc << std::endl;

    std::cout << "argv0: " << argv[0] << std::endl;

    std::cout << "input: " << argv[1] << std::endl;

    size_t length = strlen(argv[1]);//best use ptr's type -> good habit

    std::cout << "length: " << length << std::endl;

    userial_write(fd, argv[1], length);
    char buf [100];
    int n = userial_read(fd, buf);

    char buf2 [100];
    strncpy(buf2, buf, n);
    buf2[n] ='\0';
    std::cout << "buf: " << buf << " len: " << strlen(buf) << std::endl;
    std::cout <<"receive " << n << " chars: " <<  buf2 << std::endl;

    userial_close_connection(fd);

    return 0;
}
