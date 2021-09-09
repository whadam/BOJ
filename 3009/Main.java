import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        int[] x = new int[3];
        int[] y = new int[3];
        int i, minx = 1000, maxx = 0, miny = 1000, maxy = 0;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        for (i = 0; i < 3; i++) {
            st = new StringTokenizer(br.readLine());
            x[i] = Integer.parseInt(st.nextToken());
            y[i] = Integer.parseInt(st.nextToken());
        }

        for (i = 0; i < 3; i++) {
            if (minx > x[i]) minx = x[i];
            if (x[i] > maxx) maxx = x[i];
            if (miny > y[i]) miny = y[i];
            if (y[i] > maxy) maxy = y[i];
        }

        bw.write(Integer.toString((minx+maxx)*2 - x[0] - x[1] - x[2]) + " " +
                Integer.toString((miny+maxy)*2 - y[0] - y[1] - y[2]));
        bw.close();
    }
}
