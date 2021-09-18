import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n;
        int[] arr = new int[3];
        arr[0] = 1;
        arr[1] = 2;

        n = Integer.parseInt(br.readLine());

        while (n-- > 2) {
            arr[2] = (arr[0]+arr[1])%15746;
            arr[0] = arr[1];
            arr[1] = arr[2];
        }

        bw.write(arr[2]+"");
        bw.close();
    }
}