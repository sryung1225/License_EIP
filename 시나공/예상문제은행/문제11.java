public class Test {
	public static void main(String[] args) {
		byte a = 15, b = 19;
		System.out.printf("%d\n", ~a);
		System.out.printf("%d\n", a^b);
		System.out.printf("%d\n", a&b);
		System.out.printf("%d\n", a|b);
	}
}

// a = 2진수(0000 1111)
// b = 2진수(0001 0011)

// ~a = ~ 1111 0000 = - (0000 1111 + 1) = - (0001 0000) = -16
// a^b = 둘이 같으면 0 = 0001 1100 = 28
// a&b = 둘 다 1이면 1 = 0000 0011 = 3
// a|b = 둘 중 하나라도 1이면 1 = 0001 1111 = 31

// 결과
/* -16
   28
   3
   31  */