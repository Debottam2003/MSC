package factory;
public class Backend {
    Notification notification = null;
    public Notification getNotification(String type){
        if(type.toLowerCase().equals("sms")){
            notification = new Sms();
        }
        else if(type.toLowerCase().equals("email")){
            notification = new Email();
        }
        else if(type.toLowerCase().equals("buzzer")){
            notification = new Buzzer();
        }
        else{
            // System.out.println("Invalid Notification Type");
            return null;
        }
        return notification;
    }
}
