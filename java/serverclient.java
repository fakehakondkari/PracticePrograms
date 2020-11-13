import java.io.*;
import java.net.*;
class serverclient
{
     public static void main(String[] args) throws Exception{
		ServerSocket ss=new ServerSocket(6666);
		Socket s=ss.accept();
		DataInputStream dis=new DataInputStream(s.getInputStream());
		String str=(String)dis.readUTF();
		System.out.println(str);
		ss.close();

	}
}