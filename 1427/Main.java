import java.io.*;
import java.util.Arrays;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        String str;
        int i;
        int[] arr;

        str = br.readLine();
        arr = new int[str.length()];

        for (i = 0; i < str.length(); i++) {
            arr[i] = str.charAt(i) - '0';
        }
        Arrays.sort(arr);

        str = "";
        for (i = arr.length-1; i >= 0; i--) {
            str += arr[i] + "";
        }

        bw.write(str);
        bw.close();
    }
}