import java.io.*;

public class Main {
    public static void main(String[] args) {
        int x, cnt = 1 , a = 1, b = 1;
        boolean s = true;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try {
            x = Integer.parseInt(br.readLine());

            while (true) {
                if (cnt == x) break;

                if (s) {
                    b++;
                    cnt++;
                    if (a != 1) a--;
                    else s = false;
                }
                else {
                    a++;
                    cnt++;
                    if (b != 1) b--;
                    else s = true;
                }
            }

            bw.write(Integer.toString(a)+"/"+Integer.toString(b));
            bw.close();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}
