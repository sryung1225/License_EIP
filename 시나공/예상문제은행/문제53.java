class SuperObject { // 클래스 SuperObject
	public void paint() {
		draw();
	}
	public void draw() {
		draw();
		System.out.println("Super Object");
	}
}
class SubObject extends SuperObject { // 부모 SuperObject를 갖는 자식클래스 SubObject : Sub는 Super한테 값을 상속 받음
	public void paint() {
		super.draw();
	}
	public void draw() {
		System.out.println("Sub Object");
	}
}
public class Test {
	public static void main(String[] args) {
		SuperObject a = new SubObject();
		a.paint();
	}
}

// SuperObject a = new SubObject(); : Super를 부모로 갖는 Sub a (묵시적 클래스 형변환)
// a.paint() = SubObject.paint() : Sub(a)로 이동해서 paint()
// => super.draw() = SuperObject.draw() : 부모(Super)로 이동해서 draw()
// => draw() = SubObject.draw() : 형변환으로 인해 자식 클래스가 주체가 됨
// => System.out.println("Sub Object");
// => System.out.println("Super Object");

// 결과
/* Sub Object
   Super Object */