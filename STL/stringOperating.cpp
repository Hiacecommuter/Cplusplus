// access strings
string myString = "Hello";
cout << myString[0];

//sub string
    std::string str="We think in generalities, but we live in details.";
    std::string str2 = str.substr (3,5);     // "think"
    std::size_t pos = str.find("live");      // position of "live" in str
    std::string str3 = str.substr (pos);     // get from "live" to the end

//remove last element
void pop_back();

//change string characters
string myString = "Hello";
myString[0] = 'J';
cout << myString;

//string length, size() is alias of length()
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
cout << "The length of the txt string is: " << txt.size();

//iter string other way
std::string str ("Test string");
  for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
    std::cout << *it;
  std::cout << '\n';

/////////////////////////////////////////////////////
//search in a string
     std::string str ("There are two needles in this haystack with needles.");
     std::string str2 ("needle");

      // different member versions of find in the same order as above:
      std::size_t found = str.find(str2);
      if (found!=std::string::npos) //npos ==-1
        std::cout << "first 'needle' found at: " << found << '\n';

      found=str.find("needles are small",found+1,6);
      if (found!=std::string::npos)
        std::cout << "second 'needle' found at: " << found << '\n';

      found=str.find("haystack");
      if (found!=std::string::npos)
        std::cout << "'haystack' also found at: " << found << '\n';

      found=str.find('.');
      if (found!=std::string::npos)
        std::cout << "Period found at: " << found << '\n';

      // let's replace the first needle:
      str.replace(str.find(str2),str2.length(),"preposition");
      std::cout << str << '\n';
//////////
//string erase
      std::string str ("This is an example sentence.");
      std::cout << str << '\n';
                                               // "This is an example sentence."
      str.erase (10,8);                        //            ^^^^^^^^
      std::cout << str << '\n';
                                               // "This is an sentence."
      str.erase (str.begin()+9);               //           ^
      std::cout << str << '\n';
                                               // "This is a sentence."
      str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
      std::cout << str << '\n';

//remove certai characters from a string
        string my_str = "ABAABACCABA";
        my_str.erase(remove(my_str.begin(), my_str.end(), 'A'), my_str.end()); //remove A from string
        cout << "Final string: " << my_str;

// split string form space
/* use string stream read text
use getline() to read until delim=" " */
