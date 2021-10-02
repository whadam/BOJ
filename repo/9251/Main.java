import java.io.*;

public class Main {
    static Integer[][] lcs;
    static char[] str1, str2;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        str1 = br.readLine().toCharArray();
        str2 = br.readLine().toCharArray();

        lcs = new Integer[str1.length][str2.length];

        bw.write(LCS(str1.length-1, str2.length-1)+"");
        bw.close();
    }

    static int LCS(int r, int c) { // row, column
        if (r == -1 || c == -1) {
            return 0;
        }

        if (lcs[r][c] == null) {
            lcs[r][c] = 0;

            if (str1[r] == str2[c]) {
                lcs[r][c] = LCS(r-1, c-1)+1;
            }
            else {
                lcs[r][c] = Math.max(LCS(r-1,c), LCS(r,c-1));
            }
        }

        return lcs[r][c];
    }
}