
class Solution {
  public:
    int minFlips(string& s) {
        int flip1 = 0, flip2 = 0;
        
        for (int i = 0; i < s.size(); i++) {
            // For pattern "0101..." (even index -> '0', odd -> '1')
            if (s[i] != (i % 2 == 0 ? '0' : '1')) flip1++;

            // For pattern "1010..." (even index -> '1', odd -> '0')
            if (s[i] != (i % 2 == 0 ? '1' : '0')) flip2++;
        }

        return min(flip1, flip2);
    }
};
