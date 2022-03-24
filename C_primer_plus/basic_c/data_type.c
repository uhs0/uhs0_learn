#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t i;
    printf("sizeof is %d\n", len);
    for (i = 0; i < len; i++)
        printf("%.2x",start[i]);
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer)&x,sizeof(int));
}

void show_short(short x){
    show_bytes((byte_pointer)&x,sizeof(short));
}

void show_long(long x){
    show_bytes((byte_pointer)&x,sizeof(long));
}

void show_float(float x){
    show_bytes((byte_pointer)&x,sizeof(float));
}

void show_double(double x){
    show_bytes((byte_pointer)&x,sizeof(double));
}

int main()
{

    int number=-100;
    unsigned int un_number=100;
    short s_number=-5;
    long l_number=-2345;
    float f_number=3.141592;
    double d_number=3.1415926535;

    // printf("dec=%d; octal=%o; hex=%x\n",number,number,number);
    // printf("dec=%d; octal=%#o; hex=%#x\n",un_number,un_number,un_number);

    printf("float number f_number is: %f\n", f_number);
    printf("float number f_number is: %e\n", f_number);
    printf("float number f_number is: %a\n", f_number);


    // show_int(number);
    // show_short(s_number);
    // show_long(l_number);
    // show_float(f_number);
    // show_double(d_number);

}