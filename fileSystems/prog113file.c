//Create one file and copy the data of another file into new file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FnameSrc[30];
    char FnameDest[30];
    char Buffer[BUFFERSIZE] = {'\0'};

    int fd1 = 0 ,fd2=0, iRet = 0;

    printf("Enter the name of existing file that you want to open from current directory\n");
    scanf("%s",FnameSrc);

    printf("Enter the name of new file that you want to create into current directory\n");
    scanf("%s",FnameDest);

    fd1=open(FnameSrc,O_RDONLY);
    if(fd1 == -1)
    {
        printf("Unable to open %s file\n",FnameSrc);
        return -1;
    }    
    fd2=creat(FnameDest,0777);

    if(fd2==-1)
    {
         printf("Unable to create %s file\n",FnameDest);
        return -1;
    }
   while((iRet=read(fd1,Buffer,sizeof(Buffer)))!=0)
   {
    write(fd2,Buffer,iRet);
   }

    close(fd1);
    close(fd2);

    printf("Fle copied successsful");
    return 0;
}