public class Example { 
	public static void main(String[] args) { 
		int[] a =  {90,100,80,70,60,50,30 }; 
		int hap = 0; 
		float avg; 
		for (int i : a) 
			hap = hap + i; 
		avg = (float)hap / a.length; 
		System.out.printf("%d, %.2f", hap, avg); 
	} 
}