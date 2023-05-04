/*  C++ string is mutable
    C++ treats characters as int */

string caesarCipher(string s, int k) {
    int len = s.size();
    for(int i = 0; i< len; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] - 'a' + k + 26 ) % 26 + 'a';   // Cipher is a circle, + 26 for negative k, % 26 for result in the circle
        }
        else if (s[i] >= 'A' && s[i] <='Z')
        {
            s[i] = (s[i] - 'A' + k + 26) % 26 + 'A';
        }
        
    }
    return s;

}
