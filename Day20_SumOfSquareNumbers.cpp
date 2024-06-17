// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 

// Example 1:

// Input: c = 5
// Output: true
// Explanation: 1 * 1 + 2 * 2 = 5
// Example 2:

// Input: c = 3
// Output: false
 

// Constraints:

// 0 <= c <= 231 - 1


// Topics
// Math
// Two Pointers
// Binary Search


// Solution:


class Solution {
public:
    bool judgeSquareSum(int c) {
        int x=sqrt(c);
        int i=0,j=x;
        if(c==1){return true;}
        while(i<=j){
            long long val=(long long)i*i + (long long)j*j;
            long long x=(long long)c;
            if(val==x){
                return true;
            }
            else if(val>x){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};