class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        for(int i=0;i<s.size();i++){
            char c=s[i] - 'a';
            a[c] += 1;
        }
        for (int i=0;i<t.size();i++){
            char c=t[i]-'a';
            b[c] += 1;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
};
