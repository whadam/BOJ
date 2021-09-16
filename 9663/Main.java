import java.io.*;

public class Main {

    static int cnt = 0;
    static int[] arr;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n;

        n = Integer.parseInt(br.readLine());

        arr = new int[n];

        nQueen(n,0);
        bw.write(cnt+"");
        bw.close();
    }

    static void nQueen(int n, int depth) throws IOException {
        if (depth == n) {
            cnt++;
            return;
        }

        for (int i = 1; i <= n; i++) {
            arr[depth] = i;
            // 해당 열 i 번째 행 가능 검사
            if (possibility(depth)) {
                nQueen(n, depth+1);
            }
        }
    }

    static boolean possibility(int column) {
        for (int i = 0; i < column; i++) {
            // 같은 행 존재
            if (arr[column] == arr[i]) {
                return false;
            }
            // 대각선상 존재
            else if (Math.abs(column-i) == Math.abs(arr[column] - arr[i])) {
                return false;
            }
        }

        return true;
    }
}