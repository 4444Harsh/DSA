class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int first=0,second=1,total=1;
        int size=s.size();
        vector<int> count(26,0);
        count[s[0]-'a']++;
        while(second<size){
            while(count[s[second] - 'a']){
                count[s[first] - 'a']=0;
                first++;
            };
            count[s[second] - 'a']=1;
            total =max(total,second-first+1);
            second++;
        }
        return total;
    }
};
