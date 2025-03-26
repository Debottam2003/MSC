public class Email implements Notifications {
    String text;

    public Email(String text) {
        this.text = text;
    }

    @Override
    public Email create() {
        // TODO Auto-generated method stub
        return new Email("This an Email type Notification...");
    }

    @Override
    public String toString() {
        return "This is a Email type Notification...*";
    }

}
