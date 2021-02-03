//package CodeChef.LongChallenge.December2019;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.*;

class CubicalVirus {

    static class Frame {
        int position;
        int maxZeroRows;
        public Frame(int position) {
            this.position = position;
        }
    }

    static class LongRow {
        int rowPos;
        int maxZeroRows;
        public LongRow(int rowPos) {
            this.rowPos = rowPos;
        }
    }

    static ReaderWriter rw = new ReaderWriter();
    static Helpers hp = new Helpers();

    private static int[][] transposeNcrossN(int[][] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
                int temp = array[i][j];
                array[i][j] = array[j][i];
                array[j][i] = temp;
            }
        }
        return array;
    }

    private static void findAllZeroInitialRows(int[][][] cube, List<Integer> initialRows, int N) {
        outer: for (int i = 0; i < N; i++) { //for each row
            for (int j = 0; j < N; j++) { //for each frame
                for (int k = 0; k < N; k++) { //for each column
                    int value = cube[j][i][k];
                    if (value == 1) {
                        continue outer;
                    }
                }
            }
            initialRows.add(i + 1);
        }
    }

    private static void solve(boolean multipleTC) throws Exception {
        int T = multipleTC ? rw.ri() : 1;
        while (T-- > 0) {
            int N = rw.ri();
            int[][][] cube = new int[N][N][N];
            String[] strings = new String[N * N];
            for (int i = 0; i < strings.length; i++) {
                strings[i] = rw.rs();
            }
            int frame = 0;
            for (int i = 0; i < strings.length; i += N) {
                int[][] twoD = new int[N][N];
                for (int j = i; j < i + N; j++) {
                    String s = strings[j];
                    for (int k = 0; k < s.length(); k++) {
                        twoD[j - i][k] = s.charAt(k) == '0' ? 0 : 1;
                    }
                }
                transposeNcrossN(twoD);
                cube[frame++] = twoD;
            }
            List<Integer> initialRows = new ArrayList<>();
            findAllZeroInitialRows(cube, initialRows, N);
            ArrayList<Integer> rows = new ArrayList<>();
            ArrayList<Integer> columns = new ArrayList<>();
            ArrayList<Integer> frames = new ArrayList<>();
            for (int i = 1; i <= N; i++) {
                if (!initialRows.contains(i)) {
                    rows.add(i);
                }
                columns.add(i);
                frames.add(i);
            }
            int[][] ans = solve(cube, rows, columns, frames, N);
            for (Integer integer : initialRows) {
                rw.print(integer + " ");
            }
            for (int i = 0; i < 3; i++) {
                int[] dimension = ans[i];
                for (int j = 0; j < dimension.length; j++) {
                    if (dimension[j] == -1)
                        break;
                    rw.print(dimension[j] + " ");
                }
                rw.println("");
            }
        }
    }

    private static void shuffle(ArrayList<Integer> rows, ArrayList<Integer> columns, ArrayList<Integer> frames) {
        Collections.shuffle(rows);
        Collections.shuffle(columns);
        Collections.shuffle(frames);
    }

    private static int[][] solve(int[][][] cube, ArrayList<Integer> rows, ArrayList<Integer> columns, ArrayList<Integer> frames, int N) {
        int[][] ans = new int[3][N];
        for (int i = 0; i < 3; i++) {
            Arrays.fill(ans[i], -1);
        }
        int T = 150000;
        int max = 0;
        while (T-- > 0) {
            int curr = findZeroes(cube, rows, columns, frames, N);
            if (curr > max) {
                T -= 1;
                max = curr;
                for (int i = 0; i < rows.size(); i++) {
                    ans[0][i] = rows.get(i);
                }
                for (int i = 0; i < columns.size(); i++) {
                    ans[1][i] = columns.get(i);
                }
                for (int i = 0; i < frames.size(); i++) {
                    ans[2][i] = frames.get(i);
                }
            }
            while (true) {
                shuffle(rows, columns, frames);
                int value = cube[frames.get(0)-1][rows.get(0)-1][columns.get(0)-1];
                if (value == 0) {
                    break;
                }
            }
        }
        return ans;
    }

    private static int findZeroes(int[][][] cube, ArrayList<Integer> rows, ArrayList<Integer> columns, ArrayList<Integer> frames, int N) {
        int zeroes = 0;
        int np = -1;
        int nr = -1;
        outer : for (int i = 0; i < frames.size(); i++) {
            int f = frames.get(i) - 1;
            for (int j = 0; j < rows.size(); j++) {
                int r = rows.get(j) - 1;
                if (nr != -1 && nr == r) {
                    break;
                }
                for (int k = 0; k < columns.size(); k++) {
                    int c = columns.get(k) - 1;
                    if (np != -1 && np == c) {
                        break;
                    }
                    int value = cube[f][r][c];
                    if (value == 0) {
                        zeroes++;
                    } else {
                        np = c;
                        if (k == 0) {
                            nr = r;
                        }
                        if (k == 0 && j == 0) {
                            break outer;
                        }
                        break;
                    }
                }
            }
        }
        return zeroes;
    }

    public static void main(String[] args) throws Exception {
        solve(false);
        rw.flush();
    }

    static class Helpers {

        static long gcd(long a, long b) {
            if (b == 0) {
                return a;
            }
            return gcd(b, a % b);
        }

        static long lcm(long a, long b) {
            return (a / gcd(a, b)) * b;
        }

        static <T> HashMap<T, Integer> freqMap(T[] array) {
            HashMap<T, Integer> map = new HashMap<>();
            for (int i = 0; i < array.length; i++) {
                if (!map.containsKey(array[i])) {
                    map.put(array[i], 0);
                }
                int ev = map.get(array[i]);
                map.put(array[i], ++ev);
            }
            return map;
        }

    }

    private static void fallBack(int[][][] cube, int N) {
        int Z = -1, R = -1, C = -1;
        outer : for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < N; k++) {
                    if (cube[i][j][k] == 0) {
                        R = j+1;
                        C = k+1;
                        Z = i+1;
                        break outer;
                    }
                }
            }
        }

        rw.print(R + " ");
        for (int i = 1; i <= N; i++) {
            if (i == R) {
                continue;
            }
            rw.print(i + " ");
        }
        rw.println("");
        rw.print(C + " ");
        for (int i = 1; i <= N; i++) {
            if (i == C) {
                continue;
            }
            rw.print(i + " ");
        }
        rw.println("");
        rw.print(Z + " ");
        for (int i = 1; i <= N; i++) {
            if (i == Z) {
                continue;
            }
            rw.print(i + " ");
        }
    }

    static class ReaderWriter {
        static BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        static PrintWriter printWriter = new PrintWriter(System.out);

        protected void flush() throws Exception {
            printWriter.flush();
            printWriter.close();
            bufferedReader.close();
        }

        protected void println(String s) {
            printWriter.println(s);
        }

        protected void print(int i) {
            printWriter.print(i);
        }

        protected void print(String s) {
            printWriter.print(s);
        }

        protected void println(int i) {
            printWriter.println(i);
        }

        protected void println(long l) {
            printWriter.println(l);
        }

        int ri() throws Exception {
            return Integer.parseInt(bufferedReader.readLine());
        }

        long rl() throws Exception {
            return Long.parseLong(bufferedReader.readLine());
        }

        String rs() throws Exception {
            return bufferedReader.readLine();
        }

        double rd() throws Exception {
            return Double.parseDouble(bufferedReader.readLine());
        }

        int[] ria() throws Exception {
            String[] line = rs().split(" ");
            int[] arr = new int[line.length];
            for (int i = 0; i < line.length; i++) {
                arr[i] = Integer.parseInt(line[i]);
            }
            return arr;
        }

        long[] rla() throws Exception {
            String[] line = rs().split(" ");
            long[] arr = new long[line.length];
            for (int i = 0; i < line.length; i++) {
                arr[i] = Integer.parseInt(line[i]);
            }
            return arr;
        }

        int gifs(int[] line, int index) {
            return line[index];
        }

        long glfs(long[] line, int index) {
            return line[index];
        }

        void pia(int[] array) {
            for (int i = 0; i < array.length; i++) {
                printWriter.print(array[i] + " ");
            }
            printWriter.println();
        }

        void pla(long[] array) {
            for (int i = 0; i < array.length; i++) {
                printWriter.print(array[i] + " ");
            }
            printWriter.println();
        }
    }
}