class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> notVal;
        int pos=0;
        int k=0;
        for(int i=0 ; i< nums.size() ; i++){
            
            if(nums[i]==val){

            }
            else{
                notVal.push_back(nums[i]);
                nums[pos] = notVal[pos];
                pos+=1;
                k+=1;
                  
            }
        }

        return k;
    }
};