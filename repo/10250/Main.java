import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        int t, h, w, n, result;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        try{
            t = Integer.parseInt(br.readLine());

            for (int i = 0; i < t; i++) {
                st = new StringTokenizer(br.readLine());
                h = Integer.parseInt(st.nextToken());
                w = Integer.parseInt(st.nextToken());
                n = Integer.parseInt(st.nextToken());

                if (n%h == 0) {
                    result = h*100 + (n/h);
                }
                else
                    result = (n%h)*100 + (n/h) + 1;

                bw.write(Integer.toString(result) + "\n");
            }

            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
