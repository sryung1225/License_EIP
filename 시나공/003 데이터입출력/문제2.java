// 2개의 정수를 입력받아 합을 출력하는 프로그램 => Scanner 클래스 사용

import java.util.Scanner;

public class Test {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nestInt();
        System.out.printf("%d", a+b);
    }
}
