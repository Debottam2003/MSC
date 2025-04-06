public class Sms implements Notifications {
    String text;

    public Sms(String text) {
        this.text = text;
    }

    @Override
    public Sms create() {
        // TODO Auto-generated method stub
        return new Sms("This is a Sms type Notification...");
    }

    @Override
    public String toString() {
        return "This is a Sms type Notification...";
    }
}
