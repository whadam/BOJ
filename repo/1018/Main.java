import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, m, i, j, result, min1 = Integer.MAX_VALUE, min2 = Integer.MAX_VALUE, repair;
        char[][] board;
        String str;
        boolean s;

        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        board = new char[n][m];

        for (i = 0; i < n; i++) {
            str = br.readLine();
            for (j = 0; j < m; j++) {
                board[i][j] = str.charAt(j);
            }
        }

        for (i = 0; i < n-7; i++) {
            for (j = 0; j < m-7; j++) {
                repair = 0;
                s = true;

                for (int k = i; k < i+8; k++) {
                    if (s) {
                        for (int l = j; l < j+8; l+=2) {
                            if (board[k][l] != 'W') repair++;
                        }
                        for (int l = j+1; l < j+8; l+=2) {
                            if (board[k][l] != 'B') repair++;
                        }
                    }
                    else {
                        for (int l = j; l < j+8; l+=2) {
                            if (board[k][l] != 'B') repair++;
                        }
                        for (int l = j+1; l < j+8; l+=2) {
                            if (board[k][l] != 'W') repair++;
                        }
                    }
                    s = !s;
                }

                if (min1 > repair) min1 = repair;
            }
        }

        for (i = 0; i < n-7; i++) {
            for (j = 0; j < m-7; j++) {
                repair = 0;
                s = true;

                for (int k = i; k < i+8; k++) {
                    if (s) {
                        for (int l = j; l < j+8; l+=2) {
                            if (board[k][l] != 'B') repair++;
                        }
                        for (int l = j+1; l < j+8; l+=2) {
                            if (board[k][l] != 'W') repair++;
                        }
                    }
                    else {
                        for (int l = j; l < j+8; l+=2) {
                            if (board[k][l] != 'W') repair++;
                        }
                        for (int l = j+1; l < j+8; l+=2) {
                            if (board[k][l] != 'B') repair++;
                        }
                    }
                    s = !s;
                }

                if (min2 > repair) min2 = repair;
            }
        }

        result = Math.min(min1, min2);

        bw.write(Integer.toString(result));
        bw.close();
    }
}
