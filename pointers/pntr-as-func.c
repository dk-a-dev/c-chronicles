#include <stdio.h>

void func1(){
    printf("Hello World\n");
}

int func2(int a,int b){
    return (a+b);
}

int main(int argc, char const *argv[])
{
    //FUNCTION AS POINTER
    void (*pfunc1)(); // (*ptr) is imp to keep in ()
    pfunc1=&func1;

    int (*pfunc2)(int,int);
    pfunc2=func2;

    int result_1=pfunc2(2,3);
    // or
    int result_2=(*pfunc2)(3,4);

    printf("%d\t%d\n",result_1,result_2);
    return 0;
}
