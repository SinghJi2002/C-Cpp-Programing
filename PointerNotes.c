#include<stdio.h>
void swapCallValue(int x,int y){
        int temp;
        temp=x;
        x=y;
        y=temp;
}
void swapCallRefer(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=5;
    printf("%p\n",&a);// Every datatype in C has its own identifier. Since pointer itself is datatype it 
    // also has its own identifier. It is %p. Above code shows setup to print address of variable.

    //Note that when print address in that way is pragmatic since we see that every time new address is
    //generated. Hence we see that, we prefer storing this address in a variable and then using.

    int* x=&a;// Follow usage of * is how pointers are declared for storing addresses.
    printf("%p\n",x);

    //Note how pointers work. When we store pointer in a value again a new memory is created that stores
    //memory address of some other variable. Hence there can be address of pointer itself. Hence there
    // can be address of pointer that stores address of some other pointer variable and so on.
    int** y=&x;//See we using pointer on a pointer
    printf("%p\n",y);
    // All though we declare same values in two different variable, both variable will have different
    //adresses.
    int b=6;
    int c=6;
    printf("%p\n",&b);
    printf("%p\n",&c);
    //Lets have some fun. Let try to print a pointer using the integer identifier.
    printf("%d\n",&b);
    //You will see a different address being printed in each case. But in a unusaul manner with a warning.
    //Lets see usage of %d in a different way.
    printf("%d\n",*x);
    //As you are able to see actaually the value stored is in variable pointed via x is printed.

    //We can actually use pointers to change values stored in variable.

    *x=10;
    printf("%d\n",a);
    //As observable the values have changed.
    //Let see two codes. Both do swaping of variable, but in 1st case we use call by values and in the
    //other case we use call by referencing.

    //Call By Value(See function above)
    int val1=5;
    int val2=10;
    swapCallValue(val1,val2);
    printf("Value of val1 is %d and val2 is %d\n",val1,val2);
    //As observable, no changes have aoccured.

    //Call By Reference(See function above)
    int ref1=10;
    int ref2=15;
    swapCallRefer(&ref1,&ref2);
    printf("Value of ref1 is %d and value of ref2 is %d\n",ref1,ref2);
    //As observable we see that value have easily changed.

    //Lets work with what we call multipointing. Its like storing of address of pointer in pointer
    //on multiple levels and layers.
    
    //Declaring variable a
    int j=5;
    //Declaring pointer to a
    int* p=&j;
    //Declaring pointer to x
    int** q=&p;//Two stars are used because its a two layered pointer
    //Declaring pointer to y
    int*** r=&q;
    //Lets print the addresses.
    printf("%p\n%p\n%p\n",p,q,r);
    //Now lets do something like this.
    printf("%d\n%d\n%d\n",*p,**q,***r);
    //As observable the same value is being printed again and again. Since all of these pointer are 
    //pointer towards the same variable.

    //Lets talk a bit about pointer arithematics.
    //Lets declare two variable.
    int k=10;
    char l='a';
    //Lets make pointer for them. Note we can only perform addtion and subtraction when we 
    //are operating with pointers. LETS OPERATE WITH THEM.
    int* n1=&k;
    printf("%d\n",n1);
    n1=n1+1;
    printf("%d\n",n1);
    int* m=&l;
    //As observable 4*1 is added to original int address. Because built size of integer is 4 bit.
    //Example 2
    int* m1=&l;
    printf("%d\n",m1);
    m1=m1+2;
    printf("%d\n",m1);
    //As observable 1*2 is added to original int address. Because built size of integer is 1 bit.
    return 0;

}