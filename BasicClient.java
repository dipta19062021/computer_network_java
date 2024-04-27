import java.net.*;
import java.io.*;

public class BasicClient{
    public static void main(String[] arg){
        try {
            int PORT = 5000;
            Socket clientSocket = new Socket("localhost", PORT);
            System.out.println("*****End Server*****"); 
        }
        catch (Exception e){
System.out.println("Error due to: "+ e);

        }
    }
}