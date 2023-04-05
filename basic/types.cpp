// type aliases
typedef double wages; // wages is a synonym for double
typedef wages base, *p; // base is a synonym for double, p for double*

using SI = Sales_item; // SI is a synonym for Sales_item

//Pointers, const, and Type Aliases
typedef char *pstring;
const pstring cstr = 0; // cstr is a constant pointer to char
const pstring *ps; // ps is a pointer to a constant pointer to char
/*The base type in these declarations is const pstring. As usual, a const that
appears in the base type modifies the given type. The type of pstring is “pointer to
char.” So, const pstring is a constant pointer to char—not a pointer to const
char.
It can be tempting, albeit incorrect, to interpret a declaration that uses a type alias
by conceptually replacing the alias with its corresponding type:*/
const char *cstr = 0; // wrong interpretation of const pstring cstr


//auto type, auto tells the compiler to deduce the type from the initializer.
auto item = val1 + val2; // item initialized to the result of val1 + val2

auto i = 0, *p = &i; // ok: i is int and p is a pointer to int
auto sz = 0, pi = 3.14; // error: inconsistent types for sz and pi
/*Second, auto ordinarily ignores top-level consts. As usual in
initializations, low-level consts, such as when an initializer is a pointer to const, are
kept:*/
const int ci = i, &cr = ci;
auto b = ci; // b is an int (top-level const in ci is dropped)
auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
auto d = &i; // d is an int*(& of an int object is int*)
auto e = &ci; // e is const int*(& of a const object is low-level const)

const auto f = ci; // deduced type of ci is int; f has type const int
