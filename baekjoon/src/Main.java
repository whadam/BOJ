import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int n, result;
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

        bw.close();
    }

    static void matching(int idx, int cnt) {
        if (cnt == n/2) {

        }
    }

}