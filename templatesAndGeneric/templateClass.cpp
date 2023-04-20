/*
template <typename T> class blob{
  public:
  typedef T value_type;
  typedef typename std::vector<T>::size_type size_type:
  //constructors
  Blob();
  Blob(std::initializer_list<T> il>;
   //number of elements in the blob
   size_type size() const {return data->size();}
   bool empty() const {return data-> empty();}
   //add and remove elements
   void push_back(const T &t) {data ->push_back(t);}
   //move
   void push_back(T &&t) {data->push_back(std::move(t));}
       void pop_back();
       //element access
       T& back();
       T& operator[] (size_type i);
    private:
       std::shared_ptr<std::vector<T>> data;
    // throws msg if data[i] isn't valid
    void check(size_type i, const std::string &msg) const;  };
  */  
 /*
 template <class T>
class MyTemplate {
T element;
public:
MyTemplate (T arg) {element=arg;}
T divideBy2 () {return element/2;}
};

// class template specialization:
template <>
class MyTemplate <char> {
char element;
public:
MyTemplate (char arg) {element=arg;}
char printElement ()
{
return element;
}
};*/
       
       
