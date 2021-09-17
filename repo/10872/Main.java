import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        int n;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        n = Integer.parseInt(br.readLine());

        bw.write(Integer.toString(factorial(n)));
        bw.close();
    }

    static int factorial(int n) {
        if (n < 2) {
            return 1;
        }
        else {
            return n * factorial(n-1);
        }
    }
}
