#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<string, int> m1; // Create a map of strings to integers
  
  // Insert some values into the map
  map["one"] = 1;
  map["two"] = 2;
  map["three"] = 3;
  
   map<string, int>::iterator it = m1.begin();
 
  // Iterate through the map and print the elements
  while (it != m1.end())
  {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    ++it;
  }
 
  
    // empty map container
    map<int, int> gquiz1;

    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
  
  return 0;
}
