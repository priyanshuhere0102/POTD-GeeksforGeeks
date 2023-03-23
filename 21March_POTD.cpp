class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int mini = INT_MAX;
        for(int i = 0;i<N;i++)
        {
            int ans = (abs(cur-pos[i]))* time[i];
            mini = min(ans, mini);
        }
        
        return mini;
    }
};
