#include <stdio.h>
#define BOOK "War and Peace"
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

    // int number=-100;
    // unsigned int un_number=100;
    // short s_number=-5;
    // long l_number=-2345;
    // float f_number=3.141592;
    // double d_number=3.1415926535;

    // printf("dec=%d; octal=%o; hex=%x\n",number,number,number);
    // printf("dec=%d; octal=%#o; hex=%#x\n",un_number,un_number,un_number);

    // printf("float number f_number is: %f\n", f_number);
    // printf("float number f_number is: %e\n", f_number);
    // printf("float number f_number is: %a\n", f_number);

    // show_int(number);
    // show_short(s_number);
    // show_long(l_number);
    // show_float(f_number);
    // show_double(d_number);

    // char name[30];
    // printf("please input your name: ");
    // scanf("%s",name);
    // for (int i = 0; i < 30; i++)
        // printf("%c\n",name[i]);
    // 
    // printf("your name is %s.\n",name);
    // float weight;
    // printf("and put your weight: ");
    // scanf("%f",&weight);
    // printf("your weight is %f kg.\n",weight);
    // getchar();

    // float cost=12.99;
    // float percent=79.99;
    // int  width;

    // printf("This copy of BOOK sells for $%f.\n",cost);
    // width=printf("That is %.2f%% of list.\n",percent);
    // printf("The last sentence is %d bytes long.\n",width);

    char name[40], surname[40];
    int w_name, w_surname;
    printf("Please input your first name: ");
    scanf("%s", name);
    printf("Please input your last name: ");
    scanf("%s", surname);
    w_name=printf("%s",name);
    printf(" ");
    w_surname=printf("%s",surname);
    printf("\n%*d %*d",w_name,w_name,w_surname,w_surname);
    printf("\n%-*d %-*d",w_name,w_name,w_surname,w_surname);

    return 0;
}