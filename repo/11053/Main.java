import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int n, i, max;
    static Integer[] arr;
    static int[] seq;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        n = Integer.parseInt(br.readLine());
        seq = new int[n];
        arr = new Integer[n];

        StringTokenizer st = new StringTokenizer(br.readLine());

        for (i = 0; i < n; i++) {
            seq[i] = Integer.parseInt(st.nextToken());
        }

        for (i = 0; i < n; i++) {
            calc(i);
        }

        max = arr[0];
        for (i = 1; i < n; i++) {
            max = Math.max(max, arr[i]);
        }

        bw.write(max+"");
        bw.close();
    }

    static int calc(int idx) {
        // 아직 값 모를때
        if (arr[idx] == null) {
            arr[idx] = 1;   // 1로 초기화

            for (i = idx-1; i >= 0; i--) {  // 현재 인덱스-1부터 탐색 아래로 탐색
                if (seq[i] < seq[idx]) {    // 현재 인덱스보다 작은 인덱스 i
                    // 작은 인덱스 중 가장 큰 값에 + 1한 값을 취함.
                    arr[idx] = Math.max(arr[idx], calc(i) + 1);
                }
            }
        }

        return arr[idx];
    }
}