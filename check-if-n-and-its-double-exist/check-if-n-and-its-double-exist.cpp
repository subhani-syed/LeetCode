class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>ump;
        int out = 0;
        
        for(auto x:arr){
            if(x%2==0){
              if(ump.find(x/2)!=ump.end()){
                    out = 1;
              }  
            }
            if(ump.find(2*x)!=ump.end()){
                out = 1;
            }
            ump[x]++;
        }
        if(out==1){
            return true;
        }else{
            return false;
        }
    }
};