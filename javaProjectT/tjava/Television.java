public class Television {

    int channelIndex = 1;
    int volume = 30;
    boolean isOpen = false;

    void startButton() {
        this.isOpen = true;
        System.out.println("TV is turned on!");

    }

    void shutDownButton() {
        this.isOpen = false;
        System.out.println("TV is turned off");

    }

    void volumeUp(int volUp) {

        volume += volUp;
        
        if (isOpen == false) {
            System.out.println("TV is off!, please turn on!");
        }
        else if(volUp <= 0) {
            System.out.println("Invalid Value!");
        }

        else {
            if(volUp > 100) {
                System.out.println("Volume value is to high!");
            }
            else {
                System.out.println("Your Volume is: " + volume);
            }
        }
        
    }

    void volumeDown(int volDown) {

        volume -= volDown;

        if (isOpen == false) {
            System.out.println("TV is off!, please turn on!");
        }
        else if(volDown < 0) {
            System.out.println("Invalid Value!");
        }

        else {
            if(volDown < 0) {
                System.out.println("Volume value is to low!");
            }
            else {
                System.out.println("Your Volume is: " + volume);
            }
        }
    }

    void channelUp(int channelUp) {

        channelIndex += channelUp;
        
        if(isOpen == false) {
            System.out.println("TV is off, please open!");
        }
        else if(channelUp < 0) {
            System.out.println("Invalid Value!");
        }
        else {

            if(channelIndex > 60) {
                System.out.println("Out of bounds channel");
            }

            else {
                System.out.println("Your Channel is: " + channelIndex);
            }
        }
    }

    void channelDown(int channelDown) {

        channelDown -= channelDown;
        
        if(isOpen == false) {
            System.out.println("TV is off!, please open!");
        }
        else {
            if(channelDown < 0 | channelDown > 60) {
                System.out.println("Out of bounds channel");
            }

            else {
                System.out.println("Your Channel is: " + channelDown);
            }
        }
    }
}
