public class Factory {
    public Notifications ConcreteObjectReturn(String NotificationType) {
        Notifications n;
        NotificationType = NotificationType.toLowerCase();
        if (NotificationType.equals("sms")) {
            n = new Sms("This is a Sms type Notification...");
            return n;
        } else if (NotificationType.equals("email")) {
            n = new Email("This is a Email type Notification...");
            return n;
        } else if (NotificationType.equals("buzzer")) {
            n = new Buzzer("This is a Buzzer type Notification...");
            return n;
        } else {
            return null;
        }
    }
}
