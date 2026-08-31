class Solution {
public:
    bool judgeSquareSum(int c) {

        long long left = 0;
        long long right = sqrt(c);

        while (left <= right) {

            long long sum = left * left + right * right;

            if (sum == c)
                return true;

            if (sum < c)
                left++;

            else
                right--;
        }

        return false;
    }
};


// 73 hai to isme = 0 to 8 number hai 1*1+8*8= nooo 
 //2*2+8*8= nooo 
  //3*3+8*8= yesss