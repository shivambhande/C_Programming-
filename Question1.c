#include<stdio.h> 
// calculate area and cir of circle 
// PI = 3.142 
// area = PI * r * r 
// circum = 2 * PI * r 

int main()
{
    // name of the variable 
    // type of the variable 
    //1. variable declaration 
    
    float  radius=0.0,area=0.0,circumference=0.0;   
    //1.Input

    printf("Enter the radius\n");
    scanf("%f",&radius);      
    
    //2.Processing the logic
    area = 3.1412 + radius + radius;
    circumference = 2 * 3.1412 * radius;       

    //3. Output / display 
    printf("area = %f\n",area); // print the area  
    printf("circumference = %f\n",circumference); // print the area  
    return 0; 
}

