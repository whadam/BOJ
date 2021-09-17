import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i, rank;
        int[][] wh;

        StringTokenizer st;

        n = Integer.parseInt(br.readLine());
        wh = new int[n][2];

        for (i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            wh[i][0] = Integer.parseInt(st.nextToken());
            wh[i][1] = Integer.parseInt(st.nextToken());
        }

        for (i = 0; i < n; i++) {
            rank = 1;

            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                if (wh[i][0] < wh[j][0] && wh[i][1] < wh[j][1]) {
                    rank++;
                }
            }

            bw.write(Integer.toString(rank) + " ");
        }

        bw.close();
    }
}
