// write a program to open current file and read data from it and print 
// it on console 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20];
    char Data[100];

    int fd =0;
    int iRet =0;

    printf("Enter file name to open \n");
    scanf("%s",Fname);


    fd = open(Fname, O_RDWR | O_APPEND);

    if(fd ==-1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    printf("File is succefully opend with Fd %d\n",fd);

    iRet =read(fd,Data,sizeof(Data));
    printf("%d bytes gets sucessfully read from the file \n",iRet);
    printf("Data from the is :%s\n",Data);
    return 0; 
}
