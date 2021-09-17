import java.io.*;
import java.math.BigInteger;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        BigInteger a;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        try{
            st = new StringTokenizer(br.readLine());
            a = new BigInteger(st.nextToken());

            a = a.add(new BigInteger(st.nextToken()));

            bw.write(a.toString());
            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
