import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        int n, i, j;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        n = Integer.parseInt(br.readLine());

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                star(i, j, n, bw);
            }
            bw.write("\n");
        }

        bw.close();
    }

    static void star(int i, int j, int n, BufferedWriter bw) throws IOException {
        if ((i/n)%3 == 1 && (j/n)%3 == 1) {
            bw.write(" ");
        }
        else if (n / 3 == 0) {
            bw.write("*");
        }
        else {
            star(i,j,n/3, bw);
        }
    }
}
