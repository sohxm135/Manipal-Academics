
class Bank {
    public double getRateOfInterest() {
        return 0.0;  
    }
}

// SBI
class SBI extends Bank {
    
    public double getRateOfInterest() {
        return 8.0;  // 8%
    }
}

// ICICI
class ICICI extends Bank {

    public double getRateOfInterest() {
        return 7.0;  // 7%
    }
}

// AXIS
class AXIS extends Bank {
    @Override
    public double getRateOfInterest() {
        return 9.0;  // 9%
    }
}

public class Q3 {
    public static void main(String[] args) {
        Bank sbi = new SBI();
        Bank icici = new ICICI();
        Bank axis = new AXIS();

        System.out.println("SBI Rate of Interest: " + sbi.getRateOfInterest() + "%");
        System.out.println("ICICI Rate of Interest: " + icici.getRateOfInterest() + "%");
        System.out.println("AXIS Rate of Interest: " + axis.getRateOfInterest() + "%");

        double principal = 10000; 

        System.out.println("\nInterest for an amount of " + principal + " in SBI: " + 
            (principal * sbi.getRateOfInterest() / 100));

        System.out.println("Interest for an amount of " + principal + " in ICICI: " + 
            (principal * icici.getRateOfInterest() / 100));

        System.out.println("Interest for an amount of " + principal + " in AXIS: " + 
            (principal * axis.getRateOfInterest() / 100));
    }
}
