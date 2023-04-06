/*
*Pointers -  Pointer is a variable that stores the memory address of another variable as its value.
A pointer variable pints to a data type(like int) of the same type and is created with the (*) operator.

^Why do we need it?
1.Pointers saves memory space.
2.Execution time with pointers is faster because data are manipulated with the address, that is, direct access to memory location.
3.Pointers are used for representing the array. An array of any type can be accessed with the help of pointers, without considering its subscript range.

?Whenever name of array is used in any expression,it is implicitly converted to a pointer to the first element of the array. 
?ex- int arr[3] ={ 1,2,3};
?In the above example,array is of integer type,so it becomes “constant pointer to int”. 
?Constant pointer : Pointer that cannot change the address to which it is pointing.

!Access Array Elements Using Pointers
#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
^In this program, the elements are stored in the integer array data[] . Then, the elements of the array are accessed using the pointer notation. By the way, data[0] is equivalent to *data and &data[0] is equivalent to data.






*/
