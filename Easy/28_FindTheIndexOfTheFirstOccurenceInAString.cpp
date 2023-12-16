class Solution {
public:
    int strStr(string haystack, string needle) {
        int indexNeed=0;



        if(haystack.length()>= needle.length()){
            if(haystack.length()==1){
                if(haystack[0]==needle[0]){
                    return 0;
                }
                else{
                    return -1;
                }
            }

            for(int i=0 ; i<haystack.size() ; i++){
                if(needle[indexNeed]==haystack[i]){
                    for(int j=i ; j< haystack.size() ; j++){
                        std::cout << indexNeed << "\n";
                        if(needle[indexNeed]==haystack[j]){
                            indexNeed+=1;
                        }
                        else{
                            break;
                        }
                        if(indexNeed==needle.length()){
                            std:: cout << "returning" << "\n";
                            return i;
                        }
                    }
                    indexNeed=0;
                }
            }
        }
        return -1;
    }
   
};