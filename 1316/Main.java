import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int n, cnt;
        String str;
        int[] arr = new int[26];

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try{
            n = Integer.parseInt(br.readLine());
            cnt = n;

            for (int i = 0; i < n; i++) {
                str = br.readLine();
                Arrays.fill(arr, 0);

                for(int j = 0; j < str.length(); j++) {
                    if (j > 0 && str.charAt(j) == str.charAt(j-1)) {
                        continue;
                    }
                    if (arr[str.charAt(j)-97] == 0) {
                        arr[str.charAt(j)-97]++;
                    }
                    else {
                        cnt--;
                        break;
                    }
                }
            }

            bw.write(Integer.toString(cnt));
            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
