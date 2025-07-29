class Solution {
public:
    // Helper function to check if a string is a palindrome
    bool ispail(const string& s, int start, int end) {
        while (start <= end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int maxLen = 0;
        string result = "";

        int n = s.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (ispail(s, i, j)) {
                    if (j - i + 1 > maxLen) {
                        maxLen = j - i + 1;
                        result = s.substr(i, maxLen);
                    }
                }
            }
        }
        return result;
    }
};
