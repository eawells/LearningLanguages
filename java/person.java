class Person{
    
    public static void main(String[] args){
	Person p = new Person(81, "Shirley Ann", 'f', "good", true, false);
	System.out.println(p.getAge());
	System.out.println(p.getName());
	System.out.println(p.getGender());
	System.out.println(p.getMentalHealth());
	p.marries("Juan Carlos");
	System.out.println("After marrying Juan: " + p.getMentalHealth());
	p.divorces("Juan Carlos");
	System.out.println("After divorcing him: " + p.getMentalHealth());
	p.getsOlderBy(1);
	System.out.println(p.getMentalHealth());
	p.makesFriend("Lucas");
	System.out.println(p.getMentalHealth());
	p.makesFriend("Victory");
	System.out.println(p.getMentalHealth());
	
    }


    private int age;
    private String name;
    private char gender;
    private String mentalHealth;
    private boolean married;
    private boolean divorced;
    /**
       A person has an age, name, gender, mental health, and can be married or
       divorced. 
     **/
    Person(int a, String n, char g, String h, boolean m, boolean d){
	age = a;
	name = n;
	gender = g;
	mentalHealth = h;
	married = m;
	divorced = d;
    }
    
    private int getAge(){
	return age;
    }
    private String getName(){
	return name;
    }
    private char getGender(){
	return gender;
    }
    private String getMentalHealth(){
	return mentalHealth;
    }
    private boolean getMaritalStatus(){
	return married;
    }

    private void getsOlderBy(int n){
	age += n;
	//if a year passes after a divorce, change mentalHealth to good
	if(n >=1 && !married && divorced){
	    mentalHealth = "good";
	}
	
    }
    
    private void marries(String name){
	married = true;
	if(name.equals("Juan Carlos")){
		mentalHealth = "Depressed";
	    }
	else{
		mentalHealth = "Happy";
	    }
    }
	
    private void divorces(String name){
	divorced = true;
	married = false;
	if(name.equals("Juan Carlos")){
		mentalHealth = "Happy, but recovering from depression";
	    }
	else{
		mentalHealth = "Feels sad, turmoil";
	    }
	
    }

    private void exercise(){
	mentalHealth = "great!";
    }
    
    private void makesFriend(String goodOrBad){
	if(goodOrBad.equalsIgnoreCase("Lucas") || goodOrBad.equalsIgnoreCase("Victory") || goodOrBad.equalsIgnoreCase("good")){
		mentalHealth = "wonderful!";
	    }
	else if(goodOrBad.equalsIgnoreCase("bad")){
	    mentalHealth = "not so great";
	}
	else{
	    mentalHealth = "good";
	}
	    
    }
    
}


