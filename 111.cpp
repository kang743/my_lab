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
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums3(m+n);
        int a=0,i=0,j=0;
        while(i<m&&j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                nums3[a]=nums1[i];
                a++;i++;
            }
            else
            {
                nums3[a]=nums2[j];
                a++;j++;
            }
        }
        if(i!=m)
        {
            while(i<m)
            {
                nums3[a]=nums1[i];
                a++;i++;
            }
        }
        if(j!=n)
        {
             while(j<n)
            {
                nums3[a]=nums2[j];
                a++;j++;
            }
        }
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=nums3[i];
        }
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,a=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(count==0)
            {
                a=nums[i];
            }
            if(nums[i]!=a)
            {
                count--;
            }
            else
            {
                count++;
            }
        }
        return a;
    }
};
