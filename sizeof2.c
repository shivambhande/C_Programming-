#include<stdio.h> 

int main()
{
    //printf("%d\n",sizeof(12.33)); // 8 bytes
    //printf("%d\n",sizeof(12.33f));// 4 bytes

    int num; 
    char ch; 
    double d1; 
    short int s1; 
    // sizeof is evaluated at compile time 

    printf("%d\n",sizeof(num+ch+d1));//8
    printf("%d\n",sizeof(100 + 4 ));// 4 

    printf("%d\n",sizeof(num + ch ));//4   

    printf("%d\n",sizeof(12.33 + 'A'));// 8

    printf("%d\n",sizeof(12.33f + 'A'));// 4

    printf("%d\n",sizeof(s1+ch)); 
    //                  short +char ==> int   



    return 0; 
}