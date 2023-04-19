// a reference defines an alternative name for an object.int 
//A Reference Is an Alias
ival = 1024;
int &refVal = ival; // refVal refers to (is another name for) ival
int &refVal2; // error: a reference must be initialized

//pointer
int *ip1, *ip2; // both ip1 and ip2 are pointers to int
double dp, *dp2; // dp2 is a pointer to double; dp is a double

int ival = 42;
int *p = &ival; // p holds the address of ival; p is a pointer to ival
