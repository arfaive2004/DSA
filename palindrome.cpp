class Solution {
public:
    bool isPalindrome(int x) {
        
        int num = 0;
        int temp = x;
        if(temp<0)
        {
            return false;
        }
        else
        {
            while(temp!=0)
            {
                if(num > __INT_MAX__/10 || num < INT_MIN/10)
                    return false;
                num = (num*10) + (temp%10);
                temp = temp/10;
            }
        }
        if (num == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};