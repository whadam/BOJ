import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        int n, a, cnt = 0;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        try{
            n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());

            Loop1:
            for (int i = 0; i < n; i++) {
                a = Integer.parseInt(st.nextToken());
                if (a == 1) continue;

                for (int j = 2; j < a; j++) {
                    if (a % j == 0) {
                        continue Loop1;
                    }
                }
                cnt++;
            }

            bw.write(Integer.toString(cnt));
            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
