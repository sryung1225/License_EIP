public class Text {
    public static void main(String args[]) {
        int a=5, b=9, c;
        c = b % 5 < 5 ? 1 : 0;
        c = c | c << 3;
        c = a < 5 || c >= 10 ? c - a : c + a;
        System.out.printf("%d", c);


        // c = ((b%5)<5) ? 1 : 0 = ((9%5)<5) ? 1 : 0 = (4<5) ? 1 : 0 = 1(참)
        // c = c | (c<<3) = 0001 | 1000 = 1001 = 9
        // c = (a<5)||(c>=10) ? (c-a) : (c+a) = (5<5)||(9>=10) ? (9-5) : (9+5) = (0||0) ? 4 : 14 = 14(거짓) 

        // 결과 14
    }
}