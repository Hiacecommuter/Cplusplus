//The istringstream type reads a string,
//ostringstream writes a string, and
//stringstream reads and writes the string.

//the types defined in sstream inherit from the types we have used from the iostream header.


//An istringstream is often used when we have some work to do on an entire line,
//and other work to do with individual words within a line.

vector<PersonInfo> people; // will hold all the records from the input
// read the input a line at a time until cin hits end-of-file (or another error)
while (getline(cin, line)) {
PersonInfo info; // create an object to hold this record's data
istringstream record(line); // bind record to the line we just read
record >> info.name; // read the name
while (record >> word) // read the phone numbers
info.phones.push_back(word); // and store them
people.push_back(info); // append this record to people
}

//An ostringstream is useful when we need to build up our output a little at a time 
//but do not want to print the output until later.

for (const auto &entry : people) { // for each entry in people
ostringstream formatted, badNums; // objects created on each loop
for (const auto &nums : entry.phones) { // for each number
if (!valid(nums)) {
badNums << " " << nums; // string in badNums
} else
// ''writes'' to formatted's string
formatted << " " << format(nums);
}
if (badNums.str().empty()) // there were no bad numbers
os << entry.name << " " // print the name
<< formatted.str() << endl; // and reformatted numbers
else // otherwise, print the name and bad numbers
cerr << "input error: " << entry.name
<< " invalid number(s) " << badNums.str() <<
endl;
}
