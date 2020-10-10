class Employee { // 클래스 Employee
	String name; 
	int idNum; 
	int salary; 
	boolean sex; 
} 

public class Test  { 
	public static void main(String[ ] args) { 
		Employee myJik = new Employee(); // 클래스명 사용자정의변수 = new 클래스명() : 개체생성
		myJik.name = "홍길동"; 
		myJik.idNum = 17001; 
		myJik.salary = 4500000; 
		myJik.sex = true; 
		System.out.printf("%s\n", myJik.name); 
		System.out.printf("%d\n", myJik.idNum); 
		System.out.printf("%d\n", myJik.salary); 
		System.out.printf("%b\n", myJik.sex); 
	} 
}

// 결과
/* 홍길동
   17001
   4500000
   true       */