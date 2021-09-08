import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        int n, i, cnt;
        boolean[] prime;
        String str;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        while (!(str = br.readLine()).equals("0")) {
            n = Integer.parseInt(str);
            prime = new boolean[2*n + 1];
            cnt = 0;

            prime[0] = prime[1] = true;

            for (i = 2; i <= Math.sqrt(prime.length); i++) {
                if (prime[i]) continue;
                for (int j = i * i; j < prime.length; j += i) {
                    prime[j] = true;
                }
            }

            for (i = n+1; i <= 2*n; i++) {
                if (!prime[i]) cnt++;
            }
            bw.write(Integer.toString(cnt) + "\n");
        }

        bw.close();
    }
}
