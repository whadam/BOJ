import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        int t;
        double l;
        int[] pt = new int[6];

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        t = Integer.parseInt(br.readLine());

        for (int i = 0; i < t; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < 6; j++) {
                pt[j] = Integer.parseInt(st.nextToken());
            }

            if (pt[0] == pt [3] && pt[1] == pt[4] && pt[2] == pt[5]) {
                bw.write("-1\n");
                continue;
            }

            l = Math.sqrt(Math.pow(pt[3]-pt[0], 2) + Math.pow(pt[4]-pt[1], 2));

            // 두 점의 거리가 탐색거리 합보다 멀 때 = 두 원이 떨어져 있을 때
            if (pt[2]+pt[5] < l) {
                bw.write("0\n");
            }
            // 한 점 탐색거리와 두 점 사이 거리 합이 다른 점 탐색거리보다 작을 때 = 한 원 안에 다른 원이 있을 때
            else if (Math.abs(pt[2]-pt[5]) > l) {
                bw.write("0\n");
            }
            // 탐색거리 합이 두 점 사이 거리와 같을 때 = 두 원이 한 점에서 바깥으로 닿아있을 때
            else if (l == pt[2]+pt[5]) {
                bw.write("1\n");
            }
            // 탐색거리 차가 두 점 사이 거리와 같을 때 = 두 원이 한 점에서 안쪽으로 닿아있을 때
            else if (l == Math.abs(pt[2]-pt[5])) {
                bw.write("1\n");
            }
            else {
                bw.write("2\n");
            }
        }

        bw.close();
    }
}
