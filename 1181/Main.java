import java.io.*;
import java.util.Arrays;
import java.util.Comparator;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i, j, k;
        String[] str;
        String temp;

        n = Integer.parseInt(br.readLine());
        str = new String[n];

        for (i = 0; i < n; i++) {
            str[i] = br.readLine();
        }

        Arrays.sort(str);
        Arrays.sort(str, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return o1.length() - o2.length();
            }
        });

        for (i = 0; i < n; i++) {
            if (i != n-1 && str[i].equals(str[i+1])) {
                continue;
            }
            else {
                bw.write(str[i] + "\n");
            }
        }
        bw.close();
    }
}