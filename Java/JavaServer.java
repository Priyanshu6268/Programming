import java.io.*;
import java.net.*;
class JavaServer {
    public static void main(String[] args)
    {
        try {
           
            // establish connection
            ServerSocket serversocket = new ServerSocket(1346);
 
            System.out.println("waiting for request....");
 
            // Socket object to accept all the connections
            Socket socket = serversocket.accept();
 
            System.out.println("Request Accepted...");
           
            // Printstream to print all the data
            PrintStream ps = new PrintStream(socket.getOutputStream());
 
            InputStreamReader isr = new InputStreamReader(System.in);
            BufferedReader br = new BufferedReader(isr);
           
            System.out.println("Input the data at the server...");
           
            // Printing bufferedreader data
            ps.print(br.readLine());
            socket.close();
            serversocket.close();
        }
        catch (IOException e) {
           
            // Catch block for data stream errors
            System.out.println("Not found data for socket "+ e);
        }
    }
}