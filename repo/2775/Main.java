import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int t, k, n, sum;
        int[][] arr = new int[15][15];
        for (int i = 0; i < 15; i++) {
            Arrays.fill(arr[i], 1);
        }

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try{
            t = Integer.parseInt(br.readLine());
            for (int i = 1; i <= 14; i++) {
                arr[0][i] = i;
            }

            for (int i = 0; i < t; i++) {
                k = Integer.parseInt(br.readLine());
                n = Integer.parseInt(br.readLine());

                for (int j = 1; j <= 14; j++) { // 층 반복
                    for (int m = 1; m <= 14; m++) { // 호 반복
                        sum = 0;
                        for(int q = m; q >= 1; q--) {
                            sum += arr[j-1][q];
                        }
                        arr[j][m] = sum;
                    }
                }

                bw.write(Integer.toString(arr[k][n]) + "\n");
            }

            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
