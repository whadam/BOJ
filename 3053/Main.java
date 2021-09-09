import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        double r;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        r = Double.parseDouble(br.readLine());

        bw.write(String.format("%.6f", Math.PI*r*r) + "\n"); // 유클리드
        bw.write(String.format("%.6f", r * r + r * r));   // 택시

        bw.close();
    }
}
