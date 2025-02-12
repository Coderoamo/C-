import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner myScan = new Scanner(System.in);

        String username;
        int pass;
        int pin;

        Bank james = new Bank("James", 12342, 880);
        Bank carl = new Bank("Carl", 22311, 877);
        Bank peter = new Bank("Peter", 34251, 980);
        Bank john = new Bank("John", 45241, 900);
        Bank test = new Bank("Test", 12345, 000);

        System.out.println("WELCOME TO THE BANK OF THE SPANISH EMPIRE!");
        System.out.print("Please Enter Credentials");
        System.out.println(" ");

        System.out.print("Account name: ");
        username = myScan.nextLine();

        System.out.print("PassKey: ");
        pass = myScan.nextInt();

        System.out.print("Pin: ");
        pin = myScan.nextInt();

        test.login(username, pass, pin);


        
        



        


        
        myScan.close();
    }
}