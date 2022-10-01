class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map <char,int> mp;
        unordered_set<int> s;
        int largest=INT_MIN;
        for(auto x:word){
            mp[x]++;
            largest=max(largest,mp[x]);
        }
        if(mp.size()==1) return true;
        if(largest==1) return true;
        int minimum=INT_MAX;
        int l=0,h=0;
        for(auto x:mp){
            s.insert(x.second);
            minimum=min(minimum,x.second);
            if(largest==x.second) 
                h++;
            if(s.size()>2)
                return false;
            
        }
        if(minimum==largest-1 && h==1) return true;
        if(minimum==1&&mp.size()-h==1) return true;
        return false;
        
    }
};
