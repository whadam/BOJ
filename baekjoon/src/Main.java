import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int n;
    static int[] a;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i, cnt = 1, big, tmp;

        n = Integer.parseInt(br.readLine());
        a = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine());
        big = Integer.parseInt(st.nextToken());

        for (i = 1; i < n; i++) {
            tmp = Integer.parseInt(st.nextToken());
            if (big < tmp) {
                big = tmp;
                cnt++;
            }
        }

        bw.write(cnt+"");
        bw.close();
    }
}