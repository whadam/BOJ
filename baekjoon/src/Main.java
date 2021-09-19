import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int[][] tri;
    static int[][] cost;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i, j;
        StringTokenizer st;

        n = Integer.parseInt(br.readLine());
        tri = new int[n][n];
        cost = new int[n][n];

        for (i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());

            for (j = 0; j < i+1; j++) {
                tri[i][j] = Integer.parseInt(st.nextToken());
            }
        }


        bw.write(calc(n-1) + "");
        bw.close();
    }

    static int calc(int n) {
        int max = Integer.MIN_VALUE;



        return max;
    }
}