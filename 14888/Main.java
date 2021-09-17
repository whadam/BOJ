import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int n, min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
    static int[] num, op;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i;

        op = new int[4];

        n = Integer.parseInt(br.readLine());
        num = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine());
        for (i = 0; i < n; i++) {
            num[i] = Integer.parseInt(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        for (i = 0; i < 4; i++) {
            op[i] = Integer.parseInt(st.nextToken());
        }

        calc(num[0], 1);
        bw.write(max + "\n" + min);
        bw.close();
    }

    static void calc(int result, int depth) throws IOException {
        if (depth == n) {
            max = Math.max(max, result);
            min = Math.min(min, result);
            return;
        }

        for (int i = 0; i < 4; i++) {
            if (op[i] > 0) {
                op[i]--;

                switch (i) {
                    case 0:
                        calc(result + num[depth], depth + 1);
                        break;
                    case 1:
                        calc(result - num[depth], depth + 1);
                        break;
                    case 2:
                        calc(result * num[depth], depth + 1);
                        break;
                    case 3:
                        calc(result / num[depth], depth + 1);
                        break;
                }

                op[i]++;
            }
        }
    }

}