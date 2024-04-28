///////////////////////// Concatenation ////////////////////

//import java.rmi.*;
//import java.util.Scanner;

//public class Client{
//	public static void main(String[] args){
///		Scanner sc = new Scanner(System.in);
		
	///	try{
		//	String serverURL = "rmi://localhost/Server";
		//	ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);
			
		///	System.out.print("Enter First String: ");
			//String str1 = sc.nextLine();
			
		//	System.out.print("Enter Second String: ");
		//	String str2 = sc.nextLine();
			
			
		
		//	System.out.println("--------------- Results ---------------");
		//	System.out.println("Strings After Joining Is: " + serverIntf.stringJoin(str1, str2));
			
			
		//}catch(Exception e){
		//	System.out.println("Exception Occurred At Client!" + e.getMessage());
		//}
		
	//}

//}




///////////////////////////  Addition ////////////////////////////////

// import java.rmi.*;

// public class Client {
//     public static void main(String[] args) {
//         try {
//             String serverURL = "rmi://localhost/Server";
//             ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);

//             System.out.print("Enter First number: ");
//             int num1 = new java.util.Scanner(System.in).nextInt(); // Read input directly
           
//             System.out.print("Enter Second number: ");
//             int num2 = new java.util.Scanner(System.in).nextInt(); // Read input directly

//             System.out.println("--------------- Results ---------------");
//             System.out.println("Sum of numbers is: " + serverIntf.add(num1, num2));
//         } catch (Exception e) {
//             System.out.println("Exception Occurred At Client! " + e.getMessage());
//         }
//     }
// }





///////////////////////////////  isPrime /////////////////////////////
// import java.rmi.*;

// public class Client {
//     public static void main(String[] args) {
//         try {
//             String serverURL = "rmi://localhost/Server";
//             ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);

//             java.util.Scanner sc = new java.util.Scanner(System.in);
//             System.out.print("Enter a number to check if it's prime: ");
//             int num = sc.nextInt();

//             System.out.println("--------------- Result ---------------");
//             if (serverIntf.isPrime(num)) {
//                 System.out.println(num + " is a prime number.");
//             } else {
//                 System.out.println(num + " is not a prime number.");
//             }
//             sc.close();
//         } catch (Exception e) {
//             System.out.println("Exception Occurred At Client! " + e.getMessage());
//         }
//     }
// }



////////////////////////////////// isPalindrome //////////////////////////////////


// import java.rmi.*;

// public class Client {
//     public static void main(String[] args) {
//         try {
//             String serverURL = "rmi://localhost/Server";
//             ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);

//             java.util.Scanner sc = new java.util.Scanner(System.in);
//             System.out.print("Enter a number to check if palindrome: ");
//             int num = sc.nextInt();

//             System.out.println("--------------- Result ---------------");

//             if (serverIntf.isPalindrome(num)) {
//                 System.out.println(num + " is a palindrome.");
//             } else {
//                 System.out.println(num + " is not a palindrome.");
//             }
//             sc.close();
//         } catch (Exception e) {
//             System.out.println("Exception Occurred At Client! " + e.getMessage());
//         }
//     }
// }





//////////////////////////////////// reverse string /////////////////////////////////



// import java.rmi.*;

// public class Client {
//     public static void main(String[] args) {
//         try {
//             String serverURL = "rmi://localhost/Server";
//             ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);

//             java.util.Scanner sc = new java.util.Scanner(System.in);
          
//             System.out.print("Enter string to reverse: ");
//             String str = sc.next();

//             String reversedStr = serverIntf.reverseString(str);
//             System.out.println("Reversed string: " + reversedStr);
            
//             sc.close();
//         } catch (Exception e) {
//             System.out.println("Exception Occurred At Client! " + e.getMessage());
//         }
//     }
// }







//////////////////////////////  even odd ///////////////////////

// import java.rmi.*;

// public class Client {
//     public static void main(String[] args) {
//         try {
//             String serverURL = "rmi://localhost/Server";
//             ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);

//             java.util.Scanner sc = new java.util.Scanner(System.in);
          
//             System.out.print("Enter a number: ");
//             int num = sc.nextInt();

//             String result = serverIntf.checkEvenOdd(num);
//             System.out.println(result);
            
//             sc.close();
//         } catch (Exception e) {
//             System.out.println("Exception Occurred At Client! " + e.getMessage());
//         }
//     }
// }



// import java.rmi.*;

// public class Client {
//     public static void main(String[] args) {
//         try {
//             String serverURL = "rmi://localhost/Server";
//             ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);

//             java.util.Scanner sc = new java.util.Scanner(System.in);
//             System.out.print("Enter a number to find its square root: ");
//             double num = sc.nextDouble();

//             System.out.println("--------------- Result ---------------");
//             double squareRoot = serverIntf.getSquareRoot(num);
//             System.out.println("Square root of " + num + " is: " + squareRoot);
//             sc.close();
//         } catch (Exception e) {
//             System.out.println("Exception Occurred At Client! " + e.getMessage());
//         }
//     }
// }




import java.rmi.*;

public class Client {
    public static void main(String[] args) {
        try {
            String serverURL = "rmi://localhost/Server";
            ServerIntf serverIntf = (ServerIntf) Naming.lookup(serverURL);

            java.util.Scanner sc = new java.util.Scanner(System.in);
            System.out.print("Enter a string: ");
            String str = sc.nextLine();

            System.out.println("--------------- Result ---------------");
            boolean isPalindrome = serverIntf.isPalindrome(str);
            if (isPalindrome) {
                System.out.println("The string is a palindrome.");
            } else {
                System.out.println("The string is not a palindrome.");
            }
            sc.close();
        } catch (Exception e) {
            System.out.println("Exception Occurred At Client! " + e.getMessage());
        }
    }
}

