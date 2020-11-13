import java.util.Scanner;
class odd{
public static void main(String args[]){
	/*Scanner sc=new Scanner(System.in);
	char a[]=new char[50];
	char temp=0,p,q;
    int i,j;
	System.out.println("Enter the String");
	a=sc.next().toCharArray();
	int l=a.length;
    System.out.println(l);
    System.out.println( i+"="+a[i]);
	
	for(i=0;i<a.length;i++){
	System.out.println( i+"="+a[i]);
	
	
}
for(i=a[0];i<a.length;i++){
	for(j=a[l-1];i<a.length;j--){
   temp=a[0];
   a[0]=a[l-1];
   a[l-1]=temp;
    System.out.println(a[i]);
	    }
}

p=a[0];
System.out.println(p);

q=a[l-1];
System.out.println(q);
}
}

*/
String str="Geek";
char a[]=str.toCharArray();
for (int i=a.length-1;i>=0 ;i++ ) {
	System.out.println(a[i]);
}
/*int l,r=0;
r=a.length-1;

for (l=0;l<r ;l++) {
	char temp=a[l];
	a[l]=a[r];
	a[r]=temp;
}
for (char c:a ) {
	 System.out.print(c);

}*/
}
}