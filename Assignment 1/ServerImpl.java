///////////////////////// Concatenation ////////////////////

//import java.rmi.*;
//import java.rmi.server.*;

//public class ServerImpl extends UnicastRemoteObject
//	implements ServerIntf {
	
//		public ServerImpl() throws RemoteException{
		
//		}
//		public String stringJoin(String str1, String str2) throws RemoteException{
//			String result = str1 + str2;

//			return result;
//		}
//}
		



///////////////////////////  Addition ////////////////////////////////

// import java.rmi.*;
// import java.rmi.server.*;

// public class ServerImpl extends UnicastRemoteObject implements ServerIntf {
//     public ServerImpl() throws RemoteException {
//     }

//     public int add(int num1, int num2) throws RemoteException {
//         return num1 + num2;
//     }
// }





///////////////////////////////  isPrime /////////////////////////////


// import java.rmi.*;
// import java.rmi.server.*;

// public class ServerImpl extends UnicastRemoteObject implements ServerIntf {
//     public ServerImpl() throws RemoteException {
//         super();
//     }

//     public boolean isPrime(int number) throws RemoteException {
//         if (number <= 1) {
//             return false;
//         }
//         for (int i = 2; i <= Math.sqrt(number); i++) {
//             if (number % i == 0) {
//                 return false;
//             }
//         }
//         return true;
//     }
// }



////////////////////////////////// isPalindrome //////////////////////////////////

// import java.rmi.*;
// import java.rmi.server.*;

// public class ServerImpl extends UnicastRemoteObject implements ServerIntf {
//     protected ServerImpl() throws RemoteException {
//         super();
//     }

//     public boolean isPalindrome(int num) throws RemoteException {
//         int reversedNum = 0;
//         int originalNum = num;

//         while (num != 0) {
//             int digit = num % 10;
//             reversedNum = reversedNum * 10 + digit;
//             num /= 10;
//         }

//         return originalNum == reversedNum;
//     }

//     // Implement other methods of ServerIntf interface here
// }




//////////////////////////////////// reverse string /////////////////////////////////

// import java.rmi.*;
// import java.rmi.server.*;

// public class ServerImpl extends UnicastRemoteObject implements ServerIntf {
//     protected ServerImpl() throws RemoteException {
//         super();
//     }

//     public String reverseString(String str) throws RemoteException {
//         StringBuilder reversed = new StringBuilder(str);
//         return reversed.reverse().toString();
//     }
// }






//////////////////////////////  even odd ///////////////////////

// import java.rmi.*;
// import java.rmi.server.*;

// public class ServerImpl extends UnicastRemoteObject implements ServerIntf {
//     protected ServerImpl() throws RemoteException {
//         super();
//     }

//     public String checkEvenOdd(int num) throws RemoteException {
//         if (num % 2 == 0) {
//             return "The number is even.";
//         } else {
//             return "The number is odd.";
//         }
//     }

//     public static void main(String[] args) {
//         try {
//             ServerImpl serverImpl = new ServerImpl();
//             Naming.rebind("Server", serverImpl);
//             System.out.println("Server Started....");
//         } catch (Exception e) {
//             System.out.println("Exception Occurred At Server! " + e.getMessage());
//         }
//     }
// }



// import java.rmi.RemoteException;
// import java.rmi.server.UnicastRemoteObject;

// public class ServerImpl extends UnicastRemoteObject 
// // By extending UnicastRemoteObject, this class becomes a remote object that can be accessed remotely by clients.

// implements ServerIntf {
//     public ServerImpl() throws RemoteException {
//         super();
//         // It calls the constructor of UnicastRemoteObject using super(), which initializes the remote object.
//     }

//     public double getSquareRoot(double num) throws RemoteException {
//         if (num < 0) {
//             throw new RemoteException("Cannot calculate square root of a negative number.");
//         }
//         return Math.sqrt(num);
//     }
// }




// import java.rmi.RemoteException;
// import java.rmi.server.UnicastRemoteObject;

// public class ServerImpl extends UnicastRemoteObject 
// implements ServerIntf {
//     public ServerImpl() throws RemoteException {
//         super();
//     }


//     public boolean areStringsEqual(String str1, String str2) throws RemoteException {
//         return str1.equals(str2);
//     }
// }



import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class ServerImpl extends UnicastRemoteObject 
implements ServerIntf {
    public ServerImpl() throws RemoteException {
        super();
    }


    public boolean isPalindrome(String str1) throws RemoteException {
       StringBuffer reversed = new StringBuffer(str1);
       reversed.reverse();
       return str1.equals(reversed.toString());
    }
}

