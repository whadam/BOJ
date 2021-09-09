import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        int n;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        n = Integer.parseInt(br.readLine());

        bw.write(Integer.toString(fibonacci(n)));
        bw.close();
    }

    static int fibonacci(int n) {
        if (n < 2) {
            return n;
        }
        else {
            return fibonacci(n-2) + fibonacci(n-1);
        }
    }
}
