import java.io.*;

public class Main {
    static int n, min = Integer.MAX_VALUE;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i;

        n = Integer.parseInt(br.readLine());

        calc(1);

        bw.write(min + "");
        bw.close();
    }

    static int calc(int val) {



        return 0;
    }
}