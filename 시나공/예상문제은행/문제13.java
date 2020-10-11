public class Test {
	public static void main(String[] args) {
		int a = 035, b = 0x35, c = 35;
		System.out.printf("%d\n", a);
		System.out.printf("%d\n", b);
		System.out.printf("%d\n", c);
	}
}

// a = 8진수(035) = 8*3+1*5 = 29
// b = 16진수(0x35) = 16*3+1*5 = 53
// c = 35

// 결과
/* 29
   53
   35 */