class Solution {
public:
    int lengthOfLastWord(string s) {
        int length =0;
        for(int i=s.length() -1; i>= 0 ; i--){
            if(s[i]!=' '){
                length+=1;
            }
            else{
                if(length>0){
                    return length;
                }
                else{
                    length =0;
                }
            }
        }
        return length;
    }
};