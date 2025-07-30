class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string result="";
        while(i >= 0 && j>=0){
            int n1= num1[i] - '0';
            int n2= num2[j] - '0';
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
            int n1 = num1[i] - '0';
            int sum = n1 + carry;
            carry = sum / 10;
            result += (sum % 10) + '0';
            i--;
        }
        while(j>=0){
            int n2 = num2[j] - '0';
            int sum = n2 + carry;
            carry = sum / 10;
            result += (sum % 10) + '0';
            j--;
        }
        if(carry == 1){
            result+= "1";
        }
        //// leading zero case when ex 00000789 suppose so remove 0 from front.
         while (result.size() > 1 && result[result.size()-1]=='0') {
        result.pop_back();
    }
        reverse(result.begin(), result.end());
        return result;
    }
};
