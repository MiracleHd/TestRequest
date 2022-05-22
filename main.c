#include <stdio.h>

double func(double *, int);
double func1(double *, int);


int main(void){
    double x[6] = {1,2,3,4,5,6};
    double result;
    result = func(x,2);
    printf("result func: = %f \n", result);
    result = func1(x,2);
    printf("result func1: = %f \n", result);
    return 0;
}

double func(double *x, int numbArray){
    return x[numbArray];
}

double func1(double *x, int numbArray){
    return *(x+numbArray);
}