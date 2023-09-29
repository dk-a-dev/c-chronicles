#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("BASICS\n");
    int a;
    int *p;
    // & gives address of variable
    p=&a;
    // same as saying int *p=&a;
    printf("%d\n",p);
    printf("%d\n",&a);  
    printf("%d\n",&p);
    printf("%d\n",*p); // garbage value
    a=5;
    printf("%d\n",*p);
    *p=1025; // derefrencing
    printf("%d\n",a);

    printf("\nPOINTER AIRTHMETIC\n");
    printf("%d\n",p);
    // increment by 4 bytes
    printf("Size of int %d\n",sizeof(int));
    printf("%d\n",p+2);
    printf("%d\n",*(p+1)); // garbage value at p+1 storage location
    
    char *p0;
    p0=(char*)p; // typecasting
    printf("size of char %d\n",sizeof(char));
    printf("address of p0=%d,value=%d\n",p0,*p0);
    printf("address of p0+1=%d,value=%d\n",p0+1,*(p0+1));

    //VOID POINTERS=Generic pointer type
    printf("\nVOID POINTERS\n");
    void *p1;
    p1=p;
    // gives an derefrencing error because its not assigned any data type so no memory is laid to it
    // printf("address of p0=%d,value=%d\n",p1+1,*p1);
    printf("address of p1=%d\n",p1);

    // POINTER 2 POINTER
    printf("\nPOINTER 2 POINTER\n");
    int **q; // type=> int**
    q=&p;
    int *** r;
    r=&q;
    printf("%d\n",*p); //1025
    printf("%d\n",*q); // value at p which is address of a
    printf("%d\n",*(*q)); // 1025
    printf("%d\n",*r); // value at q is address of p
    printf("%d\n",*(*r)); // value at p is address of a
    printf("%d\n",*(*(*r))); // 1025
    return 0;
}
