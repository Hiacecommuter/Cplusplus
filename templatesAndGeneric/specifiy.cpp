template<typename T>
bool isEqual(T i, Tj)
{
  return i==j;
}

template<>
bool isEqual<char*>(char* s1, char* s2)
{
  return strcmp(s1, s2)==0;
}  
