import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        int t, n, i, j, k, s = 0, b = 0;
        boolean[] prime;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        t = Integer.parseInt(br.readLine());

        for (i = 0; i < t; i++) {
            n = Integer.parseInt(br.readLine());
            prime = new boolean[n + 1];
            prime[0] = prime[1] = true;

            for (j = 2; j <= Math.sqrt(prime.length); j++) {
                if (prime[j]) continue; // false가 소수
                for (k = j * j; k < prime.length; k += j) {
                    prime[k] = true;
                }
            }

            Loop1:
            for (j = n/2; j > 0; j--) {
                if (!prime[j]) {    // j가 소수일 때
                    for (k = n/2; k < n; k++) {
                        if (!prime[k]) {    // k가 소수일 때
                            if (j+k == n) {
                                s = j;
                                b = k;
                                break Loop1;
                            }
                        }
                    }
                }
            }

            bw.write(Integer.toString(s) + " " + Integer.toString(b) + "\n");
        }

        bw.close();
    }
}
