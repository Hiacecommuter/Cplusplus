//1 -- An istream that is in an invalid state will cause the condition to yield false.

int sum = 0, value = 0;
// read until end-of-file, calculating a running total of all values read
while (std::cin >> value)
sum += value; // equivalent to sum = sum + value
std::cout << "Sum is: " << sum << std::endl;

//if (std::cin >> currVal)
