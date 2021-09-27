import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int n;
    static Integer[][] tri;
    static Integer[][] cost;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i, j;
        StringTokenizer st;

        n = Integer.parseInt(br.readLine());
        tri = new Integer[n][n];
        cost = new Integer[n][n];

        for (i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());

            for (j = 0; j < i+1; j++) {
                tri[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        cost[n-1] = tri[n-1];

        bw.write(calc(0,0) + "");
        bw.close();
    }

    static int calc(int depth, int idx) {
        if (depth == n - 1) return cost[depth][idx];

        if (cost[depth][idx] == null) {
            cost[depth][idx] = Math.max(calc(depth+1, idx), calc(depth+1, idx+1)) + tri[depth][idx];
        }

        return cost[depth][idx];
    }
}