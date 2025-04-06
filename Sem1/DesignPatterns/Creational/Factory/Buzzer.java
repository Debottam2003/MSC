public class Buzzer implements Notifications {
    String text;

    public Buzzer(String text) {
        this.text = text;
    }

    @Override
    public Object create() {
        // TODO Auto-generated method stub
        return new Buzzer("This is a Buzzer type Notification...");
    }

    @Override
    public String toString() {
        return "This is a Buzzer type Notification...";
    }

}
