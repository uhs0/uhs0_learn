#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
    int max_int = INT_MAX;
    int min_int = INT_MIN;

    // int over_max_int = INT_MAX + 1;
    // int over_min_int = INT_MIN - 1;

    printf("the maximum int number is %d\n", max_int);
    printf("the minimum int number is %d\n", min_int);

    // printf("what if the minimum int number add one: %d\n", over_max_int);
    // printf("what if the minimum int number minus one: %d\n", over_min_int);

    
    float max_float = FLT_MAX;
    float min_float = FLT_MIN;

    // float over_max_float = FLT_MAX + 1;
    // float over_min_float = FLT_MIN - 1;

    printf("the maximum float number is %f\n", max_float);
    printf("the minimum float number is %f\n", min_float);

    // printf("what if the minimum int number add one: %f\n", over_max_float);
    // printf("what if the minimum int number minus one: %f\n", over_min_float);

    return 0;
}
