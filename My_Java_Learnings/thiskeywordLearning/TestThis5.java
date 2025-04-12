package thiskeywordLearning;

//  this() : to invoke current class constructor
class Az {
	Az() {
		System.out.println("hello a");
	}

	Az(int x) {
		this(); // Calling default constructor from parameterized constructor
		System.out.println(x);
	}
}

public class TestThis5 {
	public static void main(String... args) {
		@SuppressWarnings("unused")
		Az a = new Az(10);
	}
}
