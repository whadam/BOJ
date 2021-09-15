import java.io.*;
import java.util.Comparator;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i;
        String[][] str;
        StringTokenizer st;

        n = Integer.parseInt(br.readLine());
        str = new String[n][2];

        for (i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            str[i][0] = st.nextToken();
            str[i][1] = st.nextToken();
        }

        Arrays.sort(str, new Comparator<String[]>() {
            @Override
            public int compare(String[] o1, String[] o2) {
                return Integer.parseInt(o1[0]) - Integer.parseInt(o2[0]);
            }
        });

        for (i = 0; i < n; i++) {
            bw.write(str[i][0] + " " + str[i][1] + "\n");
        }

        bw.close();
    }
}