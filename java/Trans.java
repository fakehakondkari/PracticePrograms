import java.util.*;
public class Trans 
{
public static String encryptCT(String key, String text) 
{
int[] arrange=arrangeKey(key);
int lenkey=arrange.length;
int lentext=text.length();
int row=(int)Math.ceil((double)lentext/lenkey);
char[][] grid=new char[row][lenkey];
int z=0;
for(int x=0;x<row;x++) 
{
for(int y=0;y<lenkey;y++) 
{
if(lentext==z) 
{
grid[x][y]=RandomAlpha();
z--;
}
else 
grid[x][y]=text.charAt(z);
z++;
}
}
String enc="";
for(int x=0;x<lenkey;x++) 
{
for(int y=0;y<lenkey;y++) 
{
if(x==arrange[y])
{
for(int a=0;a<row;a++) 
enc = enc + grid[a][y];
}
}
}
return enc;
}
public static char RandomAlpha()
{
Random r=new Random();
return(char)(r.nextInt(26)+'a');
}
public static int[] arrangeKey(String key) 
{
String[] keys=key.split("");
Arrays.sort(keys);
int[] num=new int[key.length()];
for(int x=0;x<keys.length;x++) 
{
for(int y=0;y<key.length();y++) 
{
if(keys[x].equals(key.charAt(y)+""))
{
num[y]=x;
break;
}
}
}
return num;
}

public static void main(String[] args) 
{
Scanner sc=new Scanner(System.in);
String line=System.getProperty("line.separator");
sc.useDelimiter(line);
System.out.println("Enter Plaintext: ");
String text=sc.next();
System.out.println("Enter Key: ");
String key=sc.next();
System.out.println();
System.out.println("Ciphertext: "+encryptCT(key, text));
}
}

