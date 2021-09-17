import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        int t, x, y, distance, max;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        try{
            t = Integer.parseInt(br.readLine());

            for (int i = 0; i < t; i++) {
                st = new StringTokenizer(br.readLine());
                x = Integer.parseInt(st.nextToken());
                y = Integer.parseInt(st.nextToken());
                distance = y-x;
                max = (int) Math.sqrt(distance);

                if (max == Math.sqrt(distance)) {
                    bw.write(Integer.toString(max*2-1));
                }
                else if (distance <= max * max + max) {
                    bw.write(Integer.toString(max*2));
                }
                else {
                    bw.write(Integer.toString(max*2+1));
                }
                bw.write("\n");
            }

            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
