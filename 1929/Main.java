import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        int n, m, i;
        boolean[] prime;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        m = Integer.parseInt(st.nextToken());
        n = Integer.parseInt(st.nextToken());
        prime = new boolean[n+1];

        prime[0] = prime[1] = true;

        for (i = 2; i <= Math.sqrt(prime.length); i++) {
            if (prime[i]) continue;
            for (int j = i*i; j < prime.length; j += i) {
                prime[j] = true;
            }
        }

        for (i = m; i <= n; i++) {
            if (!prime[i]) bw.write(Integer.toString(i)+"\n");
        }
        bw.close();
    }
}
