#include <iostream>
#include <set>
int main()
{
  set<int, greater<int>> s1; // empty set container
  
  s1.insert(40);
  s1.insert(30);
  s1.insert(60);
  s1.insert(20);
  s1.insert(50);
  
  s1.insert(50);// only one 50 will be added to the set
  s1.insert(10);
  
  set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
  //60 50 40 30 20 10 
  set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
  //10 20 30 40 50 60 
  
  // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
  
  // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
  
  
  
  
}

/*
Properties
1. Storing order -- the set stores the elements in sorted order
2. Values Characteristic -- All the elements in a set have unique values
3. Values Nature -- the value of the element cannot be modified once it is added to the set
                    though it is possible to remove and add element. Values are immutable.
4. Search Technique -- sets follow the Binary search tree implementation.
5. Arranging order -- the values in a set are unindexed

*/

