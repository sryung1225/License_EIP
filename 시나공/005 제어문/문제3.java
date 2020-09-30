/* a=8, b=3 대입 */

import java.util.Scanner;
public class Test {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt(); // 8
        int b = scan.nextInt(); // 3
        char c = 'G';

        if (a > 10 && b < 10) { // 거짓 && 참 : X
            if (a - b < 5 || a > 15)
                c='X';
        }
        else if (a > 5 && b < 5) { // 참 && 참 : O : 이거 실행
            if (a - b < 3 || b > 0) // 5<3 || 3>0 = 거짓 || 참 = 참 : 이거 실행
                c='Y'; // 실행
        }
        else
            c='Z';
        System.out.printf("%c",c);
        scan.close();
    }
}

// 결과 Y