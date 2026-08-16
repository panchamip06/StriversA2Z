class Solution {
public:
    bool isPalindrome(string s) {
        string org="";
        for(int i=0;i<s.size();i++){
            if (isalnum(s[i])){
                org+=tolower(s[i]);
            }
        }
        string comp=org;
        int i=0,len=org.size()-1;
        while(i<=len){
            swap(org[i],org[len]);
            i++;len--;
        }
        return comp==org;
    }
};