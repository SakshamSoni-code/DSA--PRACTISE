class Solution {
public:
    // binary search t.c->O()
    bool minDayPossible(vector<int> bloomDay, int m, int k,int day){
        
        int flower=0,bouq=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]>day)flower=0;
            
            else if(++flower>=k){
                bouq++;
                if(bouq==m) return true;
                flower=0;
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(m*k))return -1;
        int low=0,high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(minDayPossible(bloomDay,m,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
       
    }
    
    
    
    
    
    // binary search + sliding window
    /* t.c-> log(max_ele)*n   
    bool minDayPossible(vector<int> bloomDay, int m, int k,int day){
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day) bloomDay[i]=0;
            else bloomDay[i]=bloomDay[i]-day;
        }
        if(find(bloomDay.begin(),bloomDay.end(),0)==bloomDay.end()) return false;
        int i=0,j=0,cnt=0,temp=0;
        
        while(j<bloomDay.size()){
            if(bloomDay[j]==0)cnt++;
            
            if((j-i+1)<k)j++;
            
            else if((j-i+1)==k){
                if(cnt==k){
                    temp++;
                    if(temp==m)return true;
                    j++;
                    i+=k;
                    cnt=0;
                }
                else{
                 if(bloomDay[i]==0)cnt--;
                 i++;
                 j++;
                }
            }
        }
        return false;
    } 
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        if(bloomDay.size()<(m*k))return -1;
        int low=0,high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(minDayPossible(bloomDay,m,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    } */
};