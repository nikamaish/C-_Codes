


import java.rmi.*;

public class Server {
    public static void main(String[] args) {
        try {
            ServerImpl serverImpl = new ServerImpl();
            Naming.rebind("Server", serverImpl);
            // It uses the Naming.rebind() method to bind the ServerImpl object to the RMI registry with the name "Server". This makes the object available to clients for remote method invocation.
            System.out.println("Server Started....");
        } catch (Exception e) {
            System.out.println("Exception Occurred At Server! " + e.getMessage());
        }
    }
}


