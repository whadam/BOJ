import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static int[][] arr;

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        int i, j;

        StringTokenizer st;

        arr = new int[9][9];

        for (i = 0; i < 9; i++) {
            st = new StringTokenizer(br.readLine());

            for (j = 0; j < 9; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        sudoku(0, 0);
    }

    static void sudoku(int row, int col) throws IOException {
        if (col == 9) {
            sudoku(row + 1, 0);
            return;
        }

        int i, j;

        if (row == 9) {
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                        bw.write(arr[i][j] + " ");
                }
                bw.write("\n");
            }
            bw.close();
            System.exit(0);
        }

        if (arr[row][col] == 0) {
            for (i = 1; i <= 9; i++) {
                if (check(row, col, i)) {
                    arr[row][col] = i;
                    sudoku(row, col+1);
                }
            }
            // 여러 분기에서 틀린게 있으면 0으로 고치고 복귀
            arr[row][col] = 0;
            return;
        }

        sudoku(row, col + 1);
    }

    static boolean check(int row, int col, int val) {
        int i;

        // 행 검사
        for (i = 0; i < 9; i++) {
            if (arr[row][i] == val) {
                return false;
            }
        }

        // 열 검사
        for (i = 0; i < 9; i++) {
            if (arr[i][col] == val) {
                return false;
            }
        }

        // 3x3 검사
        int row3 = (row / 3) * 3, col3 = (col / 3) * 3;

        for (i = row3; i < row3 + 3; i++) {
            for (int j = col3; j < col3 + 3; j++) {
                if (arr[i][j] == val) {
                    return false;
                }
            }
        }

        return true;
    }
}