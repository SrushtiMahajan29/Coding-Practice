// Get the file name from user and open that file and check if it opened successfully or not 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char filename[30];
    int fd=0;

    printf("Enter the filename that you want to open from current directory: ");
    scanf("%s",filename);

    fd=open(filename,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open %s file",filename);
    }
    else{
        printf("%s gets opened successfully with %d",filename,fd);
        close(fd);
    }

    return 0;
}
