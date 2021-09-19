import java.io.*;
import java.util.Arrays;

public class Main {
    static int[] arr;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n;

        n = Integer.parseInt(br.readLine());

        arr = new int[n+2];

        Arrays.fill(arr, -1);

        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;

        /* this code uses less memory and is faster than using function
        while (n-- > 0) {
            arr[2] = (arr[0] + arr[1]) % 15746;
            arr[0] = arr[1];
            arr[1] = arr[2];
        }
        bw.write(arr[2]+"");
        */

        bw.write(tile(n)+ "");
        bw.close();
    }

    static int tile(int n) {
        if (arr[n] == -1) {
            arr[n] = (tile(n-1) + tile(n-2)) % 15746;
        }
        return arr[n];
    }
}