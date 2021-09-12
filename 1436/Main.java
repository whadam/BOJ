import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        String str;
        int cnt = 0, n, i;

        n = Integer.parseInt(br.readLine());

        for (i = 666; ; i++) {
            str = Integer.toString(i);
            if (str.contains("666")) {
                cnt++;
            }
            if (cnt == n) break;
        }

        bw.write(Integer.toString(i));
        bw.close();
    }
}