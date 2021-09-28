import java.io.*;

public class Main {
    static int n;
    static Long[][] arr;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i;
        long result = 0;

        n = Integer.parseInt(br.readLine());
        br.close();
        arr = new Long[n + 1][10];

        for (i = 0; i <= 9; i++) {
            arr[1][i] = 1L;
        }

        for (i = 1; i <= 9; i++) {
            result += calc(n, i);
        }

        bw.write((result % 1000000000) + "");
        bw.close();
    }

    static long calc(int num, int val) {
        if (num == 1) {
            return arr[num][val];
        }

        if (arr[num][val] == null) {
            if (val == 0) {
                arr[num][val] = calc(num - 1, 1);
            } else if (val == 9) {
                arr[num][val] = calc(num - 1, 8);
            } else {
                arr[num][val] = calc(num - 1, val - 1) + calc(num - 1, val + 1);
            }
        }

        return arr[num][val] % 1000000000;
    }
}