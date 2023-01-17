class Solution {
public:
    // We will use three pointers to store the index of the last 'a', 'b' and 'c' character
// We will iterate over the string and update the pointers
// We will check if the current index is greater than 1
// If the current index is greater than 1, we will add the minimum of the three pointers to the result
// The minimum of the three pointers will give us the index of the last character in the substring
// We will add 1 to the index of the last character in the substring to get the number of substrings
// We will return the result
int numberOfSubstrings(string s)
{
    int a_index = -1;
    // We will store the index of the last 'a' character
    int b_index = -1;
    // We will store the index of the last 'b' character
    int c_index = -1;
    // We will store the index of the last 'c' character
    int result = 0;
    // We will store the number of substrings
    for (int index = 0; index < s.size(); index++)
    {
        // We will iterate over the string
        if (s[index] == 'a')
            a_index = index;
        if (s[index] == 'b')
            b_index = index;
        if (s[index] == 'c')
            c_index = index;
        if (index > 1)
            result += std::min({a_index, b_index, c_index}) + 1;
        // We will add the minimum of the three pointers to the result
    }
    return result;
}
};
