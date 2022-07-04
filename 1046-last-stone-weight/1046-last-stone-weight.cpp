class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>queue;
        for(int i=0;i<stones.size();i++){
            queue.push(stones[i]);
        }
        int x,y;
        while(queue.size()>=2){
            x = queue.top();
            queue.pop();
            y = queue.top();
            queue.pop();
            if(x==y){
                continue;
            }else{
                queue.push(x-y);
            }
        }
        if(!queue.empty()){
            return queue.top();
        }else{
            return 0;
        }
    }
};