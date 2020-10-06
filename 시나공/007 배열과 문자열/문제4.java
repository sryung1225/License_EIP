public class Problem {
	public static void main(String[] args){
		String str = "Programming";
		int n = str.length(); // n=11
		char[] st = new char [n]; // char st[11] 생성
		n--;
		for (int k = n; k >= 0; k--) {
			st[n-k] = str.charAt(k);
		}
		for (char k : st) {
			System.out.printf("%c", k);
		}
	}
}

// n=10 k=10 st[0]=str.charAt(10)=str[10]=g
// n=10 k=9 st[1]=str[9]=n
// ...
// n=10 k=0 st[10]=str[0]=P

// 결과
// gnimmargorP