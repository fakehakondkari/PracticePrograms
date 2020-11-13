

import java.util.*;
class CeaserCipher
{
    private final String ALPHABET="abcdefghijklmnopqrstuvwxyz";
    public String encryption(String plainText,int shiftKey)
    {
        plainText=plainText.toLowerCase();
        String cipherText="";
	for(int i=0;i<plainText.length();i++)
        {
		int charPosition=ALPHABET.indexOf(plainText.charAt(i));
		int keyVal=(shiftKey+charPosition)%26 ;
		char replaceVal=this.ALPHABET.charAt(keyVal);
		cipherText+=replaceVal;
	}
	return cipherText;
     }
     
     public String decryption(String cipherText,int shiftkey)
        {
          String decrypText="";
          for(int i=0;i<cipherText.length();i++)
          {
          int charPosition=ALPHABET.indexOf(cipherText.charAt(i));
          int keyVal=(charPosition-shiftkey)%26;
          char replaceVal=this.ALPHABET.charAt(keyVal);
          decrypText+=replaceVal;
          }
                  return decrypText;
        }

}

class subs
{
	public static void main(String args[])
	{
		String plainText;
		int shiftKey=4;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter plainText:");
		plainText=sc.nextLine();
		CeaserCipher cipher= new CeaserCipher();
		String cipherText = cipher.encryption(plainText,shiftKey);
                
		System.out.println();
		System.out.println("CipherText="+cipherText);

                String decrypText = cipher.decryption(cipherText,shiftKey);
                System.out.println();
                System.out.println("DecrptedText="+decrypText);

	}
}

