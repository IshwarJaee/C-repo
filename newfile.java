import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program289
{
    public static void main(String arg[])
    {
        try
        {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Pleasr enter existing file name");
        String Filename=sobj.nextLine();

        File fobj=new File(Filename);

        System.out.println("Enter new file name to create");
        String newfile=sobj.nextLine();

        File fobj1=new File(newfile);
        boolean bobj1=fobj1.createNewFile();

        if(fobj.exists())
        {
          FileInputStream fiobj=new FileInputStream(fobj);
          FileOutputStream foobj=new FileOutputStream(fobj1);

          byte buffer[]=new byte[100];
          int ret=0;

          while((ret=fiobj.read(buffer))!=-1)
          {
            foobj.write(buffer);
          }
        }
        else
        {
            System.out.println("There is no such file");
        }
       
        }
        catch(IOException obj)
        {
            System.out.println(obj);
        }
    }
}        catch(IOException obj)
        {
        