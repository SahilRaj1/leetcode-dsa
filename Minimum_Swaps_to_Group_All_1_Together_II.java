/**
 * Minimum_Swaps_to_Group_All_1_Together_II
 */

class Solution {
    public int minSwaps(int[] nums) {
        int n = nums.length, totalOnes = 0;
        for (int num: nums) {
            totalOnes += num;
        }
        if (totalOnes == 0 || totalOnes == n) {
            return 0;
        }
        int currentOnes = 0;
        for (int i=0; i<totalOnes; i++) {
            currentOnes += nums[i];
        }
        int maxOnes = currentOnes;
        for (int i=0; i<n; i++) {
            currentOnes -= nums[i];
            currentOnes += nums[(i + totalOnes) % n];
            maxOnes = Math.max(maxOnes, currentOnes);
        }
        return totalOnes - maxOnes;
    }
}

public class Minimum_Swaps_to_Group_All_1_Together_II {
    public static void main(String[] args) {
        
    }
}