// 1-- single-byte operations
char ch;  
while (cin.get(ch))  // read everything include whitespace
cout.put(ch);  //Its output is identical to the input. It executes the same way as the previous program that used noskipws.

// 2 -- putting back onto an input stream
/*Sometimes we need to read a character in order to know that we aren’t ready for it.
In such cases, we’d like to put the character back onto the stream.
 - peek returns a copy of the next character on the input stream but does not change the stream.
        The value returned by peek stays on the stream
 - unget backs up the input stream so that whatever value was last returned is still on the stream
 - putback is more specialized version of unget: it returns the last vaue read fromt the stream
            but takes an argument that must be the same as the one taht was last read*/

int ch; // use an int, not a char to hold the return from get()
// loop to read and write all the data in the input
while ((ch = cin.get()) != EOF)
cout.put(ch);

// 3 --  Multi-Byte operations
/*The get and getline functions take the same parameters, and their actions are
similar but not identical. In each case, sink is a char array into which the data are
placed. The functions read until one of the following conditions occurs:
• size - 1 characters are read
• End-of-file is encountered
C++ Primer, Fifth Edition
• The delimiter character is encountered*/

// 4--Determining How Many Characters Were Read
//gcount to determine how many characters the last unformatted input operation read.
