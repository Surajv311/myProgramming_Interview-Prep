// in java ^ operator means you are performing XOR operarion
/* you import
java.lang.Math.*;
then Math(x , y ) means x^y
*/

/////////////////////////////////////////////

# flush buffer

import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int i = scan.nextInt();
		double d = scan.nextDouble();
		scan.nextLine();
		String s = scan.nextLine();

		// Write your code here.

		System.out.println("String: " + s);
		System.out.println("Double: " + d);
		System.out.println("Int: " + i);
	}
}

/////////////////////////////////////////////

// FOR LOOP

package proj;

public class prac {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int a = 10 , i ;

		for (i = 0; i < a; i++) { // i++ or i=i+1 both same
			System.out.println("hi");


		}
		for (i = 0; i < a; i++) {
			System.out.println("value of i is :" + i);
			System.out.printf("value of i is :%d \n", i);
		} // just like C prog
		// here instead of println we used printf

	}

}

package pracjavaproject;
import java.util.Scanner;
public class Pracname {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String[] s = {"hi" , "bye" , "guy"};
		int i = 0 ;
		int j = s.length;
		for (i = 0; i < j; i++) {
			System.out.println(s[i]);
		}
	}

}


/////////////////////////////////////////////

package pracjavaproject;
import java.util.Scanner;

public class Pracname {
	// defining & declaring a method
	static void methodFun() {
		System.out.println("method called");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// methods are like functions in java
		methodFun();
	}

}


/////////////////////////////////////////////

// SCANNER CLASS


package proj;

import java.util.Scanner; // import this class first

public class prac {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner dem36 = new Scanner(System.in) ; // create scanner object
		// crtl+shift+o - imports necessary class util . files
		// inp234 is your object
		String usrnam34 = dem36.nextLine();
		System.out.println(" i am " + usrnam34);


	}
}
// give first input as fine in the console

package pracjavaproject;
import java.util.Scanner;
public class Pracname {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

//double y = sc.nextDouble();
//int x = sc.nextInt();
		String a = sc.nextLine();
//System.out.println(y);
//System.out.println(x);
		System.out.println(a);
// a>b? a : b ; means if a >b then return a else return b . you may nest it as well

	}

}


/////////////////////////////////////////////


package proj1;

public class Prac2 {

	public static void main(String[] args) {
		int aInt = 1;  // can be any name of variable
		long aLong = 2;
		float aFloat = 3;
		short aShort = 4;
		byte aByte = 5;
		double aDouble = 6;
		char aChar = 's';
		boolean aBoolean = false;

		System.out.println(aInt);
		System.out.println(aLong);
		System.out.println(aFloat);
		System.out.println(aShort);
		System.out.println(aByte);
		System.out.println(aDouble);
		System.out.println(aChar);
		System.out.println(aBoolean);
	}

}


/////////////////////////////////////////////

package pracjavaproject;
import java.util.*;
//Import the HashMap class
import java.util.HashMap;

public class MyClass {
	public static void main(String[] args) {
// Create a HashMap object called capitalCities
		HashMap<String, String> capitalCities = new HashMap<String, String>();

// Add keys and values (Country, City)
		capitalCities.put("England", "London");
		capitalCities.put("Germany", "Berlin");
		capitalCities.put("Norway", "Oslo");
		capitalCities.put("USA", "Washington DC");
		System.out.println(capitalCities);
	}
}
capitalCities.get("England");
capitalCities.remove("England");
capitalCities.clear();
capitalCities.size();
//Print keys
for (String i : capitalCities.keySet()) {
	System.out.println(i);
}
//Print values
for (String i : capitalCities.values()) {
	System.out.println(i);
}
//Import the HashMap class
import java.util.HashMap;

public class MyClass {
	public static void main(String[] args) {

// Create a HashMap object called people
		HashMap<String, Integer> people = new HashMap<String, Integer>();


// Add keys and values (Name, Age)
		people.put("John", 32);
		people.put("Steve", 30);
		people.put("Angie", 33);

		for (String i : people.keySet()) {
			System.out.println("key: " + i + " value: " + people.get(i));
		}
	}
}


/////////////////////////////////////////////

package pracjavaproject;
import java.util.*;
// import java.util.ArrayList;

class Pracname {

	static int[] intArray = {1, 2, 3, 4, 5};
	static String[] cars_ = {"_Volvo", "_BMW", "_Ford", "_Mazda"};
	static int[][] Array_ = new int[][] { {1, 2} , {3, 4}, {4, 5}, {9, 0} };
	public static void main(String[] args) {
		ArrayList<String> cars = new ArrayList<String>();
		// similarly valid integer array list -> ArrayList<Integer> list_I = new ArrayList<Integer>();
		// similarly char ArrayList -> ArrayList<Character>...........
		cars.add("Volvo");
		cars.add("BMW");
		cars.add("Ford");
		cars.add("Mazda");
		for (String i : cars) {
			/**/	      System.out.println(i);
		}

		for (int j = 0 ; j < cars.size(); j++) {
			/**/	    	 System.out.println(cars.get(j)); // we use get() as its a ArrayList
		}

		/**/	          System.out.println(Arrays.asList(cars)); // to print as list

		// IN ARRAYLIST WE USE SIZE AND IN ARRAY WE USE LENGTH

		for (String any_Variable : cars_) {
			System.out.println(any_Variable);
		}
		for (int j = 0 ; j < cars_.length; j++) {
			System.out.println(cars_[j]);
		}
		System.out.println(Arrays.asList(cars_));

		//->DOES NOT WORK FOR int[]  System.out.println(Arrays.asList(intArray));
		System.out.println(Arrays.toString(intArray));
		System.out.println(Arrays.deepToString(Array_));


	}
}



/////////////////////////////////////////////

package pracjavaproject;
import java.util.Scanner;

public class Pracname {

	int x ;

	int modelYear;
	String modelName;

	Pracname() {
		x = 7; // you need not use 'int' again in <int x = 5>
		System.out.println("CONSTRUCTOR CALLED");

		/*public Pracname(int year, String name) {
		  modelYear = year;
		  modelName = name;
		}*/
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Pracname obj = new Pracname();
		System.out.println(obj.x);

		/*{
		    Pracname myCar = new Car(1969, "Mustang");
		    System.out.println(myCar.modelYear + " " + myCar.modelName);
		  }*/
	}

}


/////////////////////////////////////////////

package pracjavaproject;
import java.util.Scanner;

public class Pracname {

	private String name; // private = restricted access

	// Getter
	public String getName() {
		return name;
	}

	// Setter
	public void setName(String newName) {
		this.name = newName;
	}



	public static void main(String[] args) {

		Pracname obj = new Pracname();
		obj.setName("helloName");
		System.out.println(obj.getName());

	}

}




/////////////////////////////////////////////

package pracjavaproject;
import java.util.Scanner; // in this util is a package in java and we are using the scanner class in util package
import java.util.*;// imports all the classes
//to learn about inheritance
// say parent class

class Parent {
	static void fun() {
		System.out.println("parent entered");
	}

}
// child class . Since .java file saved in 'Pracname' - main() should be in it
class Pracname extends Parent {

	public static void main(String[] args) { // main function should be inside the class file in java to avoid error
		Pracname obj = new Pracname();             // the class file may be child class....
		obj.fun();
		System.out.println("child entered");
	}

}



/////////////////////////////////////////////


public class MyClass {
	public static void main(String[ ] args) {
		try {
			int[] myNumbers = {1, 2, 3};
			System.out.println(myNumbers[10]);
		} catch (Exception e) {
			System.out.println("Something went wrong.");
		}
	}
}

// the finally would let you execute code after try-catch
public class MyClass {
	public static void main(String[] args) {
		try {
			int[] myNumbers = {1, 2, 3};
			System.out.println(myNumbers[10]);
		} catch (Exception e) {
			System.out.println("Something went wrong.");
		} finally {
			System.out.println("The 'try catch' is finished.");
		}

		// throw keyword allows you to make a custom made error

		< The throw statement is used together with an exception type. There are many exception types
		available in Java: ArithmeticException,
		          FileNotFoundException, ArrayIndexOutOfBoundsException, SecurityException, etc: >

		public class MyClass {
			static void checkAge(int age) {
				if (age < 18) {
					throw new ArithmeticException("Access denied - You must be at least 18 years old.");
				} else {
					System.out.println("Access granted - You are old enough!");
				}
			}

			public static void main(String[] args) {
				checkAge(15); // Set age to 15 (which is below 18...)
			}
		}



/////////////////////////////////////////////

		package pracjavaproject;
		import java.util.Scanner;
		import java.util.*;

// an interface is completely abstract class
// we use implements keyword to inherit and use the interface class
// we have methods declared in the interface class and defined in the inherited classes using the implements keyword
// interface method does not have a body
		interface  InterfaceA {
			void fun();
		}
		class Child implements InterfaceA {
			public void fun() {
				System.out.println("interface class ,keyword implements ");
			}
		}
		class Pracname {


			public static void main(String[] args) {

				Child obj = new Child();
				obj.fun();

			}

		}

/////////////////////////////////////////////

		package pracjavaproject;
		import java.util.Scanner;
		import java.util.*;

		class Outer {
			int x = 5 ;

			class Inner {
				int y = 6 ;

			}
		}
// static means you can access it without using an object
		class Pracname {


			public static void main(String[] args) {

				Outer objO = new Outer();
				Outer.Inner objI = objO.new Inner();
				System.out.println(objI.y + objO.x);
			}
		}

		/* ACCESSING OUTER CLASS FROM INNER CLASS

		class OuterClass {
		  int x = 10;

		  class InnerClass {
		    public int myInnerMethod() {
		      return x;
		    }
		  }
		}

		public class MyMainClass {
		  public static void main(String args[]) {
		    OuterClass myOuter = new OuterClass();
		    OuterClass.InnerClass myInner = myOuter.new InnerClass();
		    System.out.println(myInner.myInnerMethod());
		  }
		}

		// Outputs 10

		*/

//////////////////////////////////////////