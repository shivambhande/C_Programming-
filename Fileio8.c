// write a program to read the data from file and print it on console
// wirte a data from file on console

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{

    char Fname[20];
    char Data[100];
    int iRet =0;
    int Fd =0;

    printf("Enter the file name :");
    scanf("%[^'\n']s",Fname);

    Fd = open(Fname, O_RDWR | O_APPEND);

    if(Fd ==-1)
    {
        printf("Unable to open the file\n");
        return -1;

    }

    iRet = read(Fd,Data,sizeof(Data));

    printf("%d bytes gets succesfully read from file\n",iRet);

    printf("Data from file is :\n");
    write(1,Data,iRet);



    return 0;
}
