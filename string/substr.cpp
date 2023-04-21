string substr (size_t pos = 0, size_t len = npos) const; // second pos is the length to slice
pos:
If this is equal to the string length, the function returns an empty string.
If this is greater than the string length, it throws out_of_range.
npos:
length to slice
-1 until end
