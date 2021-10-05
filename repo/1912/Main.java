import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static Integer[] num, arr;
    static int max;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i;

        n = Integer.parseInt(br.readLine());
        num = new Integer[n];
        arr = new Integer[n];
        StringTokenizer st = new StringTokenizer(br.readLine());

        for(i = 0; i < n; i++) {
            num[i] = Integer.parseInt(st.nextToken());
        }

        arr[0] = num[0];
        max = num[0];

        sum(n-1);

        bw.write(max+"");
        bw.close();
    }

    static int sum(int idx) {
        if (arr[idx] == null) {
            arr[idx] = Math.max(sum(idx-1) + num[idx], num[idx]);
            max = Math.max(arr[idx], max);
        }
        return arr[idx];
    }
}