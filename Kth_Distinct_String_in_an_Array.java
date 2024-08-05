import java.util.HashMap;

/**
 * Kth_Distinct_String_in_an_Array
 */

 class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String, Integer> hsh = new HashMap<String, Integer>();
        for (String s: arr) {
            if (hsh.get(s) == null) {
                hsh.put(s, 1);
            } else {
                hsh.put(s, hsh.get(s) + 1);
            }
        }
        for (String s: arr) {
            if (hsh.get(s) == 1) {
                k--;
                if (k == 0) {
                    return s;
                }
            }
        }
        return "";
    }
}

public class Kth_Distinct_String_in_an_Array {

    public static void main(String[] args) {
        
    }
}