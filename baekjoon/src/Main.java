import java.io.*;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Main {
    static int n, k;
    static Integer[][] item;
    static int[] W, V;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i;
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());
        item = new Integer[n][2];   // 0 weight, 1 value
        W = new int[n];
        V = new int[n];

        for (i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            item[i][0] = Integer.parseInt(st.nextToken());
            item[i][1] = Integer.parseInt(st.nextToken());
        }

        sum(0, k);

        bw.close();
    }

    static int sum(int i, int k) {
        if (i < 0) return 0;

        if (item[i][k] == null) {

        }
        return 0;
    }
}