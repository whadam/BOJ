import java.io.*;

public class Main {
    public static void main(String[] args) {
        int n, five, three=0;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try{
            n = Integer.parseInt(br.readLine());

            if (n%5 == 0) {
                bw.write(Integer.toString(n/5));
            }
            else {
                five = n/5;
                n %= 5;
                for (int f = five; f >= 0; f--) {
                    three += n/3;
                    n %= 3;
                    if (n == 0) {
                        bw.write(Integer.toString(f+three));
                        break;
                    }
                    else {
                        n += 5;
                    }
                }
                if (n != 0) bw.write("-1");
            }

            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
