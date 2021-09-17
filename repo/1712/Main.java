import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        int bep = 1, a, b, c;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        try {
            st = new StringTokenizer(br.readLine());

            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            c = Integer.parseInt(st.nextToken());

            if (b >= c) {
                bep = -1;
            }
            else {
                while (a >= (c-b) * bep) {
                    bep++;
                }
            }

            bw.write(Integer.toString(bep));
            bw.close();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}