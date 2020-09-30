public class Test {
    public static void main(String args[]) {
        int a=12, b=5, sum=2;
        b *= a /= 4;
        sum += ++a * b-- / 4;
        System.out.printf("%d", sum);


        // b = b*a
        // a = a/4 = 12/4 =3
        // b = 5*3 = 15
        // sum = sum + (++a)*(b--)/4 = 2 + (++3)*(15--)/4 = 2+(4*15/4) = 2+15 = 17

        // 결과 17
    }
}