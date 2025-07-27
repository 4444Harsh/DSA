class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int a=0,e=s.size()-1;
        while(a<e){
            if(s[a] != s[e]){
                return 0;
            }
            a++,e--;
        }
        return 1;
    }
};
