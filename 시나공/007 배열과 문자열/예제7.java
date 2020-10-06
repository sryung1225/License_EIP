// 문자열을 거꾸로 출력하는 JAVA 프로그램

public class Example { 
	public static void main(String[] args) {
		String str = "Information!"; 
		int n = str.length( ); // n=12
		char[ ] st = new char [n];
		n--; 
		for (int k = n; k >= 0; k--)  { 
			st[n-k] = str.charAt(k); 
		} 
		for (char k : st)  {  // st크기(12)만큼 st 값을 k에 저장해 반복
			System.out.printf("%c", k); 
		} 
	}
}

// n=11 k=11 st[0]=str.charAt(11)=!
// n=11 k=10 st[1]=str.charAt(10)=n
// ...
// n=11 k=0 st[11]=str.charAt(0)=I
// st = !noitamrofnI

// 결과
// !noitamrofnI