import java.io.*;
import java.util.Arrays;

public class Main {
    static int n;
    static int[] glass;
    static int[] qnt;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i;

        n = Integer.parseInt(br.readLine());
        glass = new int[n + 1];
        qnt = new int[n + 1];

        for (i = 1; i <= n; i++) {
            glass[i] = Integer.parseInt(br.readLine());
        }
        qnt[1] = glass[1];
        if (n >= 2) qnt[2] = glass[1] + glass[2];

        for (i = 3; i <= n; i++) {
            qnt[i] = Math.max(qnt[i - 1], Math.max(qnt[i - 2], qnt[i - 3] + glass[i - 1])+glass[i]);
        }

        bw.write(qnt[n] + "");
        bw.close();
    }
}