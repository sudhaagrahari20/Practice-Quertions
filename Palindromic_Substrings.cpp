class Solution {
public:
    int count;
    void check(string&s, int i, int j, int n){
        while(i>=0 && j<n && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
    }
    int countSubstrings(string s){
        int n = s.length();
        for(int i =0; i<n; i++){
            check(s, i, i, n);
            check(s, i, i+1, n);
        }
        return count;   
        
    }
};
