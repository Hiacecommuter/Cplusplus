// 1 --Controlling the Format of Boolean Values

  /*By default, bool values prints as 1 or 0.
  Once we've changed how cout will print bool values from this point on. 
  Subsequent operations are changed*/
cout<<true<<" "<<false<<'\n'<<boolalpha<<true<<" "<<false<<endl;
  //1 0
  //true false
cout<<noboolalpha;

// 2--Specifying the Base for Integral Values
/* hex, oct, and dex affect only integral operands; the floating-point is unaffected.*/
cout<<dec<<20<<endl; //default
cout<<oct<<20<<endl;
cout<<hex<<20<<endl;

// 3-- Indicating base on the ouput
/* showbase causes to show the base 0x, 0, or absence
onshowbase to resets*/
cout<<showbase;
cout<<dec<<20<<endl;
cout<<oct<<20<<endl;
cout<<hex<<20<<endl;
cout<<noshowbase;
/*By default, hex values are printed in lowercase with a lowcase x. 
uppercase, nouppercase*/
cout<<uppercase<<showbase<<hex<<20<<endl;
cout<<nouppercase<<noshowbase<<dex;

// 4 -- controlling the format of floating-point values
/*By default, floating-point values are printed using six digits of precision,
the decimal point is omitted if the value has no fractional part
Values are printed in scentific format depending on length by default*/

//specifying how much precision to print, value are rounded not truncated
cout<<cout.precision(); //show current precision
cout<<precision(12);
cout<<scientific; //display floating-point values in scientific notation
cout<<fixed; //in decimal, contrary to scientific
// hexfloat, defaultfloat

//printing the decimal point
cout<<10.0<<" "<<showpoint<<10.0<<noshowpoint<<endl;

// 5 -- Padding the output
/*setw : specify the minimum space for the next numeric or string value
  left, right,  justify the output
  internal controls the placement of the sign on negative values
  setfill : character to pad */
//setw does not change internal state of the output stream
int i = -16;
double d = 3.14159;

// pad the first column to use a minimum of 12 positions in the output
cout << "i: " << setw(12) << i << "next col" << '\n'
<< "d: " << setw(12) << d << "next col" << '\n';
// pad the first column and left-justify all columns
cout << left
<< "i: " << setw(12) << i << "next col" << '\n'
<< "d: " << setw(12) << d << "next col" << '\n'
<< right; // restore normal justification
// pad the first column and right-justify all columns
cout << right
<< "i: " << setw(12) << i << "next col" << '\n'
<< "d: " << setw(12) << d << "next col" << '\n';
// pad the first column but put the padding internal to the field
cout << internal
<< "i: " << setw(12) << i << "next col" << '\n'
<< "d: " << setw(12) << d << "next col" << '\n';
// pad the first column, using # as the pad character
cout << setfill('#')

