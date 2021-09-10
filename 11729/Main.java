import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n;

        n = Integer.parseInt(br.readLine());

        bw.write(Integer.toString((int) Math.pow(2,n) - 1) + "\n");

        Hanoi(n,1,2,3);
        bw.close();
    }

    // start, waypoint, destination
    static void Hanoi(int n, int s, int w, int d) throws IOException {
        if (n == 1) {
            bw.write(s + " " + d + "\n");
            return;
        }

        // n-1개를 s에서 w로 이동
        Hanoi(n-1, s, d, w);

        // 1개를 s에서 d로 이동
        bw.write(s + " " + d + "\n");

        // n-1개를 v에서 d로 이동
        Hanoi(n-1, w, s, d);
    }
}
