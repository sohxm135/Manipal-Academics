
public class A2 {
        int num; 
        //Static class 
        static class X{ 
        static String str="Inside Class X";
        num=99; 
        } 
        public static void main(String args[]) 
        { 
        A2.X obj = new A2.X(); 

        System.out.println("Value of num="+obj.str); 
        } 
     
}
