import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int[][] rgb;
    static int[][] cost;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i, j;
        StringTokenizer st;

        n = Integer.parseInt(br.readLine());
        rgb = new int[n][3];
        cost = new int[n][3];

        for (i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());

            for (j = 0; j < 3; j++) {
                rgb[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        cost[0] = rgb[0];

        bw.write(Math.min(calc(n-1,0), Math.min(calc(n-1,1), calc(n-1,2)))+"");
        bw.close();
    }

    static int calc(int n, int color) {
        int min;
        if (cost[n][color] == 0) {
            if (color == 0) {
                min = Math.min(calc(n-1, 1), calc(n-1, 2));
                cost[n][0] = min + rgb[n][0];
            }
            else if (color == 1) {
                min = Math.min(calc(n-1, 0), calc(n-1, 2));
                cost[n][1] = min + rgb[n][1];
            }
            else {
                min = Math.min(calc(n-1, 0), calc(n-1, 1));
                cost[n][2] = min + rgb[n][2];
            }
        }

        return cost[n][color];
    }
}