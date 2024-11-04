class User {
    private String name;
    private String email;

    User(String name, String email) {
        this.name = name;
        this.email = email;
    }

    public String getName() {
        return name;
    }

    public String getEmail() {
        return email;
    }
}

class Email {
    public void sendEmail(User user, String message) {
        System.out.println("Email send to: " + user.getEmail());
        System.out.println("Message: " + message);
    }
}

public class Cohesion {
    public static void main(String args[]) {
        User user1 = new User("Deb", "debottam@gmail.com");
        Email email1 = new Email();
        email1.sendEmail(user1, "Hi welcome to coding world.");
    }
}
