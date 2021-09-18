import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int[][][] abc = new int[21][21][21];

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int a, b, c;
        StringTokenizer st;

        while (true) {
            st = new StringTokenizer(br.readLine());
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            c = Integer.parseInt(st.nextToken());
            if (a == -1 && b == -1 && c == -1) break;

            bw.write("w(" + a + ", " + b + ", " + c + ") = " + w(a, b, c) + "\n");
        }

        bw.close();
    }

    static int w(int a, int b, int c) {
        if ((0 <= a && a <= 20 && 0 <= b && b <= 20 && 0 <= c && c <= 20)
                && abc[a][b][c] != 0) {
            return abc[a][b][c];
        }

        if (a <= 0 || b <= 0 || c <= 0) {
            return 1;
        }
        if (a > 20 || b > 20 || c > 20) {
            return abc[20][20][20] = w(20, 20, 20);
        }
        if (a < b && b < c) {
            return abc[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        }

        return abc[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }

}