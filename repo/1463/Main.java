import java.io.*;

public class Main {
    static int n;
    static Integer[] arr;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i;

        n = Integer.parseInt(br.readLine());
        arr = new Integer[n+1];
        arr[0] = arr[1] = 0;

        bw.write(calc(n) + "");
        bw.close();
    }

    static int calc(int val) {
        if (arr[val] == null) {
            if (val%6 == 0) {
                arr[val] = Math.min(calc(val-1), Math.min(calc(val/3), calc(val/2))) + 1;
            }
            else if (val%3 == 0) {
                arr[val] = Math.min(calc(val/3), calc(val-1)) + 1;
            }
            else if (val%2 == 0) {
                arr[val] = Math.min(calc(val/2), calc(val-1)) + 1;
            }
            else {
                arr[val] = calc(val-1) + 1;
            }
        }

        return arr[val];
    }
}