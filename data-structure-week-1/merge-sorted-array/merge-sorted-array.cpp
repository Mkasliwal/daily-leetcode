class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i = m - 1, j = n - 1;
        while(j >= 0) {
            while(i >= 0 && A[i] > B[j]) {
                A[i + j + 1] = A[i];
                i--;
            }
            while(i == -1 && j >= 0)  {
                A[j] = B[j];
                j--;
            }
            while(j >= 0 && B[j] >= A[i]) {
                A[i + j + 1] = B[j];
                j--;
            }
        }
    }
};
