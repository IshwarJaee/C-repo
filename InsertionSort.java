import java.lang.*;
import java.util.*;
import java.io.*;

class InsertionSort
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int size=sobj.nextInt();

        Array aobj=new Array(size);
        aobj.Accept();
        aobj.Display();

        aobj.SelectionSort();
        System.out.println("Data after sort");
        aobj.Display();
        
    }
}

interface MarvellousSort
{
    public void Accept();
    public void Display();
    public void BubbleSort();
    public void InsertionSort();
    public void SelectionSort();
}

class Array implements MarvellousSort
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr=new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter elements");

        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements from array are:");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.print(Arr[i]+" ");
        }
        System.out.println();
    }

    public void BubbleSort()
    {}

    public void BubbleSort(char type)
    {
        int i=0,j=0,temp=0;
        boolean Swap=false;

        if(type=='I'||type=='i')
        {
            for(i=0;i<Arr.length;i++)
            {
                Swap=false;
                for(j=0;j<Arr.length-i-1;j++)
                {
                    if(Arr[j]>Arr[j+1])
                    {
                        temp=Arr[j];
                        Arr[j]=Arr[j+1];
                        Arr[j+1]=temp;
                        Swap=true;
                    }
                }
                System.out.println("Pass:"+(i+1));
                Display();
                if(Swap==false)
                {
                    break;
                }
            }
        }
        else if(type=='D'||type=='d')
        {
            for(i=0;i<Arr.length;i++)
            {
                Swap=false;
                for(j=0;j<Arr.length-i-1;j++)
                {
                    if(Arr[j]<Arr[j+1])
                    {
                        temp=Arr[j];
                        Arr[j]=Arr[j+1];
                        Arr[j+1]=temp;
                        Swap=true;
                    }
                }
                System.out.println("Pass:"+(i+1));
                Display();
                if(Swap==false)
                {
                    break;
                }
            }
        }    
    }

    public void InsertionSort()
    {
        int i=0,key=0,j=0;

        for(i=0;i<Arr.length;i++)
        {
            key=Arr[i];
            j=i-1;

            while(j>=0&&Arr[j]>key)
            {
                Arr[j+1]=Arr[j];
                j=j-1;
            }
            Arr[j+1]=key;
            System.out.println("Pass:"+(i+1));
            Display();
        }
    }

    public void SelectionSort()
    {
        int index=0;

        for(int x=0;x<Arr.length;x++)
        {
            index=x;
            for(int y=x;y<Arr.length;y++)
            {
                if(Arr[index]>Arr[y])
                {
                    index=y;
                }
            }
            int temp=Arr[x];
            Arr[x]=Arr[index];
            Arr[index]=temp;
            System.out.println("Pass:"+(x+1));
            Display();
        }
    }

}
