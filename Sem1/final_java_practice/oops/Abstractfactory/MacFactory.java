public class MacFactory implements UIFactory {
    static String[] arr = {"button", "checkbox"};
    @Override
    public Button1 createButton() {
        return new MacButton();
    }

    @Override
    public Checkbox createCheckbox() {
        return new MacCheckbox();
    }
    
}
