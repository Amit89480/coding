import java.util.Scanner;
 class myclass{
    public static void main(String[] args) {
      try (Scanner in = new Scanner(System.in)) {
        System.out.println("Enter your options!");
            String fruit =in.next();
            switch(fruit){
            case "Mango"->System.out.println("it is a mango");
            case "Banana"->System.out.println("it is a Banana");
            case "Pineapple"->System.out.println("it is a Pineapple");
            case "Orange"->System.out.println("it is a Orange");
            default->System.out.println("Not Present");
            }
    }


        
       
    }
}