/*
Given an array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.

Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, where 1 <= answer[0] < answer[1] <= numbers.length.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

 

Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
Example 2:

Input: numbers = [2,3,4], target = 6
Output: [1,3]
Example 3:

Input: numbers = [-1,0], target = -1
Output: [1,2]


*/


    vector<int> twoSum(vector<int>& numbers, int target) {
    // TWO POINTER
    int l = 0;
	int r = numbers.size() - 1;
	while (l < r) 
	{
		if (numbers[l] + numbers[r] == target)
		{
			vector<int> res{ l + 1,r + 1 };
			return res;
		}
		else if (numbers[l] + numbers[r] > target)
		{
			r--;
		}
		else
		{
			l++;
		}
	}
	return {};
    }