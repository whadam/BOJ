import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        double a, b, v;
        int result;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        try {
            st = new StringTokenizer(br.readLine());
            a = Double.parseDouble(st.nextToken());
            b = Double.parseDouble(st.nextToken());
            v = Double.parseDouble(st.nextToken());

            result = (int) Math.ceil((v-a)/(a-b)) + 1;

            bw.write(Integer.toString(result));
            bw.close();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}