//A null pointer does not point to any object.
int *p1 = nullptr; // equivalent to int *p1 = 0;
int *p2 = 0; // directly initializes p2 from the literal constant 0
// must #include cstdlib
int *p3 = NULL; // equivalent to int *p3 = 0;

/*
Older programs sometimes use a preprocessor variable named NULL, which the
cstdlib header defines as 0.
It is illegal to assign an int variable to a pointer, even if the variable’s value
happens to be 0.
*/

//void* Pointers
//The type void* is a special pointer type that can hold the address of any object

//Defining Multiple Variables
int* p1, p2; // p1 is a pointer to int; p2 is an int

//References to Pointers
int i = 42;
int *p; // p is a pointer to int
int *&r = p; // r is a reference to the pointer p
r = &i; // r refers to a pointer; assigning &i to r makes p point to i
*r = 0; // dereferencing r yields i, the object to which p points; changes i to 0
