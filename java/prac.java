import java.util.Scanner;
class prac{

	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n,i,j,k=1;
		System.out.println("Enter n:");
		n=sc.nextInt();
		System.out.println("number :"+n);
        for(i=1;i<=n;i++){  //5
         for (j=1;j<=i;j++ ) {
          System.out.print(k);
          k++;	
         }
         System.out.println();
        }
	
		
		}
	}
