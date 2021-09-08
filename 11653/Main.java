import java.io.*;

public class Main {
    public static void main(String[] args) {
        int n, i = 2;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try{
            n = Integer.parseInt(br.readLine());

            if (n != 1) {
                while (i <= n) {
                    if (n%i == 0) {
                        n /= i;
                        bw.write(Integer.toString(i)+"\n");
                    }
                    else {
                        i++;
                    }
                }
            }

            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
