import java.util.Scanner;

public class Bank {
    Scanner classScan = new Scanner(System.in);

    String username;
    Boolean isActive = false;
    int pass;
    int pin;
    int accMoney = 0;
    
    Bank(String username, int pass, int pin) {

        this.username = username;
        this.pass = pass;
        this.pin = pin;
    }

    boolean authen(String username, int pass, int pin) {

        if(!this.username.equals(username)) {
            return false;
        }

        if(this.pass != pass) {
            return false;
        }

        if(this.pin != pin) {
            return false;
        }

        return true;
    }

    void login(String username, int pass, int pin) {

        if(!authen(username, pass, pin)) {
            System.out.println("Err: No Credentials!");
        }

        else {
            System.out.println("Welcome,  " + username + "!");
            mainMenu();
        }

    }

    void mainMenu () {

        System.out.println(" ");
        System.out.println("1 Deposit Cash");
        System.out.println("2 Withraw Cash");
        System.out.println("3 Check Balance");
        System.out.println("4 Account Related Features");

        System.out.print("Enter Option: ");
        int option = classScan.nextInt();

        switch (option) {
            case 1:

                cashDepo();
                checkBal();
                repeater();
            
                break;
        
            case 2:

                Withraw();
                checkBal();
                repeater();

                break;
            
            case 3:

                checkBal();
                repeater();

                break;
            
            case 4:     

                accFeatures();
                repeater();

                break;
        }
    }

    double cashDepo() {

        double depositedCash = 0;

        System.out.println();
        System.out.print("Enter Cash: ");
        depositedCash = classScan.nextDouble();

        if (depositedCash < 0 || depositedCash > 1000) {
            System.out.println("Entered Value invalid!");
        }
        else {
            accMoney += depositedCash;
        }

        return depositedCash;
    }

    void Withraw() {

        int withrawAmmount = 0;

        System.out.print("Enter Ammount: ");
        withrawAmmount = classScan.nextInt();

        if( withrawAmmount > accMoney) {

            System.out.println("Your still poor!");
        }
        else {
            System.out.println("WithDraw Seccessful!");
            accMoney -= withrawAmmount;

        }
    }

    void checkBal() {

        System.out.println("Balance: " + accMoney);

    }

    void accFeatures() {

        System.out.println("Welcome!, " + username);
        System.out.println("What would you like to do?");
        System.out.println();
        System.out.println("1 Account Deactivation or deletion");
    }

    void repeater() {
        mainMenu();
        System.out.println();
    }






}