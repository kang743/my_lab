class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int arr[100];
        int i = 0;
        while(x!=0)
…                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
class Solution {
public:
    int climbStairs(int n) {
        vector<int>a(n+1,-1);
        return dfs(n,a);
    }
    int dfs(int n,vector<int>&a)
    {
        if(n<=1)
        {
            return 1;
        }
        if(a[n]!=-1)
        return a[n];
        else
        {
            a[n]=dfs(n-1,a)+dfs(n-2,a);
            return a[n];
        }
    }
};
class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        {
            return 0;
        }
        int left=1,right=x;
        int ans=0;
        while(left<=right)
        {
        int mid=left+(right-left)/2;
        if(mid<=(x/mid))
        {
            ans=mid;
            left=left+1;
        }
        else
        {
            right=mid-1;
        }
        }
        return ans;
    }
};
