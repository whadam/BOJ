import java.io.*;

public class Main {
    public static void main(String[] args) {
        int n, cnt = 1, cmp = 1;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            n = Integer.parseInt(br.readLine());

            while (cmp < n) {
                cmp += cnt*6;
                cnt++;
            }

            bw.write(Integer.toString(cnt));
            bw.close();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}
