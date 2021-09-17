import java.io.*;
import java.util.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int n, i, cnt = 0;
        int[] origin, temp;
        Map<Integer, Integer> map = new HashMap<>();

        n = Integer.parseInt(br.readLine());
        origin = new int[n];
        temp = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine());

        for (i = 0; i < n; i++) {
            origin[i] = Integer.parseInt(st.nextToken());
        }
        temp = origin.clone();
        Arrays.sort(temp);

        for (i = 0; i < temp.length; i++) {
            if (!map.containsKey(temp[i])) {
                map.put(temp[i], cnt++);
            }
        }

        for (i = 0; i < origin.length; i++) {
            bw.write(map.get(origin[i]) + " ");
        }

        bw.close();
    }
}