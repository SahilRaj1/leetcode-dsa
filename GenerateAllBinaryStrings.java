
import java.util.ArrayList;
import java.util.List;

class Solution {

    public static void solve(List<String> ans, String s, int i, int n, char last) {
        if (i == n) {
            ans.add(s);
            return;
        }
        s += '0';
        solve(ans, s, i+1, n, '0');
        if (last == '0') {
            s = s.substring(0, s.length()-1);
            s += '1';
            solve(ans, s, i+1, n, '1');
        }
    }

    public static List<String> generateBinaryStrings(int n) {
        List<String> ans = new ArrayList<>();
        String s = "";
        solve(ans, s, 0, n, '0');
        return ans;
    }
}

public class GenerateAllBinaryStrings {
    public static void main(String[] args) {
        
    }
}
