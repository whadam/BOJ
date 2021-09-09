import java.io.*;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        int[] arr = new int[3];
        String str;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        while (!(str = br.readLine()).equals("0 0 0")) {
            st = new StringTokenizer(str);
            for (int i = 0; i < 3; i++) arr[i] = Integer.parseInt(st.nextToken());
            Arrays.sort(arr);

            if ((arr[0]*arr[0] + arr[1]*arr[1]) == arr[2]*arr[2]) {
                bw.write("right\n");
            }
            else {
                bw.write("wrong\n");
            }
        }

        bw.close();
    }
}
