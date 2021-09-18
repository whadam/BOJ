import java.io.*;

public class Main {
    static Integer arr[][] = new Integer[41][2];

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int t, n;

        arr[0][0] = 1;
        arr[0][1] = 0;
        arr[1][0] = 0;
        arr[1][1] = 1;

        t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            n = Integer.parseInt(br.readLine());
            fibo(n);
            bw.write(arr[n][0] + " " + arr[n][1] + "\n");
        }

        bw.close();
    }

    static Integer[] fibo(int n) {
        if (arr[n][0] == null && arr[n][1] == null) {
            arr[n][0] = fibo(n-1)[0] + fibo(n-2)[0];
            arr[n][1] = fibo(n-1)[1] + fibo(n-2)[1];
        }

        return arr[n];
    }

}