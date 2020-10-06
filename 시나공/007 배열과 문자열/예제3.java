// JAVA에서 향상된 for문을 사용한 예제

public class Example { 
	public static void main(String[] args) { 
		int[] a = {90, 100, 80, 70, 60, 50, 30}; 
		int hap = 0; 
		float avg; 
		for (int i : a) // a길이(7)만큼 i에 저장하면서 반복
			hap = hap + i; 
		avg = (float)hap / a.length; // a.length=7
		System.out.printf("%d, %.2f", hap, avg); 
	} 
}

// i=90 hap=90
// i=100 hap=90+100
// i=80 hap=90+100+80
// ...
// i=30 hap=90+100+80+70+60+50+30=480
// avg=480/7=68.571...

// 결과
// 480, 68.57