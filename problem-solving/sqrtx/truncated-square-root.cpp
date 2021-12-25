class Solution {
private:
    long long int search(int number) {
        int start = 0;
        int end = number;
        long long int mid = start + (end-start)/2;
        int res = 0;

        while(start <= end) {
            long long int square = mid*mid;

            if(square == number) {
                return mid;
            }
            if(square > number) {
                end = mid-1;
            } else {
                res = mid;
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return res;
}
public:
    int mySqrt(int x) {
        return search(x);
    }
};

