import java.lang.*;
import java.io.File;
import java.io.IOException;
import java.io.FileWriter;

class Demo
{
    public static void main(String arg[])
    {
      try{
         File fobj=new File("C:\\Users\\DELL\\Desktop\\LB\\Task\\Demo\\Alpha.txt"); //Create file
         
         if(fobj.createNewFile())
         {
            System.out.println("File created:"+fobj.getName());
         }
         else
         {
            System.out.println("File already exist");
         }
      }
      catch(IOException e)
      {
         System.out.println("Error");
         e.printStackTrace();
      }
    }
}