/*
Given an array nums of integers, return how many of them contain an even number of digits.
 

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
 

*/



class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
            {
               count++;
            }
        }
        return count;
        
        // as n is from 1 to 10^ 5 . So in tis range numbers from 10 to 99
        // and 1000 to 9999 and n=10^5 have only even digits
       /* int count=0,n;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if((10<=n && n<=99) || (1000<=n && n<=9999) || (n==100000))
                count++;
        }
        return count;
        
        /*
        int counteven=0;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            while(nums[i]!=0)
            {
                nums[i]=nums[i]/10;
                count++;
            }
            if(count%2==0) counteven++;
        }
        return counteven; *>?
        
        /*
        int digitscnteven=0,digitscnt=0;
        for(int i=0;i<nums.size();i++)
        {
            digitscnt=floor(log10(nums[i])+1);
            if(digitscnt%2==0) digitscnteven++;
        }
        return digitscnteven; */
    }
};