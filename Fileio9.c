#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[10];
    int fd =0;

    int iRet =0;

    printf("Enter the file name to open\n");
    scanf("%[^'\n']s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd ==-1)
    {
        printf("unable to open with file\n");
        return -1;
    }

    printf("File is succesfully opend with fd %d\n");

    while((iRet = read(fd,Data,sizeof(Data)))!=0)
    {
        write(1,Data,iRet);
    }

    close(fd);
    return 0;

}