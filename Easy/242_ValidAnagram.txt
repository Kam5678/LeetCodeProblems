//DART
class Solution {
  bool isAnagram(String s, String t) {
    Map<String, int> numberOfChars = {};

    for(int i=0 ; i< s.length ; i++){
        var char = s[i];
        if(numberOfChars.containsKey(char)){
            numberOfChars[char] = numberOfChars[char]! + 1;
        }
        else{
            numberOfChars[char] = 1;
        }
    }

    for(int j=0 ;j< t.length ; j++){
        var char = t[j];
        if(numberOfChars.containsKey(char)){
            if(numberOfChars[char]! >0){
                numberOfChars[char] = numberOfChars[char]! -1;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    bool answer = true;
    for(int v in numberOfChars.values){
        if(v!=0){
            return false;
        }
    }



    return true;


  }
}