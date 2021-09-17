import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static int[] arr;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, m;
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        arr = new int[m];
        DFS(n,m,0);
        bw.close();
    }

    static void DFS(int n, int m, int depth) throws IOException {
        if (depth == m) {
            for (int i : arr) {
                bw.write(i + " ");
            }
            bw.write("\n");
            return;
        }

        for (int i = 1; i <= n; i++) {
            arr[depth] = i;
            DFS(n,m,depth+1);
        }
    }
}