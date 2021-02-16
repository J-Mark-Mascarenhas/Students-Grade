#include<stdio.h>
int main()
{
    float total,percent;
    printf("enter the total marks obtained in 6 subjects\n");
    scanf("%f",&total);
    percent=total/6;
    printf("you got %f percent\n",percent);

    if(percent>=75)
    printf("distinction\n");

    else if(percent>=60 && percent<75)
    printf("first class\n");

    else if(percent>=40 && percent<60)
    printf("second class\n");

    else if(percent>=35 && percent<40)
    printf("pass class\n");

    else
    printf("fail\n");

    return 0;
}