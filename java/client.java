import java.io.*;
import java.net.*;
class client
{
     public static void main(String[] args) throws Exception{
		ServerSocket ss=new ServerSocket(6666);
		Socket s=ss.accept();
		DataOutputStream dout=new DataOutputStream(s.getOutputStream());
		dout.writeUTF("Hi");
		dout.flush();
		dout.close();
		s.close();
		
	}
}