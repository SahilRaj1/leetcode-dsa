import java.util.Arrays;

/**
 * Make Two_Arrays_Equal_by_Reversing_Subarrays
 */

class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        Arrays.sort(target);
        Arrays.sort(arr);
        int n = arr.length, m = target.length;
        if (n != m) {
            return false;
        }
        for (int i=0; i<n; i++) {
            if (arr[i] != target[i]) {
                return false;
            }
        }
        return true;
    }
}
 
public class Make_Two_Arrays_Equal_by_Reversing_Subarrays {
    public static void main(String[] args) {
        
    }
}