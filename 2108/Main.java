import java.io.*;
import java.util.Arrays;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i, sum = 0, mode = 0, check = 0;
        int[] arr, cnt = new int[8001];
        Arrays.fill(cnt, 0);

        n = Integer.parseInt(br.readLine());
        arr = new int[n];

        for (i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(br.readLine());

            sum += arr[i];
            cnt[arr[i]+4000]++;
        }
        Arrays.sort(arr);

        // 산술 평균
        bw.write(Math.round((float) sum/n) + "\n");

        // 중앙값
        bw. write(arr[n/2] + "\n");

        // 최빈값
        for (i = 0; i < 8001; i++) {
            if (cnt[mode] < cnt[i]) {
                mode = i;
                check = 0;
            }
            else if (cnt[mode] > 0 && cnt[mode] == cnt[i]){
                check = 1;
            }
        }
        if (check == 1) {
            for (i = 0; i < 8001; i++) {
                if (check == 0 && cnt[mode] == cnt[i]) {
                    mode = i;
                    break;
                }
                if (cnt[mode] > 0 && cnt[mode] == cnt[i]) {
                    check = 0;
                }
            }
        }
        bw.write(mode-4000 + "\n");

        // 범위
        bw.write((arr[n-1]-arr[0]) + "\n");

        bw.close();
    }
}