//macro definitions (#define, #undef)
#define TABLE_SIZE 100    //simply replace
int table1[TABLE_SIZE];
int table2[TABLE_SIZE];

#define getmax(a,b) a>b?a:b 

//A macro lasts until it is undefined with the #undef
#define TABLE_SIZE 100
int table1[TABLE_SIZE];
#undef TABLE_SIZE
#define TABLE_SIZE 200
int table2[TABLE_SIZE];

#define str(x) #x   //convert to sring -- 
/* # converts the parameter into a string (no matter the name before the bracket)*/
cout << str(test); // cout<<"test";

#define concat(x, y) x##y

#define concat(a, b) a ## b
int main() {
   int xy = 100;
   
   cout << concat(x, y); // cout<<xy;

// conditional compilation
/*#if or #elif can only evaluate constant expressions, including macro expressions*/
#ifndef NULL
   #define NULL 0
#endif
  
#ifdef TABLE_SIZE
int table[TABLE_SIZE];
#endif
////////////////////////////////  
#if TABLE_SIZE>200
#undef TABLE_SIZE
#define TABLE_SIZE 200
 
#elif TABLE_SIZE<50
#undef TABLE_SIZE
#define TABLE_SIZE 50
 
#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif
 
int table[TABLE_SIZE];
////////////////
 #if defined ARRAY_SIZE
#define TABLE_SIZE ARRAY_SIZE
#elif !defined BUFFER_SIZE
#define TABLE_SIZE 128
#else
#define TABLE_SIZE BUFFER_SIZE
#endif
/////////
  
//line controk
 
//error directive
 
//source file inclusion
#include "file"

//predefined macro names
  /*
 __LINE__	Integer value representing the current line in the source code file being compiled.
__FILE__	A string literal containing the presumed name of the source file being compiled.
__DATE__	A string literal in the form "Mmm dd yyyy" containing the date in which the compilation process began.
__TIME__	A string literal in the form "hh:mm:ss" containing the time at which the compilation process began.
__cplusplus	An integer value. All C++ compilers have this constant defined to some value. Its value depends on the version of the standard supported by the compiler:
            199711L: ISO C++ 1998/2003
            201103L: ISO C++ 2011
            Non conforming compilers define this constant as some value at most five digits long. Note that many compilers are not fully conforming and thus will have this constant defined as neither of the values above.
__STDC_HOSTED__	      1 if the implementation is a hosted implementation (with all standard headers available) 0 otherwise. 
  
//optionally defined, generally depending on whether a feature is available:  
  __STDC__	  In C: if defined to 1, the implementation conforms to the C standard.
              In C++: Implementation defined.
__STDC_VERSION__	In C:
                  199401L: ISO C 1990, Ammendment 1
                  199901L: ISO C 1999
                  201112L: ISO C 2011
                  In C++: Implementation defined.
__STDC_MB_MIGHT_NEQ_WC__	        1 if multibyte encoding might give a character a different value in character literals
__STDC_ISO_10646__	              A value in the form yyyymmL, specifying the date of the Unicode standard followed by the encoding of wchar_t characters
__STDCPP_STRICT_POINTER_SAFETY__	1 if the implementation has strict pointer safety (see get_pointer_safety)
__STDCPP_THREADS__	              1 if the program can have more than one thread
*/
