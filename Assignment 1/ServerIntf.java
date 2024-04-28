////////////////////////////////// Concatenation //////////////////////////////////

//import java.rmi.*;

//interface ServerIntf extends Remote{
	// Syntax for method declaration: access_specifier return_type method_name(arguments...){ return value}
//	public String stringJoin(String str1, String str2) throws RemoteException;
	
//}



////////////////////////////////// addition //////////////////////////////////

// import java.rmi.*;

// interface ServerIntf extends Remote {
//     int add(int num1, int num2) throws RemoteException; // Changed the method name and return type
// }




////////////////////////////////// isPrime //////////////////////////////////



// import java.rmi.*;

// public interface ServerIntf extends Remote {
//     boolean isPrime(int number) throws RemoteException;
// }




////////////////////////////////// isPalindrome //////////////////////////////////

// import java.rmi.*;

// public interface ServerIntf extends Remote {
    
//     boolean isPalindrome(int num) throws RemoteException; // New method for palindrome checking
// }




//////////////////////////////////// reverse string /////////////////////////////////

// import java.rmi.*;

// public interface ServerIntf extends Remote {
//     String reverseString(String str) throws RemoteException; // Method to reverse a string
// }






//////////////////////////////  even odd ///////////////////////

// import java.rmi.*;

// public interface ServerIntf extends Remote {
//     String checkEvenOdd(int num) throws RemoteException;
// }





// import java.rmi.*;

// public interface ServerIntf extends Remote {
//     double getSquareRoot(double num) throws RemoteException;
// }


// This interface extends the Remote interface provided by the RMI package. Extending Remote indicates that this interface is intended for use in remote communication, allowing its methods to be invoked remotely by clients.



// import java.rmi.*;

// public interface ServerIntf extends Remote {
//     boolean areStringsEqual(String str1, String str2) throws RemoteException;
// }


import java.rmi.*;

public interface ServerIntf extends Remote {
    boolean isPalindrome(String str1) throws RemoteException;
}

