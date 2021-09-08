import java.io.*;

public class Main {
    public static void main(String[] args) {
        int m, n, sum = 0, min = Integer.MAX_VALUE;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try{
            m = Integer.parseInt(br.readLine());
            n = Integer.parseInt(br.readLine());

            Loop1:
            for (int i = m; i <= n; i++) {
                if (i == 1) continue;
                for (int j = 2; j < i; j++) {
                    if (i%j == 0) {
                        continue Loop1;
                    }
                }
                sum += i;
                if (i < min) min = i;
            }

            if (sum == 0) {
                bw.write("-1");
            }
            else {
                bw.write(Integer.toString(sum) + "\n" + Integer.toString(min));
            }
            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
