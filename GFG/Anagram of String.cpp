// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    // Your code goes here
    vector<int> a(26,0),b(26,0);
    for(char c :s1){
        a[c - 'a']++;
    }
    for(char c :s2){
        b[c - 'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        count += abs(a[i]-b[i]);
    }
    return count;
}
