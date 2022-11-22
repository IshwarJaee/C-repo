import java.lang.*;
import java.io.File;
import java.io.IOException;
import java.io.FileWriter;

class main
{
    public static void main(String arg[])
    {
      try{
         File fobj=new File("C:\\Users\\DELL\\Desktop\\LB\\Task\\Demo\\Demo.txt"); //Create file
         
         if(fobj.createNewFile())
         {
            System.out.println("File created:"+fobj.getName());
         }
         else
         {
            System.out.println("File already exist");
         }
           
         FileWriter fobj1=new FileWriter("Marvellous.txt");//write in file
         fobj1.write("Marvellous Infosystems");
         fobj1.close();
         System.out.println("Done with writing");   
      }
      catch(IOException e)
      {
         System.out.println("Error");
         e.printStackTrace();
      }
    }
}