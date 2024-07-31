#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    
    fd=open("demo.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is opened with %d",fd);
    }
    return 0;
}
