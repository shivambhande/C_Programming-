#include<stdio.h> 


int main()
{
 // sizeof() ==> sizeof is an operator 
 // sizeof returns the size in bytes
 // sizeof ==> integer format   

    int num = 10 ;
    // int ==> datatype 
    // num ==> name given the the variable  

    printf("num = %d\n",sizeof(num));//4 
    // 4 bytes 
    // 1 byte == 8 bits 
    // 4 bytes ==> 32 bits 
    // sizeof returns the size in integer 
    // so %d format specifier is used  

    // sizeof() ===> %d 
    // sizeof always give me the O/P in form of Integer 

    char ch = 'A';// variable declaration 
    //  'A' ==> 65 
    // binary of 65 is getting stored in 1 byte 

    printf("char variable = %d\n",sizeof(ch));// 1 byte 
    // 1 byte ==> 8 bits 

    double dvar;    
    printf("double variable= %d\n",sizeof(dvar));// 8 byte
    // 8 byte ==> 64 bits  

    // int ==> 4 
    // char ==> 1 
    // double ==> 8 

    printf("100 = %d\n",sizeof(100));// 4  
    // 100 ==> 100 is an integer
    // integer ==> 4 byte  

    printf("char constant = %d\n",sizeof('A')); // 4
    // 'A' internally its ascii value is 65 
    //printf("%d\n",sizeof(65)); // 4 
    // 'A'  ==> character 
    //  ASCII value 

    return 0; 
}