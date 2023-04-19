//Defining a template
//function templates
/* a function templates is a formula from which we can generate type-specific versions of that function
*/

template <typename T> // start with keyword template followed by a template parameter list (comma-separated list)
int compare(const T &va, const T &v2)
{
  if (v1 < v2) return -1;
  if (v2 < v1) return 1;
  return 0;
}

//Instantiating a function template
/*template parameter list acts much like a function parameter list
When we call a function template, the compiler use the arguments of the call to deduce the template arguments
*/
cout<<compare(1,0)<<endl;

//Template type parameters

//Nontype Template parameter
template<unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M])
{
return strcmp(p1, p2);
}

compare("hi", "mom")
int compare(const char (&p1)[3], const char (&p2)[4])

