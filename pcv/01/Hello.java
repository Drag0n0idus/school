public class Hello {
    public static void main(String[] args) {
        System.out.println("Ciselne soustavy");
        System.out.println("----------------");
        int x = Integer.parseInt(args[0]);
        System.out.format("HEX: %x%n", x);
    }
}