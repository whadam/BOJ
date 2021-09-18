import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int n, result = Integer.MAX_VALUE;
    static int[][] stat;
    static boolean[] matched;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        n = Integer.parseInt(br.readLine());
        stat = new int[n][n];
        matched = new boolean[n];

        StringTokenizer st;

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++) {
                stat[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        matching(0,0);

        bw.write(result+"");
        bw.close();
    }

    static void matching(int idx, int cnt) throws IOException {
        if (cnt == n/2) {
            calc();

            return;
        }

        for (int i = idx; i < n; i++) {
            if (!matched[i]) {
                matched[i] = true;
                matching(i+1, cnt+1);
                matched[i] = false;
            }
        }
    }

    static void calc() throws IOException {
        int start = 0, link = 0, sub;

        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (matched[i] && matched[j]) {
                    start += stat[i][j];
                    start += stat[j][i];
                }
                else if (!matched[i] && !matched[j]) {
                    link += stat[i][j];
                    link += stat[j][i];
                }
            }
        }

        sub = Math.abs(start-link);

        if (sub == 0) {
            bw.write("0");
            bw.close();
            System.exit(0);
        }

        result = Math.min(sub, result);
    }

}