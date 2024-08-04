import java.util.Collections;
import java.util.ArrayList;
import java.util.List;

class Solution {
    public int rangeSum(int[] nums, int n, int left, int right) {
        List<Integer> sums = new ArrayList<>();
        for (int i=0; i<n; i++) {
            int sum = 0;
            for (int j=i; j<n; j++) {
                sum += nums[j];
                sums.add(sum);
            }
        }
        Collections.sort(sums);
        int ans = 0, M = (int)1e9+7;
        for (int i=left-1; i<right; i++) {
            ans = (ans + sums.get(i)) % M;
        }
        return ans;
    }
}

/**
 * Range_Sum_of_Sorted_Subarray_Sums
 */
public class Range_Sum_of_Sorted_Subarray_Sums {

    public static void main(String[] args) {
        
    }
}