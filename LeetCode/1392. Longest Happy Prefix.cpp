class Solution {
public:
    string longestPrefix(string s) {
        vector<int> lps(s.size()+1 , 0);
        vector<char> str(s.size()+1);

        for(int i=0; i<s.size() ;i++){
            str[i+1] = s[i];
        }

        int first=0, second=2;
        while(second <= s.size()){
            if(str[first+1] == str[second]){
                lps[second] = first+1;
                first++,second++;
            }
            else{
                if(first == 0){
                    second++;
                }
                else{
                    first = lps[first];
                }
            }
        }
        int index= lps[s.size()];
        if(index == 0){
            return "";
        }
        return s.substr(0,index);
    }
};
