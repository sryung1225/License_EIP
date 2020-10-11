public class Test {
	public static void main(String[] args){
		int a, b, c, hap;
		a = b = c = 2;
		hap = ++a | b-- & c--;
		System.out.printf("%d %d %d %d", hap, a, b, c);
	}
}

// a=2 b=2 c=2
// hap = ++2 | 2-- & 2-- = 3|(2&2) = 2진수(11|(10&10)) = 2진수(11|10) = 2진수(11) = 3
// a=3 b=1 c=1

// 결과
// 3 3 1 1