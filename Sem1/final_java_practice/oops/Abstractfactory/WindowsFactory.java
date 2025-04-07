public class WindowsFactory implements UIFactory{
    static String[] arr = {"button", "checkbox"};
    
    @Override
    public Button1 createButton() {
        Button1 btn =  new WindowsButton();
        return btn;
    }

    @Override
    public Checkbox createCheckbox() {
        return new WindowsCheckbox();
    }
    
}
