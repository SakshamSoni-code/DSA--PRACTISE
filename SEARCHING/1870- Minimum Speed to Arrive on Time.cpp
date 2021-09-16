class Solution {
public:
    bool ansPos(vector<int>& dist, double hour, int s){
        double h=0;
        for(int i=0;i<dist.size();i++)
        {
            if(i==dist.size()-1) h+=double(dist[i])/s;
            else{
                h+=ceil(double(dist[i])/s);
            }
        }
        if(h<=hour) return true;
        else return false;
}
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1,high=1e7;
        int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(ansPos(dist,hour,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};