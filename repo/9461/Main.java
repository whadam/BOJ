import java.io.*;

public class Main {
    static long arr[];

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int t, n;

        t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            n = Integer.parseInt(br.readLine());

            if (n < 5) arr = new long[5];
            else arr = new long[n + 1];

            arr[0] = 1;
            arr[1] = 1;
            arr[2] = 1;
            arr[3] = 2;
            arr[4] = 2;

            bw.write(wave(n - 1) + "\n");
        }

        bw.close();
    }

    static long wave(int n) {
        if (arr[n] == 0) {
            arr[n] = (wave(n - 1) + wave(n - 5));
        }
        return arr[n];
    }
}