class Solution {
public:
    void reverseString(vector<char>& s) {
        int len=s.size()-1,i=0;
        while(i<=len){
            swap(s[i],s[len]);
            i++; len--;
        }
    }
};