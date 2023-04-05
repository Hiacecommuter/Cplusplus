/*A vector is a container for same types data. Each object has an associated index.
And it is more efficient to create empty vectors and add elements on run time.*/
#include <vector>
using std::vector;


vector<int> ivec; // ivec holds objects of type int
vector<Sales_item> Sales_vec; // holds Sales_items
vector<vector<string>> file; // vector whose elements are vectors
// references are not objects

// initialize a vector
vector<int> v1(10); // v1 has ten elements with value 0
vector<int> v2{10}; // v2 has one element with value 10
vector<int> v3(10, 1); // v3 has ten elements with value 1
vector<int> v4{10, 1}; // v4 has two elements with values 10 and 1
vector<vector<int>> ivec;

//adding elements
string word;
vector<string> text; // empty vector
while (cin >> word) {
text.push_back(word); // append word to text
}

//functions
vector<int> v;intn=0;
v.empty(); //return T or F v is empty
v.size(); //returns the number of elements in v
v.push_back(n);
v[n]; //returns a reference to the elements at position n in v
// v1=v2; replaces the elements in v1 with a copy of the elements in v2
//v1={a, b, c,...}; replaces the elements in v1 with a copy of the elements in the comma-separated list
//v1==v2;v1!=v2;<,<=,>,>= compare two vector
//The relational operators apply a dictionary ordering: 
// If the vectors have differing sizes,
// but the elements that are in common are equal, then the vector with fewer elements is less than the one with more elements. 
// If the elements have differing values, then the relationship between the vectors is determined by the relationship between the first elements that differ.
//!!!We can compare two vectors only if we can compare the elements in those vectors.

// computing a vector index
for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
ivec.push_back(ix); // ok: adds a new element with value ix
//Caution: Subscript Only Elements that are Known to Exist!


