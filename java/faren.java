import java.io.*;
import java.net.*;
class faren
{
	 public static void main(String[] args) {
	 	try{
	 		InetAddress ip=InetAddress.getByName("www.google.com");
	 		System.out.println(ip.getHostName());
	 		System.out.println(ip.getHostAddress());
	 	}
	 	catch(Exception e)
	 	{
	 		
	 	}

	 	
		
	}
}
