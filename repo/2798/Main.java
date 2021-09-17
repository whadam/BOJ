import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, m, result = 0, sum, i, j, k;
        int[] card;
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        card = new int[n];
        m = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());

        for (i = 0; i < n; i++) {
            card[i] = Integer.parseInt(st.nextToken());
        }

        for (i = 0; i < n-2; i++) {
            for(j = i+1; j < n-1; j++) {
                for (k = j+1; k < n; k++) {
                    sum = card[i]+card[j]+card[k];
                    if (sum <= m && result < sum) result = sum;
                }
            }
        }

        bw.write(Integer.toString(result));
        bw.close();
    }
}
