// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        int i=s1.size()-1;
        int j=s2.size()-1;
        int carry=0;
        string result="";
        while(i >= 0 && j>=0){
            int n1= s1[i] - '0';
            int n2= s2[j] - '0';
            n1+=n2;
            n1+=carry;
            carry = n1/10;
            int bit = n1%10;
            char c= bit + '0';
            result += c;
            i--;
            j--;
            
        }
        while(i>=0){
            int n1= s1[i] - '0';
            // n1+=n1;
            n1+=carry;
            carry = n1/10;
            int bit = n1%10;
            char c= bit + '0';
            result += c;
            i--;
        }
        while(j>=0){
            int n1= s2[j] - '0';
            // n1+=n1;
            n1+=carry;
            carry = n1/10;
            int bit = n1%10;
            char c= bit + '0';
            result += c;
            j--;
        }
        if(carry == 1){
            result+= "1";
        }
        while (result.size() > 1 && result[result.size()-1]=='0') {
        result.pop_back();
    }
        reverse(result.begin(), result.end());
        return result;
    }
};
