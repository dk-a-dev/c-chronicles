#include <stdio.h>

void A(){
    printf("hello");
}
void B(void (*ptr)()){ // function pointer as argument
    ptr(); // call-back function that "ptr" points to
}
int main(int argc, char const *argv[])
{
    // void (*ptr)()=A;
    B(A); // A is call back function
    return 0;
}
