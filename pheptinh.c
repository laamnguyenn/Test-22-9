#include <stdio.h>
float sum(float a, float b);
float sub(float a, float b);
float multi(float a, float b);
float div(float a, float b);

int main(){
    float a, b;
    printf("Type in 2 number\n");
    printf("Type in first number:");
    scanf("%f", &a);
    printf("Type in second number:");
    scanf("%f", &b);

    printf(" Total of two numbers: %f\n ", sum(a, b));
    printf(" Substraction of two numbers: %f\n", sub(a, b));
    printf(" Multiplication of two numbers: %f\n", multi(a,b));
    printf("Division of two numbers: %f\n", div(a,b));
}
float sum(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float multi(float a, float b){
    return a*b;
}
float div(float a,float b){
    return a/b;
}