//DART
class Solution {
  int maximumTripletValue(List<int> nums) {
    int max =0;
    for(int j=1 ; j< nums.length-1 ; j++){
        int jVal = nums[j];

        int maxI = nums.sublist(0, j).reduce((a,b) => a>b ? a : b);
        int maxK = nums.sublist(j+1, nums.length).reduce((a,b) => a>b ? a:b);
        int finalVal = (maxI - jVal) * maxK;

        finalVal >max ? max=finalVal : null;
    }
    return max;
  }
}