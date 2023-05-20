class Solution {
public:
    bool isValid(string s) {


        stack<char> stack;
        for(int i=0 ; i< s.size() ; i++){
            char charc = s[i];

            if(charc == '('){
                stack.push(')');
            }
            else if(charc=='['){
                stack.push(']');
            }
            else if(charc== '{'){
                stack.push('}');
            }

            else{
                if(!stack.empty()){
                   if(charc==stack.top()){
                       stack.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            
        }
  
        if(stack.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};
