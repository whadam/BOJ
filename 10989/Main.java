import java.io.*;
import java.util.Arrays;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i;
        int[] arr, cnt = new int[10001], result;

        n = Integer.parseInt(br.readLine());
        arr = new int[n];
        result = new int[n];
        Arrays.fill(cnt, 0);

        for (i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            cnt[arr[i]]++;
        }

        for (i = 1; i < cnt.length; i++) {
            cnt[i] += cnt[i-1];
        }

        for (i = n-1; i >= 0; i--) {
            result[--cnt[arr[i]]] = arr[i];
        }

        for (i = 0; i < n; i++) {
            bw.write(result[i]+"\n");
        }

        bw.close();
    }
}