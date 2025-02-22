class Solution {

    public static boolean solve(int[] nums, int target, int n, int i, int sum) {
        if (i == n || sum >= target) {
            if (sum == target) {
                return true;
            }
            return false;
        }

        if (solve(nums, target, n, i+1, sum+nums[i]) == true) {
            return true;
        }

        if (solve(nums, target, n, i+1, sum) == true) {
            return true;
        }

        return false;
    }

    public static boolean isSubsetPresent(int n, int k,int []a) {
        return solve(a, k, n, 0, 0);
    }
}

public class SubsetSumPresent {
    public static void main(String[] args) {
        
    }
}
