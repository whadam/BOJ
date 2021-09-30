import java.io.*;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Main {
    static int n;
    static int[][] cable;
    static Integer[] visit;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i, a, b, max = 0;
        StringTokenizer st;

        n = Integer.parseInt(br.readLine());
        cable = new int[n][2];
        visit = new Integer[n];

        for (i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            cable[i][0] = a;
            cable[i][1] = b;
        }
        Arrays.sort(cable, new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2) {
                return o1[0] - o2[0];
            }
        });

        for (i = 0; i < n; i++) {
            max = Math.max(remove(i), max);
        }

        bw.write((n-max)+"");
        bw.close();
    }

    static int remove(int idx) {
        if (visit[idx] == null) {
            visit[idx] = 1;

            for (int i = idx+1; i < n; i++) {
                if (cable[idx][1] < cable[i][1]) {
                    visit[idx] = Math.max(visit[idx], remove(i)+1);
                }
            }
        }

        return visit[idx];
    }
}