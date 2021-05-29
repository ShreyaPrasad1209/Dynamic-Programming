int minDifference(vector<vector<int>>& nums) {
    for(int i=0;i<nums.size();i++)
	{
		sort(nums[i].begin(), nums[i].end());
	}
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        int n = nums.size();
        int curr_max = INT_MIN;
        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            temp.push_back(nums[i][0]);
            curr_max = max(curr_max,nums[i][0]);
            temp.push_back(i);
            temp.push_back(0);
            pq.push(temp);
        }
        
        int ans = INT_MAX;
        vector<int> result;
        
        while(!pq.empty())
        {
            vector<int> top = pq.top();
            int tn = top[0];
            int ti = top[1];
            int tj = top[2];
            pq.pop();
            
            if(curr_max-tn<ans){
                ans = min(ans,curr_max-tn);
                vector<int> res;
                res.push_back(tn);
                res.push_back(curr_max);
                result = res;
            }
            if(tj<nums[ti].size()-1){
                
                int next = nums[ti][tj+1];
                vector<int> temp;
                temp.push_back(next);
                curr_max = max(curr_max,next);
                temp.push_back(ti);
                temp.push_back(tj+1);
                pq.push(temp);
                
            }
            else
                break;
        }
        return result[1]-result[0];  
    }
