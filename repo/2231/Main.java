import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i, j, sum = 0;
        String str;

        n = Integer.parseInt(br.readLine());

        for (i = 1; i < n; i++) {
            sum = i;
            str = Integer.toString(i);
            for (j = 0; j < str.length(); j++) {
                sum += Integer.parseInt(str.substring(j,j+1));
            }
            if (sum == n) break;
        }
        if (n == i) i = 0;

        bw.write(Integer.toString(i));
        bw.close();
    }
}
