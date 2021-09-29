import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int n, i, max = 0;
    static Integer[] asc, desc;
    static int[] seq;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        n = Integer.parseInt(br.readLine());
        seq = new int[n];
        asc = new Integer[n];
        desc = new Integer[n];

        StringTokenizer st = new StringTokenizer(br.readLine());

        for (i = 0; i < n; i++) {
            seq[i] = Integer.parseInt(st.nextToken());
        }

        for (i = 0; i < n; i++) {
            ASC(i);
            DESC(i);
        }

        for (i = 0; i < n; i++) {
            asc[i] += desc[i]-1;
            max = Math.max(asc[i], max);
        }

        bw.write(max+"");
        bw.close();
    }

    static int ASC(int idx) {
        if (asc[idx] == null) {
            asc[idx] = 1;

            for (i = idx - 1; i >= 0; i--) {
                if (seq[i] < seq[idx]) {
                    asc[idx] = Math.max(asc[idx], ASC(i) + 1);
                }
            }
        }

        return asc[idx];
    }

    static int DESC(int idx) {
        if (desc[idx] == null) {
            desc[idx] = 1;

            for (i = idx + 1; i < n; i++) {
                if (seq[i] > seq[idx]) {
                    desc[idx] = Math.max(desc[idx], DESC(i) + 1);
                }
            }
        }

        return desc[idx];
    }
}