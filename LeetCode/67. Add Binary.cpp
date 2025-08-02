class Solution {
public:
    string addBinary(string a, string b) {
        int s1 = a.size() - 1, s2 = b.size() - 1;
        int carry = 0;
        string result = "";

        while (s1 >= 0 || s2 >= 0 || carry) {
            int n1 = (s1 >= 0) ? a[s1--] - '0' : 0;
            int n2 = (s2 >= 0) ? b[s2--] - '0' : 0;

            int sum = n1 + n2 + carry;
            carry = sum / 2;
            result += (sum % 2) + '0';
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
