import java.io.*;

public class Main {
    public static void main(String[] args) {
        int cnt = 1;
        String str;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        try{
            str = br.readLine();

            for (int i = 1; i < str.length(); i++) {
                cnt++;
                if (i > 1 && str.charAt(i) == '=' && str.substring(i-2,i).equals("dz")) cnt -= 2;
                else if (str.charAt(i) == '=' && (str.charAt(i-1) == 'c' || str.charAt(i-1) == 's' || str.charAt(i-1) == 'z')) cnt--;
                else if (str.charAt(i) == '-' && (str.charAt(i-1) == 'c' || str.charAt(i-1) == 'd')) cnt--;
                else if (str.charAt(i) == 'j' && (str.charAt(i-1) == 'l' || str.charAt(i-1) == 'n')) cnt--;
            }

            bw.write(Integer.toString(cnt));
            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
