class Solution {
public:
int thirdMax(vector<int>& nums) {
   
    set<int>st;
    for(auto i:nums)st.insert(i);
    vector<int>v;
    for(auto i:st)v.push_back(i);
    
    if(v.size()<3)return *max_element(nums.begin(),nums.end());
    
    else
    {
        sort(v.begin(),v.end());
        return v[v.size()-3];
		}
	}
};