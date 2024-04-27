import java.net.*;
import java.io.*;


public class BasicServer {
    public static void main(String[] args) {
        try {
            int PORT = 5000;
            System.out.println("Waiting for Client");
            ServerSocket ss = new ServerSocket(PORT);
            Socket sc = ss.accept();
        } catch (Exception e) {
            System.out.println("Server port not found");
        }
    }
}
