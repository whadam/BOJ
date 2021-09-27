import java.io.*;

public class Main {
    static int n;
    static int[] stair;
    static int[] score;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i;

        n = Integer.parseInt(br.readLine());
        stair = new int[n+1];
        score = new int[n+1];

        for (i = 1; i <= n; i++) {
            stair[i] = Integer.parseInt(br.readLine());
        }
        score[1] = stair[1];
        if (n >= 2) score[2] = stair[1] + stair[2];

        for (i = 3; i <= n; i++) {
            score[i] = Math.max(score[i-2], score[i-3]+stair[i-1]) + stair[i];
        }

        bw.write(score[n]+"");
        bw.close();
    }
}