public class Test {
	static int res10() {
		return 4;
	}
	static int res30() {
		return 30 + res10();
	}
	static int res200() {
		return 200 + res30();
	}
	public static void main(String args[]) { //메인
		int result;
		result = res200();
		System.out.print(result);
	}
}

// result = res200() =  200+res30() = 200+30+res10() = 200+30+4 = 234

// 결과 234