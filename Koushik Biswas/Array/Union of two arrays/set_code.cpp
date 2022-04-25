class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>a_set,b_set;
        vector<int>v;
        for(auto it:nums1)
            a_set.insert(it);
        for(auto it:nums2)
            b_set.insert(it);
        
        if(a_set.size()>=b_set.size()){
            for(auto it:a_set){
                if(b_set.find(it)!=b_set.end())
                    v.emplace_back(it);
            }
        }
        else{
            for(auto it:b_set){
                if(a_set.find(it)!=a_set.end())
                    v.emplace_back(it);
            }
        }
        return v;
    }
};
