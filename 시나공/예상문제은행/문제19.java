public class Test {
	public static void main(String[] args){
		int a = 10, b = 10, c = 30;
		a -= b -= c;
		a += b;
		String str01 = a <= b ? String.format("%d", a) : String.format("%d", b);
		System.out.printf(str01);
	}
}

// a = a-(b-c) = 10-(10-30) = 30, b = -20
// a = a+b = 30-20 = 10
// a<=b : 10 <= -20 : 거짓 => String.format("%d", b)

// 결과 -20