import java.io.*;
import java.util.*;
import java.util.Arrays;

class Codechef{
  public static String sortString(String str)
  {
      char str1[] = str.toCharArray();
      Arrays.sort(str1);
      return new String(str1);
  }
  public static void main(String[] args)throws IOException{
    Scanner sc=new Scanner(System.in);
    int z=sc.nextInt();
    try{
    while(z-- >0){
      int a=0;
      int p=1;
    String S=sc.next();
    String S1= sortString(S);
    for(int i=0;i<S1.length();i++){
      char c=S1.charAt(i);
      int k=c-96;
      k=k*p;
      a=a+k;
      p++;
    }
    System.out.println(a);
    }
  }
  catch(Exception e){
    return;
  }
}
}