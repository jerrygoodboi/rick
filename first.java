class GenerateRandom {
    public static void main( String args[] ) {
      int min = 0;
      int max = 1;
       String[] strAr1=new String[] {"No", "Yes"}; 
      //Generate random int value
      int random_int = (int)Math.floor(Math.random()*(max-min+1)+min);
      System.out.println(strAr1[random_int]);
    }
}
