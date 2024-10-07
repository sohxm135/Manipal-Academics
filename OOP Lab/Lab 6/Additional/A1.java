class Game {
    public void type() {
        System.out.println("Indoor & Outdoor Games");
    }
}

class Cricket extends Game {
   
    public void type() {
        System.out.println("Cricket is an outdoor game");
    }
}

class Chess extends Game {
    
    public void type() {
        System.out.println("Chess is an indoor game");
    }
}

public class A1 {
    public static void main(String[] args) {
        Game game;

        game = new Cricket();
        game.type();

        game = new Chess();
        game.type();

        game = new Game();
        game.type();
    }
}
